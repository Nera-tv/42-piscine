# include <unistd.h>
# include <fcntl.h>

#define BUF_SIZE 1

void	ft_puterror(char *str, int type, char *name);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_file_print(char *path)
{
	char	buf[BUF_SIZE + 1];
	int		i;
	int		file;

	file = open(path, O_RDONLY);
	if (file == -1)
		return (0);
	read(file, buf, BUF_SIZE);
	write(1, &buf[0], 1);
	i = 0;
	while (read(file, buf, BUF_SIZE) != 0)
		write(1, &buf[0], 1);
	close(file);
	return (1);
}



int ft_display_file(char *argv)
{
	int return_value;

	return_value = ft_file_print(argv);
	if (return_value == 0)
	{
		ft_puterror()
		return (1);
	}
	return (0);
}