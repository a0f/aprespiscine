SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
SRCDIR = src
OBJDIR = obj

all: build

build : $(OBJS)
	gcc $(OBJS) -o build

%.o : %.c
	gcc -c $< -o $@

clean:
	rm -f build $(OBJS)

.PHONY: all clean

