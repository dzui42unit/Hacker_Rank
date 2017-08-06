#include <iostream>
#include <vector>
#include <algorithm>

int		main(void)
{
	std::vector<int>		data;
	std::vector<int>		res;
	int						nb;
	int						temp;
	int						i;
	int						j;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		data.push_back(temp);
		i++;
	}
	i = 0;
	while (i < nb)
	{
		j = 1;
		temp = 1;
		while (j <= data[i])
		{
			if (j % 2 != 0)
				temp = temp * 2;
			else
				temp++;
			j++;
		}
		res.push_back(temp);
		i++;
	}
	i = 0;
	while (i < nb)
	{
		std::cout << res[i] << std::endl;
		i++;
	}
	return (0);
}

