life:
	$(CC) -c main.c cells.c rules.c args.c io.c pngio.c -lpng -Wall -ansi -pedantic
	$(CC) -o life  main.o cells.o rules.o args.o io.o pngio.o -lpng -Wall -ansi -pedantic
clean: always
	 rm *.o life
always:
