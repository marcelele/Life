life:
	$(CC) -c main.c cells.c rules.c args.c io.c pngio.c -Wall -ansi -pedantic
	$(CC) -o life  main.o cells.o rules.o args.o io.o pngio.o -lpng -Wall -ansi -pedantic

.PHONY: clean
clean:
	 rm -f *.o life
