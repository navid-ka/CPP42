MAKEFLAGS += --no-print-directory
NAME = megaphone
CFLAGS = -Wall -Werror -Wextra -std=c++98
OBJECTS = megaphone.cpp

all: $(NAME)

$(NAME): $(OBJECTS) Makefile
	@c++ $(CFLAGS) $(OBJECTS) -o $(NAME)
	@ gum style \
		--foreground 212 --border-foreground 213 --border normal \
		--align center --width 70 --margin "0 2" --padding "2 4" \
		'Compilation completed, ./megaphone "shhhhh... I think the students are asleep..."' | lolcat

fclean: 
	@gum spin --spinner meter --title "Cleaning..." -- make clean
	@rm -rf ${NAME}
	@gum style \
		--foreground 212 --border-foreground 213 --border normal \
		--align center --width 70 --margin "0 2" --padding "2 4" \
		'Cleaned directory and object files!' | lolcat

clean:
	@rm -f ${NAME}
	@gum style \
		--foreground 212 --border-foreground 213 --border normal \
		--align center --width 70 --margin "0 2" --padding "2 4" \
		'Cleaned object files!' | lolcat

re: fclean all

git: fclean
	@git add .
	@TYPE=$(shell gum choose "fix:" "feat:" "refactor:" "test:" "chore:" "revert:"); \
	DESCRIPTION=$(shell gum input --placeholder "Details of this change (Add '')"); \
	if gum confirm "Another commit!"; then \
		git commit -m "$$TYPE $$DESCRIPTION"; \
		gum spin --spinner meter --title "Pushing to repository" -- git push; \
		gum style --foreground 212 --border-foreground 213 --align center --width 70 --margin "0 2" \
		--padding "2 4" --border double 'Git push complete!' | lolcat; \
	else \
		printf "Changes not committed."; \
	fi

.PHONY: clean all fclean re main
