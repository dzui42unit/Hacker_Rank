#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>


int 	ft_check_set(std::vector<int> arr)
{
	int i;
	int	counter;
	int nb;
	int start;

	nb = 1;
	std::sort(arr.begin(), arr.end());
	start = arr[0];
	i = 1;
	while (i < arr.size())
	{
		if ((std::abs(start - arr[i]) == 1) || (std::abs(start - arr[i]) == 0))
			nb++;
		i++;
	}
	return (nb);
}
int		main(void)
{
	std::vector<int> 		data;
	std::vector<int>		set;
	int						i;
	int 					j;
	int 					nb;
	int						max;
	int						temp;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		data.push_back(temp);
		i++;
	}
	i = 0;
	max = 0;
	while (i < nb)
	{
		j = 0;
		set.clear();
		set.push_back(data[i]);
		while (j < nb)
		{
			if (j != i)
			{
				if ((std::abs(data[i] - data[j]) == 1) || (std::abs(data[i] - data[j]) == 0))
					set.push_back(data[j]);
			}
			j++;
		}
		if (set.size() > 1)
		{
			temp = ft_check_set(set);
			if (temp > max)
				max = temp;
		}
		i++;
	}
	std::cout << max << std::endl;
	return (0);
}