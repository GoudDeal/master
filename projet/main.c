//#ifndef __LIB__
//# define __LIB__
#include <stdio.h>
#include "create_char.h"
#include "init_spell.h"

int		main(int argc, char **argv)
{
	int	temp;

	temp = 0;
	struct	s_char	character;
	struct	s_spell	spell1;
	struct	s_spell	spell2;

	create_char(&character);
	init_spell(&character, &spell1);
	init_spell(&character, &spell2);
	printf("Voulez-vous voir vos sorts avant de continuer ? [O/N]\n");
	temp = getchar();
	while (temp != 'O' && temp != 'N')
	{
		temp = getchar();
		if (temp != 10 && temp != 'O' && temp != 'N')
			printf("Veuillez choisir O pour Oui et N pour Non.\n");
	}
	if (temp == 'O')
	{
		print_spell(&character, &spell1);
		print_spell(&character, &spell2);
	}
	return (0);
}

//#endif
