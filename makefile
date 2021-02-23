SRC=first.c
OBJ=first.o
PROG=run

#$(PROG): $(OBJ)
#	gcc $(OBJ) -o $(PROG)

#$(OBJ):	$(SRC)

$(OBJ): $(SRC)
	gcc $(SRC) -o $(OBJ)
