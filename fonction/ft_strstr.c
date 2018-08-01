char	ft_strstr(char *src, char *to_find)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != to_find[k])
			i++;
		if (str[i] == to_find[k])
		{
			while (str[i] == to_find[k] && to_find[k] != '\0')
			{
				i++;
				k++;

			}
		}
	}
}
