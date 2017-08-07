#include <iostream>
#include <vector>

int		main(void)
{
	int			 		money;
	int					nb_keyb;
	int					nb_mouse;
	int 				i;
	int 				j;
	int					max;
	int 				temp;
	std::vector<int> 	key_b;
	std::vector<int>	mouse;

	std::cin >> money;
	std::cin >> nb_keyb;
	std::cin >> nb_mouse;
	i = 0;
	while (i < nb_keyb)
	{
		std::cin >> temp;
		key_b.push_back(temp);
		i++;
	}
	i = 0;
	while (i < nb_mouse)
	{
		std::cin >> temp;
		mouse.push_back(temp);
		i++;
	}
	i = 0;
	max = 0;
	while (i < nb_keyb)
	{
		j = 0;
		while (j < nb_mouse)
		{
			temp = key_b[i];
			temp += mouse[j];
			if (temp <= money && max < temp)
				max = temp;
			j++;
		}
		i++;
	}
	if (max != 0)
		std::cout << max << std::endl;
	else
		std::cout << "-1" << std::endl;
	return (0);
}