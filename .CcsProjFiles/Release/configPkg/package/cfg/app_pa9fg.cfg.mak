# invoke SourceDir generated makefile for app.pa9fg
app.pa9fg: .libraries,app.pa9fg
.libraries,app.pa9fg: package/cfg/app_pa9fg.xdl
	$(MAKE) -f C:\WorkspaceRaptor\RTest_EEPROM\BiosConfig/src/makefile.libs

clean::
	$(MAKE) -f C:\WorkspaceRaptor\RTest_EEPROM\BiosConfig/src/makefile.libs clean

