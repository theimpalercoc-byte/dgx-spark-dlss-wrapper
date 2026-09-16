CC ?= gcc
CFLAGS ?= -O3 -fPIC -shared -Wall
MINGW ?= x86_64-w64-mingw32-gcc

all: nvngx_dlssnr.so

nvngx_dlssnr.so: nvngx_dlssnr_wrapper.c
	$(CC) $(CFLAGS) -o nvngx_dlssnr.so nvngx_dlssnr_wrapper.c -ldl

pe: nvngx_dlssnr_proxy_pe.c
	$(MINGW) -shared -O2 -s -o nvngx_dlssnr.dll nvngx_dlssnr_proxy_pe.c

clean:
	rm -f nvngx_dlssnr.so nvngx_dlssnr.dll
