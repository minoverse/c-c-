CC = gcc
sourcefiles = main.c tradestocks.c
objects = $(sourcefiles:.c=.o)
TARGET = lastweektask
all: $(TARGET)
$(TARGET): $(objects)
	$(CC) -o $(TARGET) $^


%.o: %.c tradestocks.h
	$(CC) -c $< -o $@

clean:
	rm -f $(objects) $(TARGET)
