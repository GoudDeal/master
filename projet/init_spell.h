struct s_spell
{
	char	name[21];
	int		mana_cost;
	int		dmg;
	int		strenght_modifier;
	int		agility_modifier;
	int		speed_modifier;
	int		modifier_duration;
	int		spell_id;
};
void	print_spell(struct s_char *character, struct s_spell *spell);
void	init_spell(struct s_char *character, struct s_spell *spell);
