//==================================================================================================
#include <ti/sysbios/knl/Task.h>
#include <sstream>
#include <string.h>
#include "AM437xBB_Console.h"
#include "AM437x_UART.h"
#include "IO_UART.h"
#include "../AM437x_HW/AM437x_I2C.h"
//==================================================================================================
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#define IO_UART_INDEX 0  // ����� ������������� UART
//--------------------------------------------------------------------------------------------------
TIOUART IOUART;
//--------------------------------------------------------------------------------------------------
void IOUART_Task_CPP() {  IOUART.Task();  }
//==================================================================================================
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
extern "C" {
//--------------------------------------------------------------------------------------------------
void IOUART_Task() {  IOUART_Task_CPP();  }
//--------------------------------------------------------------------------------------------------
}
//==================================================================================================
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void TIOUART::Task() {
  ConsoleStrOut("Starting TIOUART::Task()\n\r");
  for(;;) {
    // �������� ����������� ����� ������ � ����� ���������
    AM437x_UART_EventPend( IO_UART_INDEX, AM437x_UART_EVENT_RX, 1000 );
    for(;;) {
      IArg GateKey = AM437x_UART_GateEnter(IO_UART_INDEX);
      char Buf[100];
      unsigned RdCount = AM437x_UART_Read( IO_UART_INDEX, Buf, sizeof(Buf) );
      AM437x_UART_GateLeave( IO_UART_INDEX, GateKey );
      if(RdCount==0)  break;
      for( unsigned i=0; i<RdCount; ++i ) {
        if( Buf[i]=='z' || Buf[i]=='Z' )  ConsolePrintf("Hello!\n\r");
        if( Buf[i]=='x' || Buf[i]=='X' ) {
            int a=10;
            ConsolePrintf("a=%d\n\r",a);
            std::ostringstream OS;  OS << "a=" << a << "\r\n";
            ConsoleStrOut(OS.str().c_str());
        }
      }
    }
    ConsoleStrOut(".");
  }
}
//==================================================================================================
