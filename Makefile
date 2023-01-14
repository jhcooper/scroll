# Adjust the next three lines if you're on a Pi
# FLAVOR = nopi
 INCLUDE = $(INCLUDE_NOPI)
 LDFLAGS = $(LDFLAGS_NOPI)

 INCLUDE_NOPI := -I ~/include
 LDFLAGS_PI := -L ~/lib -lsense -lm
 INCLUDE_NOPI :=
 LDFLAGS_NOPI := -lncurses

all: scroll

scroll: main.o display.o input.o
	cc -o scroll $^ -lncurses
run: scroll
	./scroll
clean:
	rm -f *.o scroll
main.o: main.c scroll.h
	cc -g -c  $< -I ~/include
display.o: display.c scroll.h
	cc -o $@ -c $< $(INCLUDE)
input.o: input.c scroll.h
	cc -o $@ -c $< $(INCLUDE)
