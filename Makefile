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

UTILS = utils/ft_atoi.c \
		utils/ft_utils.c \

SERVER = server/ft_server.c \

CLIENT = client/ft_client.c \

GCC = gcc

FLAGS = -Wall -Wextra -Werror

all:
	$(GCC) $(FLAGS) 

server:
	$(GCC) $(FLAGS) $(SERVER) $(UTILS)

.PHONY: all clean fclean server re