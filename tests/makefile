CC = gcc
CFLAGS = -g
LDFLAGS = -L../lib
INCLUDES = -I..
LIBS = 
RM = rm -f
TARGET = embUnitTest
OBJS = AllTests.o RepeatedTestTest.o assertTest.o stdImplTest.o TestCallerTest.o TestCaseTest.o TestResultTest.o MockTestCase.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) -lembUnit $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

clean:
	-$(RM) $(TARGET) $(OBJS)

.PHONY: clean all
