#include <iostream>
#include <vector>
#include <algorithm>

void	ft_check_records(std::vector<int> records)
{
	int 				i;
	int 				best;
	int 				worst;
	std::vector<int> 	result;

	i = 0;
	best = records[i];
	worst = records[i];
	result.reserve(2);
	result[0] = 0;
	result[1] = 0;
	while (i < records.size())
	{
		if (best < records[i])
		{
			best = records[i];
			result[0]++;
		}
		if (worst > records[i])
		{
			worst = records[i];
			result[1]++;
		}
		i++;
	}
	std::cout << result[0] << " " << result[1] << std::endl;
}

int 	main(void)
{
	int 				nb;
	int 				temp;
	int 				i;
	std::vector<int> 	records;
	std::vector<int>	res;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		records.push_back(temp);
		i++;
	}
	ft_check_records(records);
	return (0);
}