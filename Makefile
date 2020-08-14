alert.exe: alert.c
	@echo Compiling...
	cl.exe alert.c /link User32.lib

install: alert.exe
	@echo Adding an alias to .bashrc...
	echo 'alias alert-win="$(CURDIR)/alert.exe"' >> ~/.bashrc
