# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 16:06:56 by ysoroko           #+#    #+#              #
#    Updated: 2021/07/12 11:36:37 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

SRC				=	ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_itoa.c \
					ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_split.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_tolower.c \
					ft_toupper.c \
					\
					ft_char_alloc.c \
					ft_has_other_chars.c \
					ft_longest_strlen_in_strtab.c \
					ft_n_chars_in_str_tab.c \
					ft_n_chars_in_str.c \
					ft_n_ints_in_line.c \
					ft_putstr_tab_fd.c \
					ft_str_tab_len.c \
					ft_strchrset.c \
					ft_strlcmp.c \
					ft_wrong_extension.c \
					\
					ft_dl_lst_new_exit.c \
					ft_dl_lst_add_front.c \
					ft_dl_lst_add_back.c \
					ft_dl_lst_size.c \
					ft_dl_lst_last.c \
					ft_dl_lst_first.c \
					ft_dl_lst_insert_element.c \
					ft_dl_lst_delone.c \
					ft_dl_lst_delone_relink.c \
					ft_dl_lstclear.c \
					ft_dl_lstiter.c \
					ft_dl_lstmap_exit.c \
					\
					ft_cut_string_at_first_char.c \
					ft_free_and_realloc.c \
					ft_strcmp.c \
					ft_strcmptab.c \
					ft_strstr.c \
					ft_calloc_exit.c \
					ft_lstnew_exit.c \
					ft_strtrim_exit.c \
					ft_free_str.c \
					ft_strdup_exit.c \
					ft_extract_first_word.c \
					ft_extract_second_word.c \
					ft_strchrn.c \
					ft_cut_string_at_first_charset.c \
					ft_str_only_has_chars_from_charset.c \
					ft_strcpy.c \
					ft_strcpy_until_c.c \
					ft_strdup_until_c.c \
					ft_strcpy_until_c_from_charset.c \
					ft_strdup_until_c_from_charset.c \
					ft_strlen_until_c_from_charset.c \
					ft_strlen_until_c.c \
					ft_str_has_unclosed_quotes.c \
					ft_strjoin_free_pref_exit.c \
					ft_strjoin_exit.c \
					ft_read_exit.c \
					ft_cut_string_at_last_char.c \
					ft_strdup_until_c_from_charset_not_quoted.c \
					ft_strlen_until_c_from_charset_not_quoted.c \
					ft_strcpy_until_c_from_charset_not_quoted.c \
					ft_strtrim_exit_replace_src.c \
					ft_strldup_exit.c \
					ft_char_between_the_quotes.c \
					ft_extract_first_word_qx.c \
					ft_extract_second_word_qx.c \
					ft_strxtrim_char.c \
					ft_strchr_not_quoted.c \
					ft_pos_after_word_in_string.c \
					ft_cut_string_at_last_charset.c \
					ft_strchrset_not_quoted.c \
					ft_char_is_a_start_quote.c \
					ft_extract_first_word_alpha_underscore.c \
					ft_chars_is_a_dollar_sign.c \
					ft_pos_after_n_one_or_two_words.c \
					ft_strdup_exit_and_free_src.c \
					ft_is_env_start_brace.c \
					ft_is_env_char.c \
					ft_display_first_n_chars.c \
					ft_display_first_n_chars_with_i.c \
					ft_is_a_valid_double_quote.c \
					ft_isspace.c \
					ft_recursive_power.c \
					ft_strjoin_char_free_prev_exit.c \
					
					

BONUS			=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c

BOLD_GREEN			=	\033[1;32m

NO_COLOR			=	\033[0m

MAIN_PART		=	$(filter-out $(BONUS), $(SRC))

OBJS			=	$(SRC:.c=.o)

MAIN_PART_OBJS	=	$(MAIN_PART:.c=.o)

NAME			=	libft.a

LINK			=	ar rc

all: 		$(NAME)

$(NAME):	$(MAIN_PART_OBJS)
			@$(LINK) $(NAME) $(MAIN_PART_OBJS)
			@$(LIBFT_COMPILED)

bonus:		$(OBJS)
			@$(LINK) $(NAME) $(OBJS)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

COMPILING_LIBFT	=	echo "\n📚 $(BOLD_GREEN)Compiling Libft... \n";

LIBFT_COMPILED	=	echo "📚 Libft compiled! \n$(NO_COLOR)";
					
.c.o:	
	@${CC} ${CFLAGS} -I include -c $< -o ${<:.c=.o} \

.PHONY:		all clean fclean re bonus