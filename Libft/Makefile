NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = \
       ft_isalnum.c       \
       ft_isalpha.c       \
       ft_isascii.c       \
       ft_isdigit.c       \
       ft_isprint.c       \
       ft_strlen.c        \
       ft_tolower.c       \
       ft_toupper.c       \
	   ft_calloc.c		  \
       ft_memset.c        \
       ft_bzero.c         \
       ft_memcpy.c        \
       ft_memmove.c       \
       ft_memchr.c        \
       ft_memcmp.c        \
       ft_strchr.c        \
       ft_strrchr.c       \
       ft_strncmp.c       \
       ft_strnstr.c       \
       ft_strlcpy.c       \
       ft_strlcat.c       \
       ft_strdup.c        \
       ft_substr.c        \
       ft_strjoin.c       \
       ft_strtrim.c       \
       ft_split.c         \
       ft_atoi.c          \
       ft_itoa.c          \
       ft_strmapi.c       \
       ft_striteri.c      \
       ft_putchar_fd.c    \
       ft_putstr_fd.c     \
       ft_putendl_fd.c    \
       ft_putnbr_fd.c     \
	   ft_putnbr_hex_fd.c \
	   ft_putptr_fd.c	  \
	   ft_putnbr_u_fd.c

BONUS_SRCS = \
			ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstdelone_bonus.c	\
			ft_lstadd_back_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully!"

bonus: $(NAME) $(BONUS_OBJS)
	@echo "Creating library $(NAME)..."
	ar rcs $(NAME) $(BONUS_OBJS)
	@echo "Library $(NAME) created successfully!"

clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files cleaned!"

fclean: clean
	@echo "Removing library $(NAME)..."
	rm -f $(NAME)
	@echo "Library $(NAME) removed!"

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
