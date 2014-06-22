cc = cl.exe
link = link.exe
as = ml.exe
CFLAGS = /O2

bin = VsCPUID.exe

.PHONY: all clean
all: $(bin)


$(bin):	main.obj cpuid.lib
		$(link) /subsystem:console /out:$(bin) main.obj cpuid.lib

cpuid.lib: cpuname.obj cpuff.obj smf.obj
		$(link) /lib cpuname.obj cpuff.obj smf.obj /out:cpuid.lib
main.obj: main.c
		$(cc) /c $(CFLAGS) main.c

cpuname.obj: cpuname.asm
		$(as) /c cpuname.asm

cpuff.obj: cpuff.asm
		$(as) /c cpuff.asm

smf.obj: smf.asm
		$(as) /c smf.asm

clean:
		del *.obj *.lib $(bin)