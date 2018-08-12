#include "init_spell.c"
#include <stdio.h>

int	main(int argc, char **argv)
{
	struct	s_char	character;
	struct	s_spell	spell1;
	struct	s_spell	spell2;

	create_char(&character);
	init_spell(&character, &spell1);
	init_spell(&character, &spell2);
	return (0);
}
