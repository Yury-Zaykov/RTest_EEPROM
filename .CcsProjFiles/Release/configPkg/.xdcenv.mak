#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_76_03_01/packages;C:/WorkspaceRaptor/Packages
override XDCROOT = C:/ti/ccs1020/xdctools_3_62_00_08_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_76_03_01/packages;C:/WorkspaceRaptor/Packages;C:/ti/ccs1020/xdctools_3_62_00_08_core/packages;..
HOSTOS = Windows
endif
