#include "create_char.c"
#include <stdio.h>

int	main(int argc, char **argv)
{
	struct	s_char	character;
	struct	s_spell spell1;
	struct	s_spell spell2;
	struct	s_spell spell3;
	struct	s_spell	spell4;

	create_char(&character);
	init_spell(&spell1);
	init_spell(&spell2);
	init_spell(&spell3);
	init_spell(&spell4);
	return (0);
}
