CC     = gcc
CFLAGS = -std=c99 -Wall -Wextra -pedantic

SRCS = $(wildcard src/*.c)
BINS = $(patsubst src/%.c,bin/%,$(SRCS))

all: $(BINS)

bin/%: src/%.c
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin

.PHONY: all clean
