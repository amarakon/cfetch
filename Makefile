PREFIX = /usr/local
CFLAGS=-O2 -Wall -Wextra -lX11 -lpci
CACHE=$(shell if [ "$$XDG_CACHE_HOME" ]; then echo "$$XDG_CACHE_HOME"; else echo "$$HOME"/.cache; fi)

all: cfetch

clean:
	rm -f cfetch $(CACHE)/cfetch

cfetch: cfetch.c cfetch.h config.h
	$(CC) cfetch.c -o cfetch $(CFLAGS)
	strip cfetch

install: cfetch
	install ./cfetch ${PREFIX}/bin/cfetch

uninstall:
	rm ${PREFIX}/bin/cfetch
