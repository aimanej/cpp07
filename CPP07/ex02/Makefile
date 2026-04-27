CC= c++

Flags= -Wall -Wextra -Werror

Srcs= main.cpp

Header= Array.hpp

Name= arr

all:$(Name)

$(Name): $(Srcs) $(Header)
	$(CC) $(Flags) $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re: clean all

.PHONY: make re all clean fclean