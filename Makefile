CC = gcc
CFLAGS =
CFLAGS += -O3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -DT="unsigned long long"
CFLAGS += -DFMT=\"llu\"

all:
	$(CC) $(CFLAGS) binomial.c -o binomial