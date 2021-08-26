void	ft_puterror(char *str, int type, char *name)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": ", 2);
	ft_putstr(str, 2);
	ft_putstr(": ", 2);
	if (type == 0)
		ft_putstr(strerror(errno), 2);
	else if (type == 1)
		ft_putstr("Is a directory", 2);
	ft_putstr("\n", 2);
}