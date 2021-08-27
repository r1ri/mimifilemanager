.PHONY = all clean
cc = gcc
# libs = 
flags = -g

SRCS = $(wildcard src/*.c)
BINS = $(SRCS:src/%.c=%)
LINK = $(BINS:%=build/%.o)

all: ${BINS}
	$(cc) $(libs) $(flags) $(LINK)

%: src/%.c
	$(cc) -c $< -o build/$@.o

clean:
	rm build/* a.out

install: all
	cp a.out /usr/local/bin/mfm
