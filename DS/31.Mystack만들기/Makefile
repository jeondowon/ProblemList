CC = g++
SRC = DS031.cpp DS031stack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS031

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)