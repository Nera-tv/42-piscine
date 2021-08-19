char	*ft_strcpy(char *dest, char *src);
char	fill_tab_1(char tab1[6][4]);
char	fill_tab_2(char tab2[11][4]);
char	fill_tab_3(char tab3[6][4]);

char	fill_matrix(char mat[4][4], char *args,
			int compteur1, int compteur2, int compteur3,
			char tab1[6][4], char tab2[11][4], char tab3[6][4],
			char tab4[4])
{
	char	mat_temp[4][4];
	int		i;
	int		arg_x;
	int		arg_y;

	printf("%s", args);
	arg_x = 0;
	while (arg_x < 16)
	{
		arg_y = 0;
		while (arg_y < 4)
		{
			i = 0;
			if (args[arg_x + arg_y] == '1')
			{
				while (tab1[compteur1][i] != '\0')
				{
					printf("hello tab1");
					mat_temp[arg_y][i] = tab1[compteur1][i];
					i++;
				}
			}
			else if (args[arg_x + arg_y] == '4')
			{
				while (tab4[i] != '\0')
				{
					printf("hello tab4");
					mat_temp[arg_y][i] = tab4[i];
					i++;
				}
			}
			else if (args[arg_x + arg_y] == '2')
			{
				while (tab2[compteur2][i] != '\0')
				{
					printf("hello tab2");
					mat_temp[arg_y][i] = tab2[compteur2][i];
					i++;
				}
			}
			else if (args[arg_x + arg_y] == '3')
			{
				while (tab3[compteur3][i] != '\0')
				{
					printf("hello tab3");
					mat_temp[arg_y][i] = tab3[compteur3][i];
					i++;
				}
			}
			arg_y++;
		}
		arg_x += 4;
	}
	return (**mat);
}

char	push_matrix(char mat[4][4], char *args)
{
	char	tab1[6][4];
	char	tab2[11][4];
	char	tab3[6][4];
	char	tab4[4];
	int		compteur1;
	int		compteur2;
	int		compteur3;

	fill_tab_1(tab1);
	fill_tab_2(tab2);
	fill_tab_3(tab3);
	ft_strcpy(tab4, "1234");
	compteur1 = 0;
	compteur2 = 0;
	compteur3 = 0;
	printf("%s", args);
	fill_matrix(mat, args, compteur1, compteur2,
			compteur3, tab1, tab2, tab3, tab4);
	return (**mat);
}
