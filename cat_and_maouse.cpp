#include <iostream>
#include <vector>

int		ft_catch(int start, int reach)
{
	int res;

	res = 0;
	if (start <= reach)
	{
		while (start < reach)
		{
			res++;
			start++;
		}
	}
	else
	{
		while (start > reach)
		{
			res++;
			start--;
		}
	}
	return (res);
}

int		main(void)
{
	std::vector< std::vector<int> > 	query;
	int									i;
    int                                 j;
	int									temp;
	int 								nb;
	int 								res_1;
	int									res_2;

	std::cin >> nb;
	query.reserve(nb);
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < 3)
		{
			std::cin >> temp;
			query[i].push_back(temp);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < nb)
	{
		res_1 = ft_catch(query[i][0], query[i][2]);
		res_2 = ft_catch(query[i][1], query[i][2]);
		if (res_1 < res_2)
			std::cout << "Cat A" << std::endl;
		else if (res_1 > res_2)
			std::cout << "Cat B" << std::endl;
		else
			std::cout << "Mouse C" << std::endl;
		i++;
	}
}