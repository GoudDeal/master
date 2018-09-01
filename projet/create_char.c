//#ifndef __LIB__
//#define __LIB__
#include <stdio.h>

struct s_char
{
	char	name[21];
	int		hp;
	int		mana;
	int		strenght;
	int		agility;
	int		speed;
	int		accuracy;
	int		crit_chance;
	int		class;
	int		spell_nbr;
};

void	choose_class(struct s_char *character)
{
	printf("Vous allez maintenant devoir choisir une classe.\n");
	printf("Il y a trois classes disponibles. ");
	printf("Ce sont elles qui détermineront vos stats et vos sorts de départ.\n");
	printf("Comme je n'ai pas d'imagination, les classes sont assez basique.\n");
	printf("La classe 1 : Guerrier.\n");
	printf("Spécialisé dans la force et la vitalité, le guerrier a beaucoup de vie et de force ");
	printf("Mais a peu de chance de critique et de mana.\n\n");
	printf("La classe 2 : Voleur (Ou Assassion, c'est au choix, c'est comme vous voulez).\n");
	printf("Le voleur est spécialisé dans les coups critiques et l'agilité ");
	printf("mais possède moins de vie et de force que le guerrier.\n");
	printf("Il a également un bonus de vitesse ce qui peut lui permettre d'attaquer avant ");
	printf("ses adversaires.\n\n");
	printf("La classe 3 : Piscineux.\n");
	printf("Le piscineux est une classe possédant beaucoup de force et de mana ");
	printf("mais peu de vie et d'esquive (personne n'a réussi à éviter la moulinette ");
	printf("alors pourquoi vous ?). Il a également un bonus de vitesse parce que ");
	printf("Tequila, Heineken, pas le temps de niaiser.\n");
	printf("Choisissez donc votre classe avec 1, 2 ou 3.\n");
	scanf("%d", &character->class);
	while (character->class < 1 || character->class > 3)
	{
		printf("Visiblement, vous ne savez pas lire.\n");
		printf("Les choix disponibles sont 1, 2 ou 3.\n");
		scanf("%d", &character->class);
	}
	if (character->class == 1)
		printf("Vous serez un fier guerrier, bravant les ténèbres pour occire le mal (ou pas).\n");
	if (character->class == 2)
		printf("Vous serez un perfide voleur, se tapissant dans l'ombre avant de porter le coup fatal.\n");
	if (character->class == 3)
		printf("Vous serez un piscineux nul. C'est tout.\n");
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
		character->strenght = 3;
		character->agility = 5;
		character->speed = 5;
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
	printf("Force : %d\n", character->strenght);
	printf("Agilité : %d\n", character->agility);
	printf("Vitesse : %d\n", character->speed);
	printf("Précision : %d\n", character->accuracy);
	printf("Chances de critique : %d\n", character->crit_chance);
}

void	create_char(struct s_char *character)
{
	int		temp;

	temp = 0;
	printf("Choisissez un nom.\n");
	printf("(20 caractères max.)\n");
	scanf("%s", character->name);
	printf("%s %s \n\n", "Votre nom est", character->name);
	choose_class(character);
	init_stat(character);
	printf("Voir les stats avant de continuer ? [O/N]\n");
	temp = getchar();
	while (temp != 'O' && temp != 'N')
	{
		temp = getchar();
		if (temp != 10 && temp != 'O' && temp != 'N')
			printf("Hum... Veuillez mettre O pour Oui ou N pour Non.\n");
	}
	if (temp == 'O')
		print_stat(character);
}

//#endif
