#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;

	n = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (i <= (max - min))
		range[0][i++] = n++;
	return (max - min);
}

int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	i = 0;
	if (argc == 3)
	{
		printf("%i\n", ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2])));
		while (i < atoi(argv[2]) - atoi(argv[1]))
			printf("%i ", tab[i++]);
		printf("\n");
	}
}
