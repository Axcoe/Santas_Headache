## ----------------------------------------------------------------------------------- ##
##                                                                                     ##
## EPITECH PROJECT - Tue, Feb, 2026                                                    ##
## Title           - tekspice                                                          ##
## Description     -                                                                   ##
##     Makefile                                                                        ##
##                                                                                     ##
## ----------------------------------------------------------------------------------- ##
##                                                                                     ##
##       ▄▀▀█▄▄▄▄  ▄▀▀▄▀▀▀▄  ▄▀▀█▀▄    ▄▀▀▀█▀▀▄  ▄▀▀█▄▄▄▄  ▄▀▄▄▄▄   ▄▀▀▄ ▄▄            ##
##      ▐  ▄▀   ▐ █   █   █ █   █  █  █    █  ▐ ▐  ▄▀   ▐ █ █    ▌ █  █   ▄▀           ##
##        █▄▄▄▄▄  ▐  █▀▀▀▀  ▐   █  ▐  ▐   █       █▄▄▄▄▄  ▐ █      ▐  █▄▄▄█            ##
##        █    ▌     █          █        █        █    ▌    █         █   █            ##
##       ▄▀▄▄▄▄    ▄▀        ▄▀▀▀▀▀▄   ▄▀        ▄▀▄▄▄▄    ▄▀▄▄▄▄▀   ▄▀  ▄▀            ##
##       █    ▐   █         █       █ █          █    ▐   █     ▐   █   █              ##
##       ▐        ▐         ▐       ▐ ▐          ▐        ▐         ▐   ▐              ##
##                                                                                     ##
## ----------------------------------------------------------------------------------- ##


NAME = nanotekspice

SRCS += main.cpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++20

PINK := \033[38;5;212m
GRE := \033[0;37m
PURP := \033[0;35m

all: $(NAME)
.PHONY: all

$(NAME):
	@ echo -e "$(PURP)Compiling cpp sources...$(GRE)"
	@ $(CC) $(SRCS) -o $(NAME)
	@ echo -e "$(PINK)BUILD SUCCESSFUL!$(GRE)"

clean:
	@ $(RM)
	@ echo -e "$(PINK)CLEANED $(GRE)"

fclean: clean
	@ $(RM) $(NAME)
	@ echo -e "$(PINK)FORCE CLEANED $(GRE)"

.PHONY: clean fclean

re: fclean
	@ $(MAKE) all -j --no-print-directory

.PHONY: re