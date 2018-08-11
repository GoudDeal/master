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
};

void	init_spell(struct s_char *character, struct s_spell *spell)
{
	while (character->spell != 2)
	{
		if (character->class == 1 && character->spell_nbr == 0)
		{
			character->spell_nbr = character->spell_nbr + 1;
			spell->name = "Bourlingue";
			spell->mana_cost = 0;
			spell->dmg = character->strenght;
			spell->agility_modifier = 1;
			spell->modifier_duration = 2;
			spell->speed_modifier = 0;
			spell->strenght_modifier = 0;
		}
		if (character->class == 1 && character->spell_nbr == 1)
		{
			character->spell_nbr = character->spell_nbr + 1;
			spell->name = "Pied-bouche"
			spell->mana_cost = 5;
			spell->dmg = character->strenght + 3;
			spell->agility_modifier = 0;
			spell->speed_modifier = 0;
			spell->strenght_modifier = 0;
			spell->modifier_duration = 0;
		}
		if (character->class == 2 && character->spell_nbr == 0)
		{
			character->spell_nbr = character->spell_nbr + 1;
			spell->name = "Coup de pute";
			spell->mana_cost = 0;
			spell->dmg = character->strenght + (character->agility / 5);
			spell->agility_modifier = 0;
			spell->strenght_modifier = 0;
			spell->speed_modifier = 0;
			spell->modifier_duration = 0;
		}
		if (character->class == 2 && character->spell_nbr == 1)
		{
			character->spell_nbr = character->spell_nbr + 1;
			spell->name = "
		}
	}
}
