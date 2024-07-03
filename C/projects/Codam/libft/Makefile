CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c11

# Rule to compile a file into an executable
%: %.c
    $(CC) $(CFLAGS) $< -o $@ $(LDLIBS)