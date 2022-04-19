#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include "../AM437x_HW/AM437x_PRCM.h"
#include "../AM437x_HW/AM437x_MMU.h"
#include "../AM437x_HW/AM437x_UART.h"
#include "../AM437x_HW/AM437x_I2C.h"
#include "../AM437x_HW/AM437xBB_Console.h"
#include "IO_UART.h"
//==================================================================================================
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// Функция инициализации - вызывается до main()
Void AppInitFunc( UArg A0, UArg A1 ) {
  AM437x_UART_EnableClock(0);
  AM437x_I2C_EnableClock(1);
}
//--------------------------------------------------------------------------------------------------
Int main() {
  Mmu_disable();
  MMU_ConfigMemStd();
  Mmu_enable();
  AM437x_I2C0_SetPinMux();
  AM437x_UART_Init( 0, 115200,
    AM437x_UART_PARITY_NONE|AM437x_UART_STOPBIT_1|AM437x_UART_CHARLEN_8,
    AM437x_UART_RX_FIFO_TRIG_60, AM437x_UART_TX_FIFO_TRIG_56 );
  ConsoleStrOut("RTest_EEPROM started\r\n");
  AM437x_I2C_Init(0);
  ConsoleStrOut("BIOS_start...\r\n");
  BIOS_start();  // Запуск SYS/BIOS - функция никогда не заканчивается
  return(0);
}
//--------------------------------------------------------------------------------------------------
Void TaskUART( UArg A0, UArg A1 ) {  IOUART_Task();  }
//==================================================================================================
