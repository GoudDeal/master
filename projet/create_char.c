#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct	s_char
{
	char	name[21];
	int	hp;
	int	mana;
	int	speed;
	int	agility;
	int	strenght;
	int	accuracy;
	int	crit_chance;
	int	class;
	int	spell_nbr;
};

void	choose_class(struct s_char *character)
{
	printf("Vous allez maintenant devoir choisir une classe.\n");
	printf("Il y a trois classes disponibles. ");
	printf("Ce sont elles qui détermineront vos statistiques de départ.\n");
	printf("Comme je n'ai pas d'imagination, les classes sont assez basiques.\n");
	printf("La classe 1 : Guerrier.\n");
	printf("Spécialisé dans la force et la vitalité, le guerrier a beacuoup de vie et de force ");
	printf("mais a peu de chance d'esquive et de critique. Il a également peu de mana.\n\n");
	printf("La classe 2 : Voleur (Ou l'assassin, c'est au choix, c'est comme vous voulez).\n");
	printf("Le voleur est spécialisé dans les coups critiques et l'esquive ");
	printf("mais possède moins de vie et de force que le guerrier.\n");
	printf("Il a également un bonus de vitesse, ce qui peut lui permettre d'attaquer avant ");
	printf("ses adversaires.\n\n");
	printf("La classe 3 : Piscineux.\n");
	printf("Le piscineux est une classe possèdant beaucoup de force et de mana ");
	printf("mais peu de vie et d'esquive (personne n'a réussi a esquiver la moulinette ");
	printf("alors pourquoi vous ?). Il a également un bonus de vitesse parce que ");
	printf("Tequila, Heineken, pas le temps de niaiser. Caputchar n'aura pas la réf.\n");
	printf("Choisissez votre classe avec 1, 2 ou 3.\n");
	scanf("%d", &character->class);
	while (character->class < 1 || character->class > 3)
	{
		printf("Visiblement, vous ne savez pas lire.\n");
		printf("Les choix disponibles sont 1, 2 ou 3.\n");
		scanf("%d", &character->class);
	}
	if (character->class == 1)
		printf("Vous serez un fier guerrier, bravant les ténèbres pour combattre le mal (ou pas).\n");
	if (character->class == 2)
		printf("Vous serez un perfide voleur, se tapissant dans l'ombre pour porter le coup fatal.\n");
	if (character->class == 3)
		printf("Vous serez un piscineux de merde. C'est tout.\n");
}

void	init_stat(struct s_char *character)
{
	if (character->class == 1)
	{
		character->hp = 40;
		character->mana = 20;
		character->speed = 3;
		character->agility = 1;
		character->strenght = 5;
		character->accuracy = 85;
		character->crit_chance = (character->agility * 5);
		character->spell_nbr = 0;
	}
	if (character->class == 2)
	{
		character->hp = 30;
		character->mana = 10;
		character->speed = 5;
		character->agility = 5;
		character->strenght = 3;
		character->accuracy = 85;
		character->crit_chance = (character->agility * 5);
		character->spell_nbr = 0;
	}
	if (character->class == 3)
	{
		character->hp = 20;
		character->mana = 30;
		character->speed = 4;
		character->agility = 1;
		character->strenght = 5;
		character->accuracy = 85;
		character->crit_chance = (character->agility * 5);
		character->spell_nbr = 0;
	}
}

void	print_stat(struct s_char *character)
{
	printf("Nom : %s\n", character->name);
	printf("HP : %d\n", character->hp);
	printf("Mana : %d\n", character->mana);
	printf("Vitesse : %d\n", character->speed);
	printf("Agilité : %d\n", character->agility);
	printf("Force : %d\n", character->strenght);
	printf("Précision : %d\n", character->accuracy);
	printf("Chances de critique : %d\n", character->crit_chance);
}

void	create_char(struct s_char *character)
{
	int	temp;

	temp = 0;
	printf("Choissisez un nom.\n");
	printf("(20 caractères max.)\n");
	scanf("%s", character->name);
	printf("%s %s\n\n", "Votre nom est", character->name);
	choose_class(character);
	init_stat(character);
	printf("Voir les stats avant de continuer ? [O/N]\n");
	temp = getchar();
	while (temp  != 79 && temp != 'N')
	{
		temp = getchar();
		if (temp != 10 && temp != 'O' && temp != 'N')
			printf("Hum... Veuillez mettre O pour Oui ou N pour Non.\n");
	}
	if (temp == 'O')
		print_stat(character);
}
