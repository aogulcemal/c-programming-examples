CC			:= clang
CFLAGS		:= -ferror-limit=1 -ggdb3 -gdwarf-4 -O0 -std=c11 -Qunused-arguments -Wall -Werror -Wextra -Wno-gnu-folding-constant -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wshadow

SRCDIR = sorting
HELPERDIR = helpers

# define the list of sorting algorithms
ALGORITHMS = selectionSort insertionSort bubbleSort

# define the targets to build all the sorting algorithms
all: $(addprefix $(SRCDIR)/, $(addsuffix /main, $(ALGORITHMS)))

# define a pattern rule to build the executable for each sorting algorithm
$(SRCDIR)/%/main: $(SRCDIR)/%/main.c $(HELPERDIR)/helpers.o
	$(CC) $(CFLAGS) -I$(HELPERDIR) -o $@ $^

# define a pattern rule to build the object file for the helper library
$(HELPERDIR)/helpers.o: $(HELPERDIR)/helpers.c $(HELPERDIR)/helpers.h
	$(CC) $(CFLAGS) -c $< -o $@

# define phony targets
.PHONY: clean

clean:
	rm -f $(addprefix $(SRCDIR)/, $(addsuffix /main, $(ALGORITHMS))) $(HELPERDIR)/helpers.o

# define a target to run the selectionSort executable
run-selectionSort: $(SRCDIR)/selectionSort/main
	clear
	$<

# define a target to run the insertionSort executable
run-insertionSort: $(SRCDIR)/insertionSort/main
	clear
	$<

# define a target to run the bubbleSort executable
run-bubbleSort: $(SRCDIR)/bubbleSort/main
	clear
	$<
