#include <iostream>
#include <algorithm>
#include <vector>

int		ft_check_set(std::vector<int> set, int nb, int flag);
int		ft_number(std::vector<int> set_a, std::vector<int> set_b);

int		ft_number(std::vector<int> set_a, std::vector<int> set_b)
{
	int max;
	int start;
	int res;

	std::sort(set_a.begin(), set_a.end());
	std::sort(set_b.begin(), set_b.end());
	start = 1;
	if (set_a[set_a.size() - 1] > set_b[set_b.size() - 1])
		max = set_a[set_a.size() - 1];
	else
		max = set_b[set_b.size() - 1];
	res = 0;
	while (start <= max)
	{
		if (ft_check_set(set_a, start, 1) && ft_check_set(set_b, start, 0))
			res++;
		start++;
	}
	return (res);
}

int		ft_check_set(std::vector<int> set, int nb, int flag)
{
	int i;

	i = 0;
	while (i < set.size())
	{
		if (flag)
		{
			if (nb % set[i] != 0)
				return (0);
		}
		else
		{
			if (set[i] % nb != 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	int 				i;
	int 				temp;
	int					nb_a;
	int 				nb_b;
	std::vector<int> 	set_a;
	std::vector<int>	set_b;

	std::cin >> nb_a;
	std::cin >> nb_b;
	set_a.reserve(nb_a);
	set_b.reserve(nb_b);
	i = 0;
	while (i < nb_a)
	{
		std::cin >> temp;
		set_a.push_back(temp);
		i++;
	}
	i = 0;
	while (i < nb_b)
	{
		std::cin >> temp;
		set_b.push_back(temp);
		i++;
	}
	std::cout << ft_number(set_a, set_b) << std::endl;
	return (0);
}
