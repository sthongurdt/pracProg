CC  =   gcc
CFLAGS  = -g -lm
OTHERFLAGS = -c

main:  principal.o tadTriangulo.o tadPunto.o
	$(CC) $(CFLAGS)  principal.o tadPunto.o tadTriangulo.o -o triangulo

principal.o: principal.c
	$(CC)  $(CFLAGS) $(OTHERFLAGS) principal.c

tadTriangulo.o: tadTriangulo.c
	$(CC)  $(CFLAGS) $(OTHERFLAGS) tadTriangulo.c

tadPunto.o: tadPunto.c
	$(CC)  $(CFLAGS) $(OTHERFLAGS) tadPunto.c
