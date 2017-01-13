CC      = g++
CFLAGS  = -g -Wall -std=c++11
LIBS    = -lzbar
RM	= rm -f
TARGET  = zbartest

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(LIBS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
