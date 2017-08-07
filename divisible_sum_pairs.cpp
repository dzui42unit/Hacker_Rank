#include <iostream>
#include <vector>

int		main(void)
{
	int 				i;
	int 				j;
	int					nb;
	int 				k;
	int 				res;
	std::vector<int> 	arr;

	i = 0;
	std::cin >> nb;
	std::cin >> k;
	while (i < nb)
	{
		std::cin >> res;
		arr.push_back(res);
		i++;
	}
    i = 0;
	res = 0;
	while (i < nb)
	{
		j = i + 1;
		while (j < nb)
		{
			if ((arr[i] + arr[j]) % k == 0)
				res++;
			j++;
		}
		i++;
	}
	std::cout << res << std::endl;
	return (0);
}