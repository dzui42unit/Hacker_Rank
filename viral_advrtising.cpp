#include <iostream>
#include <cmath>

int	main(void)
{
	int i;
	int res;
	int nb;
	int likes;
	int dislikes;
	int	start;

	std::cin >> nb;
	i = 0;
	start = 5;
	res = 0;
	while (i < nb)
	{
		likes = floor(start / 2);
		dislikes = start - likes;
		res += likes;
		start = likes * 3;
		i++;
	}
	std::cout << res << std::endl;
	return (0);
}
