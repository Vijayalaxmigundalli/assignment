CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/rect.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/rect.o


$(OBJ)/rect.o: $(SRC)/rect.cpp
	$(CC) $(CFLAGS) $(SRC)/rect.cpp $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"

