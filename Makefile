# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 11:40:59 by ysoroko           #+#    #+#              #
#    Updated: 2021/07/09 12:12:21 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------ Sources ------------------------------

# Files
UTILS		=	utils/ft_atoi.c \
				utils/ft_utils.c \

SERVER		=	ft_server/ft_server.c \

CLIENT		=	ft_client/ft_client.c \

# Sources and objects
SERVER_SRC	=	$(UTILS) \
				$(SERVER) \

SERVER_OBJS	=	$(SERVER_SRC:.c=.o)

CLIENT_SRC	=	$(UTILS) \
				$(CLIENT) \

CLIENT_OBJS	=	$(CLIENT_SRC:.c=.o)

OBJS		=	$(CLIENT_OBJS) \
				$(SERVER_OBJS)

# ------------------------------ Constant strings ------------------------------

GCC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-I include

SERVER_NAME	=	server

CLIENT_NAME	=	client

NAME		=	minitalk

# ------------------------------ Colors ------------------------------

BOLD_PURPLE	=	\033[1;35m

BOLD_CYAN	=	\033[1;36m

BOLD_YELLOW	=	\033[1;33m

NO_COLOR	=	\033[0m

# ------------------------------ Messages ------------------------------

COMP_START	=	echo "\n🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Compiling...\n"

SERV_READY	=	echo "\n📥 Server ready!\n"

CLI_READY	=	echo "\n📟 Client ready!\n"

CLEANED		=	echo "\n🧼 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed all the \".o\" files \n"

FCLEANED	=	echo "\n🧽 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables \n"


# ------------------------------ Rules ------------------------------

.c.o:
	@${GCC} ${FLAGS} $(INCLUDE) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): server client

server: $(SERVER_OBJS)
	@$(GCC) $(FLAGS) $(SERVER_OBJS) -o $(SERVER_NAME)
	@$(SERV_READY)

client: $(CLIENT_OBJS)
	@$(GCC) $(FLAGS) $(CLIENT_OBJS) -o $(CLIENT_NAME)
	@$(CLI_READY)

clean:
	@rm -rf $(OBJS)
	@$(CLEANED)

fclean: clean
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	@$(FCLEANED)

re:	fclean all

.PHONY: all minitalk server client clean fclean re