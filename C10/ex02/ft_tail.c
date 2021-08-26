# include <unistd.h>
# include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1

int	ft_file_print(char *path, int j)
{
	char	buf[BUF_SIZE];
	int		i;
	int		file;

	file = open(path, O_RDONLY);
	i = 0;
	if (file == -1)
		return (1);
	read(file, buf, BUF_SIZE);
	while (read(file, buf, BUF_SIZE) != 0 && i < j - 10)
	{
		write(1, &buf[0],1);
		i++;
	}
	close(file);
	return (0);
}

int	ft_file_len(char *path)
{
	char	buf[BUF_SIZE];
	int		i;
	int		file;

	file = open(path, O_RDONLY);
	i = 0;
	if (file == -1)
		return (0);
	while (read(file, buf, BUF_SIZE) != 0)
		i++;
	printf("%d", i);
	close(file);
	return (i + 1);
}

int main(int argc, char **argv)
{
	int i;
	char *tab;

	i = 1;
	tab = malloc((argc + 1) * sizeof (int));
	while (i - 1 < argc - 1)
	{
		tab[i - 1] = ft_file_len(argv[i]);
		printf("%d", tab[i - 1]);
		i++;
	}
	ft_file_print(argv[1], tab[0]);
}