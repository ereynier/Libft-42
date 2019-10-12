# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/08 18:19:15 by ereynier     #+#   ##    ##    #+#        #
#    Updated: 2019/10/12 08:56:48 by ereynier    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS	= ft_atoi.c	ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c \
		  ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c \
		  ft_isascii.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c \
		  ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
		  ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c \
		  ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c \
		  ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_iswspace.c

SRCB	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstmap.c ft_lstiter.c ft_lstadd_back.c

OBJB	= ${SRCB:.c=.o}

OBJS	= ${SRCS:.c=.o}

INCS	= libft.h

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

%.o: %.c	$(INCS)
		gcc $(CFLAGS) -I $(INCS) -o $@ -c $<

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

bonus:		$(OBJB) ${OBJS}
			ar rcs ${NAME} ${OBJB} ${OBJS}

all:		${NAME}

clean:		
			rm -f ${OBJS} ${OBJB}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean
