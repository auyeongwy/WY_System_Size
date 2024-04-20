CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -O3 -flto
ARCH = -march=native
OS = -D'_OS_TYPE_="Linux"'
TARGETEXE = WY_System_Size


.PHONY: clean

all: $(TARGETEXE)

$(TARGETEXE): WY_System_Size.c
	$(CC) $(CFLAGS) $(ARCH) $(OS) WY_System_Size.c -o WY_System_Size

clean:
	rm -f WY_System_Size