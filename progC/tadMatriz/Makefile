CC  =   gcc
CFLAGS  = -g
OTHERFLAGS = -c

main:  principal.o Matriz.o
	$(CC) $(CFLAGS)  principal.o Matriz.o -o matriz

principal.o: principal.c
	$(CC)  $(CFLAGS) $(OTHERFLAGS) principal.c

Matriz.o: Matriz.c
	$(CC)  $(CFLAGS) $(OTHERFLAGS) Matriz.c
