CC = gcc
CFLAGS += -g -Wall
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
SRCDIR = src
OBJDIR = obj

all: build

build: $(OBJS)
	$(CC) $(OBJS) -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f build $(OBJS)

.PHONY: all clean
