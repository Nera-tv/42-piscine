int ft_display_file(char *argv);
int ft_make_file();

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_display_file(argv[1]);
	if (argc == 1)
		ft_make_file();
	return (0);
}