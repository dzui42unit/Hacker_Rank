#include <iostream>
#include <vector>
#include <algorithm>

int		main(void)
{
	std::vector<int> 	path;
	std::vector<int>	res;
	int					nb;
	int 				i;
	int					jump;
	int					temp;

	i = 0;
	std::cin >> nb;
	std::cin >> jump;
	while (i < nb)
	{
		std::cin >> temp;
		path.push_back(temp);
		i++;
	}
	i = 0;
	while (i < nb)
	{
		if (path[i] > jump)
			res.push_back(path[i] - jump);
		i++;
	}
	if (res.size() == 0)
		std::cout << "0" << std::endl;
	else
	{
		std::sort(res.begin(), res.end());
		std::cout << res[res.size() - 1] << std::endl;
	}
	return (0);
}
