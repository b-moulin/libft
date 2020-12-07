SRCS		= ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_memset.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c  ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_atoi.c

BONUS		= ft_lstmap.c ft_lstiter.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJS		= $(SRCS:.c=.o)

BONUSOBJS	= $(BONUS:.c=.o)

NAME		= libft.a

CC			= cc

RM			= rm -f

CFLAGS	= -Werror -Wall -Wextra

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)

bonus:		$(BONUS) $(BONUSOBJS)
		ar rc $(NAME) $(BONUS) $(BONUSOBJS)

$(OBJS) : libft.h

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re libft.a