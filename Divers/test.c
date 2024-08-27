#include <unistd.h>

void	ft_sound_loop(void)
{
	int	i;

	i = 0;
	while (1)
	{
		write(1, "\a", 1);
		i++;
		usleep(100000);
	}
	return;
}

int	main(void)
{
	ft_sound_loop();
}
