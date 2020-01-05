CC = g++
CFLAGS = -g -Wall -I include/ -std=c++14
OBJS = lib/main.o lib/GameManager.o lib/IOmanager.o lib/Board.o lib/Piece.o lib/Algorithm.o
TARGET = CheckMate.out

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

lib/main.o: src/main.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

lib/GameManager.o: src/GameManager.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

lib/IOmanager.o: src/IOmanager.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

lib/Board.o: src/Board.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

lib/Piece.o: src/Piece.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

lib/Algorithm.o: src/Algorithm.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm lib/*
	rm $(TARGET)
