# ◦ write
# ◦ signal
# ◦ sigemptyset
# ◦ sigaddset
# ◦ sigaction
# ◦ kill
# ◦ getpid
# ◦ malloc
# ◦ free
# ◦ pause
# ◦ sleep
# ◦ usleep
# ◦ exit

UTILS	=	utils/ft_atoi.c \
			utils/ft_utils.c \

SERVER	=	ft_server/ft_server.c \

CLIENT	=	ft_client/ft_client.c \

SRC		=	$(UTILS) \
			$(SERVER) \
			$(CLIENT) \

OBJS =  $(SRC:.c=.o)


GCC = gcc

FLAGS = -Wall -Wextra -Werror

SERVER_NAME = server

CLIENT_NAME = client

.c.o:
	@${GCC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

all: $(OBJS)
	$(GCC) $(FLAGS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)

.PHONY: all clean fclean server re