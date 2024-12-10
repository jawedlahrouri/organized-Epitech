##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile
##
pathdir = libprint

NAME = printf

SRC	=	src/organized.c \
		$(pathdir)/my_put_nbr.c \
		$(pathdir)/my_putchar.c \
		$(pathdir)/my_putstr.c \
		$(pathdir)/my_revstr.c \
		$(pathdir)/flag_c.c \
		$(pathdir)/flag_d.c \
		$(pathdir)/flag_i.c \
		$(pathdir)/flag_o.c \
		$(pathdir)/flag_percent.c \
		$(pathdir)/flag_s.c \
		$(pathdir)/flag_x.c \
		$(pathdir)/flag_x2.c \
		$(pathdir)/my_printf.c \

OBJ  	=	 $(SRC:.c=.o)

ORGANIZED = organized
CFLAGS = -Iinclude/

LDFLAGS = -L. -lshell

$(ORGANIZED): $(OBJ)
		gcc $(OBJ) -o $(ORGANIZED) $(CFLAGS) $(LDFLAGS)

all: 	$(ORGANIZED)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(ORGANIZED)

re:
		$(MAKE) fclean
		$(MAKE) all

debug:
		$(MAKE) clean
		gcc -g $(SRC) -o $(ORGANIZED) $(CFLAGS)
