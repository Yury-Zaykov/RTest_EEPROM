## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,a9fg linker.cmd package/cfg/app_pa9fg.oa9fg

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/app_pa9fg.xdl
	$(SED) 's"^\"\(package/cfg/app_pa9fgcfg.cmd\)\"$""\"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles/Release/configPkg/\1\""' package/cfg/app_pa9fg.xdl > $@
	-$(SETDATE) -r:max package/cfg/app_pa9fg.h compiler.opt compiler.opt.defs
