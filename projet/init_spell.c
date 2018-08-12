#include <stdio.h>
#include <string.h>
#include "create_char.c"

struct	s_spell
{
	char	name[21];
	int		mana_cost;
	int		dmg;
	int		speed_modifier;
	int		strenght_modifier;
	int		agility_modifier;
	int		modifier_duration;
	int		spell_id;
};

void	print_spell(struct s_char *character, struct s_spell *spell)
{
	if (spell->spell_id == 0)
		printf("\nVoici vos sorts de départ :\n");
	printf("Nom : %s\n", spell->name);
	printf("Dégâts : %d\n", spell->dmg);
	printf("Coût : %d points de mana\n", spell->mana_cost);
	printf("Bonus de force : +%d\n", spell->strenght_modifier);
	printf("Bonus d'agilité : +%d\n", spell->agility_modifier);
	printf("Bonus de vitesse : +%d\n", spell->speed_modifier);
	printf("Durée des bonus : %d tours\n", spell->modifier_duration);
	if (spell->spell_id == 0)
		printf("\n");
}

void	init_spell(struct s_char *character, struct s_spell *spell)
{
	if (character->class == 1 && character->spell_nbr == 0)
	{
		strcpy(spell->name, "Bourlingue");
		spell->mana_cost = 0;
		spell->dmg = character->strenght;
		spell->agility_modifier = 0;
		spell->modifier_duration = 2;
		spell->speed_modifier = 0;
		spell->strenght_modifier = 1;
		spell->spell_id = character->spell_nbr;
	}
	if (character->class == 1 && character->spell_nbr == 1)
	{
		strcpy(spell->name, "Pied-bouche");
		spell->mana_cost = 5;
		spell->dmg = character->strenght + 3;
		spell->agility_modifier = 0;
		spell->speed_modifier = 0;
		spell->strenght_modifier = 0;
		spell->modifier_duration = 0;
		spell->spell_id = character->spell_nbr;
	}
	if (character->class == 2 && character->spell_nbr == 0)
	{
		strcpy(spell->name, "Coup de pute");
		spell->mana_cost = 0;
		spell->dmg = character->strenght + (character->agility / 5);
		spell->agility_modifier = 0;
		spell->strenght_modifier = 0;
		spell->speed_modifier = 0;
		spell->modifier_duration = 0;
		spell->spell_id = character->spell_nbr;
	}
	if (character->class == 2 && character->spell_nbr == 1)
	{
		strcpy(spell->name, "Lame cachée");
		spell->mana_cost = 3;
		spell->dmg = character->agility + character->strenght;
		spell->agility_modifier = 1;
		spell->speed_modifier = 1;
		spell->strenght_modifier = 0;
		spell->modifier_duration = 2;
		spell->spell_id = character->spell_nbr;
	}
	if (character->class == 3 && character->spell_nbr == 0)
	{
		strcpy(spell->name, "Feedback de merde");
		spell->mana_cost = 0;
		spell->dmg = character->speed + character->agility;
		spell->strenght_modifier = 0;
		spell->agility_modifier = 1;
		spell->speed_modifier = 1;
		spell->modifier_duration = 2;
		spell->spell_id = character->spell_nbr;
	}
	if (character->class == 3 && character->spell_nbr == 1)
	{
		strcpy(spell->name, "Github");
		spell->mana_cost = 5;
		spell->dmg = character->strenght + character->agility + (character->speed / 2);
		spell->strenght_modifier = 1;
		spell->agility_modifier = 0;
		spell->speed_modifier = 0;
		spell->modifier_duration = 3;
		spell->spell_id = character->spell_nbr;
	}
	character->spell_nbr++;
	print_spell(character, spell);
}
