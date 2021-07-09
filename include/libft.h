/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:32:25 by ysoroko           #+#    #+#             */
/*   Updated: 2021/05/06 11:53:41 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

/*
** STRUCTURES
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_dl_lst
{
	void			*content;
	struct s_dl_lst	*next;
	struct s_dl_lst	*previous;
}				t_dl_lst;

/*
** PROTOTYPES
*/

int			ft_atoi(const char *str);
void		ft_bzero(void *str, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_char_alloc(int n_chars, char c);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_has_other_chars(char *str, const char *allowed_charset);
char		*ft_itoa(int n);
int			ft_longest_strlen_in_strtab(char **str_tab);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
				void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *str, int c, size_t len);
int			ft_n_chars_in_str(char *str, char c);
int			ft_n_chars_in_str_tab(char **str_tab, char c);
int			ft_n_ints_in_line(char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putstr_tab(char **str_tab, int fd);
char		**ft_split(const char *str, char charset);
char		*ft_strcat(char *pref, char *suff);
char		*ft_strchr(const char *str, int c);
char		*ft_strchrset(char *str, char *charset);
char		*ft_strdup(const char *src);
char		*ft_strjoin(char const *pref, char const *suff);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_strlcmp(char *s1, char *s2);
size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize);
int			ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack,
				const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_str_tab_len(char **str_tab);
char		*ft_strtrim(char const *str, char const *except);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_wrong_extension(char *file_name,
				char *expected_extension);
void		ft_cut_string_at_first_char(char *str, char c);
char		*ft_free_and_realloc(char *str, int size);
int			ft_strcmp(char *s1, char *s2);
int			ft_strcmptab(char *str_to_compare, char **str_tab);
char		*ft_strstr(char *haystack, char *needle);
t_list		*ft_lstnew_exit(void *content);
void		*ft_calloc_exit(size_t count, size_t size);
char		*ft_strtrim_exit(char *str, char *except);
char		*ft_free_str(char **str);
char		*ft_strdup_exit(const char *src);
char		*ft_extract_first_word(char *from, char *separators);
char		*ft_extract_second_word(char *from, char *separators);
int			ft_strchrn(char *str, int c);
void		ft_cut_string_at_first_charset(char *str, char *charset);
int			ft_str_only_has_chars_from_charset(char *str,
				char *charset);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strcpy_until_c(char *dest, const char *src, char c);
char		*ft_strdup_until_c(const char *src, char c);
char		*ft_strdup_until_c_from_charset(const char *src,
				char *charset);
char		*ft_strcpy_until_c_from_charset(char *dest,
				const char *src, char *set);
int			ft_strlen_until_c_from_charset(const char *str,
				char *charset);
int			ft_strlen_until_c(const char *str, char c);
t_dl_lst	*ft_dl_lst_new_exit(void *content);
void		ft_dl_lst_add_front(t_dl_lst *add_before,
				t_dl_lst *new_member);
int			ft_dl_lst_size(t_dl_lst *first);
t_dl_lst	*ft_dl_lst_last(t_dl_lst *first);
t_dl_lst	*ft_dl_lst_first(t_dl_lst *last);
void		ft_dl_lst_insert_element(t_dl_lst *to_insert,
				t_dl_lst *after_this);
void		ft_dl_lst_add_back(t_dl_lst *add_after,
				t_dl_lst *new_member);
void		ft_dl_lstdelone(t_dl_lst *to_delete, void (*del)(void*));
void		ft_dl_lstdelone_relink(t_dl_lst *to_delete,
				void (*del)(void*));
void		ft_dl_lstclear(t_dl_lst *lst, void (*del)(void*));
void		ft_dl_lstiter(t_dl_lst *lst, void (*f)(void *));
t_dl_lst	*ft_dl_lstmap_exit(t_dl_lst *l, void *(*f)(void *),
				void (*del)(void *));
char		ft_str_has_unclosed_quotes(char *s);
char		*ft_strrchr_not_in_quotes(char *str, char c);
char		*ft_strjoin_free_pref_exit(char **pref, char *suff);
char		*ft_strjoin_exit(char *pref, char *suff);
int			ft_read_exit(int fd, void *buff, size_t b_bytes);
void		ft_cut_string_at_last_char(char *str, char c);
void		ft_cut_string_at_last_charset(char *str, char *charset);
int			ft_strlen_until_c_from_charset_not_quoted(char *str,
				char *charset);
char		*ft_strdup_until_c_from_charset_not_quoted(const char *src,
				char *set);
char		*ft_strcpy_until_c_from_charset_not_quoted(char *d,
				char *s, char *set);
char		*ft_strtrim_exit_replace_src(char **src, char *except);
char		*ft_strldup_exit(const char *src, int n_chars);
char		ft_char_between_the_quotes(int char_position,
				char *str_containing_c);
char		*ft_extract_first_word_qx(char *from, char *separators);
char		*ft_extract_second_word_qx(char *from, char *separators);
char		*ft_strxtrim_char(char *str, char except);
char		*ft_strchr_not_quoted(const char *str, int c);
char		*ft_pos_after_the_word_in_string(char *str, char *word);
char		*ft_strchrset_not_quoted(char *str, char *charset);
char		ft_char_is_a_start_quote(char *str, int i);
char		*ft_extract_first_word_alpha_underscore(char *str,
				char *separators);
int			ft_char_is_a_dollar_sign(char *str, int i);
char		*ft_pos_after_n_one_or_two_words(char *str,
				int n_words, char *seps);
char		*ft_strdup_exit_and_free_src(char **src);
int			ft_is_env_start_brace(char c);
int			ft_is_env_name_char(char c);
void		ft_display_first_n_chars(char *str, int n, int fd);
void		ft_display_first_n_chars_with_i(char *str,
				int n, int fd, int j);
int			ft_is_a_valid_double_quote(char *str, int i);
int			ft_isspace(int c);

#endif
