#include <iostream>
#include <vector>

int		main(void)
{
	int 				n;
	int					i;
	int					j;
	int					temp;
	int					pair;
	std::vector<int>	socks;

	std::cin >> n;
	i = 0;
	while (i < n)
	{
		std::cin >> temp;
		socks.push_back(temp);
		i++;
	}
	i = 0;
	pair = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (socks[i] == socks[j] && socks[i] != -1)
			{
				socks[i] = -1;
				socks[j] = -1;
				pair++;
				break ;
			}
			j++;
		}
		i++;
	}
	std::cout << pair << std::endl;
	return (0);
}
