NAME=LARVE
## ref :  https://www.google.com/search?q=larves+%21&ei=9xJ-Y6CiHcXVkdUP67yt-AE&ved=0ahUKEwjg-aLnp8T7AhXFaqQEHWteCx8Q4dUDCA8&uact=5&oq=larves+%21&gs_lcp=Cgxnd3Mtd2l6LXNlcnAQAzIECAAQQzIECAAQQzIFCAAQgAQyBQgAEIAEMgQIABBDMgUIABCABDIECAAQQzIFCAAQgAQyBAguEEMyBQgAEIAESgQIQRgASgQIRhgAUABYAGDsA2gAcAF4AIABLogBLpIBATGYAQCgAQHAAQE&sclient=gws-wiz-serp
CC = c++
FLAG = -Wall -Wextra -std=c++98  -Werror
INCLUDES = -I$(HEADERS_DIR)

HEADERS_LIST =	Bureaucrat.h \
				Form.h \
				

				
HEADERS_DIR = ./include/
HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SRC_LIST =	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \



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
