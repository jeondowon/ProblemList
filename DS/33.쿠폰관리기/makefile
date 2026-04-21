CC = g++
SRC = DS033.cpp DS033stack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS033

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)