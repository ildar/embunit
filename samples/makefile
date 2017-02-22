CC = gcc
CFLAGS = -g
LDFLAGS = -L../lib
INCLUDES = -I..
LIBS = 
RM = rm -f
TARGET = samples
OBJS = AllTests.o counter.o counterTest.o person.o personTest.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) -lembUnit $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

clean:
	-$(RM) $(TARGET) $(OBJS)

.PHONY: clean all
