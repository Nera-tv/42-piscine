# include <unistd.h>
# include <fcntl.h>

#define BUF_SIZE 1

#include <stdio.h>

int	ft_file_write()
{
	char	buf[BUF_SIZE + 1];

	read(0, buf, BUF_SIZE);
	write(1, buf, BUF_SIZE);
	while (read(0, buf, BUF_SIZE))
		write(1, buf, BUF_SIZE);
	return (0);
}

int ft_make_file()
{
	ft_file_write();
	return (1);
}