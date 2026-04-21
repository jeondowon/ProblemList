CC = g++
SRC = DS043.cpp DS043stack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS043

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)