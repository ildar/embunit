CC = gcc
CFLAGS = -g
LDFLAGS = -L../lib
# final / removed for windows environment
INCLUDES = -I./tbcuppa
LIBS = 
RM = rm -f

all: bcuppa tcuppa buma tuma

bcuppa:./tbcuppa/bcuppa.c ./tbcuppa/strvec.c
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(LDFLAGS) ./tbcuppa/bcuppa.c ./tbcuppa/strvec.c $(LIBS)

tcuppa:./tbcuppa/tcuppa.c ./tbcuppa/strvec.c
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(LDFLAGS) ./tbcuppa/tcuppa.c ./tbcuppa/strvec.c $(LIBS)

buma:./tbuma/buma.c ./tbcuppa/strvec.c
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(LDFLAGS) ./tbuma/buma.c ./tbcuppa/strvec.c $(LIBS)
	
tuma:./tbuma/tuma.c ./tbcuppa/strvec.c
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(LDFLAGS) ./tbuma/tuma.c ./tbcuppa/strvec.c $(LIBS)

clean:
	$(RM) bcuppa tcuppa buma tuma *.exe

.PHONY: clean all
