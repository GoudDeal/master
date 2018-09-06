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
void	choose_class(struct s_char *character);
void	init_stat(struct s_char *character);
void	print_stat(struct s_char *character);
void	create_char(struct s_char *character);
