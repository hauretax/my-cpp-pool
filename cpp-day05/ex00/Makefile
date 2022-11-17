NAME=Slimane
## ref :  https://www.google.com/search?q=paroles+de+slimane+quand+je+serai+grand&oq=Maman%2C+quand+je+serai+grand&aqs=chrome..69i57j46i512j0i22i30l7.1037j0j7&sourceid=chrome&ie=UTF-8&si=AC1wQDAmhH4WxhqkLyzXLNCgm7uMlL-cwjtGo7YoiLsJI42k1Zt3T5h9PClNLNtt0Z7jv-9ZtGgIhGCInAvCA_VXwyfTEp-ItMFOyZiBNM49mpIh2cseHgbXALo6zsG4sVT0sHRcVYJQ9qvg0ipY_RyqLDcPMs50BND_LAYYMUHaFojpkKsJkCE%3D&ictx=1&ved=2ahUKEwjP9vODv7X7AhXvXaQEHW-jAfQQw_oBegQIUxAC
CC = c++
FLAG = -Wall -Wextra -std=c++98  -Werror
INCLUDES = -I$(HEADERS_DIR)

HEADERS_LIST =	Bureaucrat.h \
				

				
HEADERS_DIR = ./include/
HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SRC_LIST =	main.cpp \
			Bureaucrat.cpp \



SRC_DIR = ./src/
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))

OBJ_LIST = $(patsubst %.cpp, %.o, $(SRC_LIST))
OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_LIST))

all: $(NAME)

$(NAME):$(OBJ_DIR) $(OBJ)
	@$(CC) $(FLAGS)  $(OBJ) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@


clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

sani :$(OBJ_DIR) $(OBJ)
	@$(CC) $(CCF) $(FLAGS) $(OBJ) -o $(NAME)

test: all
	./$(NAME)

re: fclean all

.PHONY: all clean fclean re sani
