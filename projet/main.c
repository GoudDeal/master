#include <stdio.h>
#include "create_char.c"

int	main(int argc, char **argv)
{
	struct	s_char	character;
	create_char(&character);
	return (0);
}
