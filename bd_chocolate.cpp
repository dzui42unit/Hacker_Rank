#include <iostream>
#include <vector>

int		main(void)
{
	int					nb;
	int 				sum;
	int 				row;
	int 				i;
	int					j;
	int 				k;
	int 				res;
	int 				temp;
	std::vector<int>	arr;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		arr.push_back(temp);
		i++;
	}
	std::cin >> sum;
	std::cin >> row;
	i = 0;
	res = 0;
	while (i < arr.size())
	{
		k = i;
		j = i + row;
		temp = 0;
		while (k < j)
		{
			temp += arr[k];
			k++;
		}
		if (temp == sum)
			res++;
		i++;
	}
	std::cout << res << std::endl;
	return (0);
}
