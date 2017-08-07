#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	int 			i;
	int 			j;
	std::vector<long> 	data(5);
	std::vector<long>	sum(5);
	
	i = 0;
	while (i < 5)
	{
		std::cin >> data[i];
		i++;
	}
	j = 0;
	while (j < 5)
	{
		i = 0;
		sum[j] = 0;
		while (i < 5)
		{
			if (j != i)
				sum[j] += data[i];
			i++;
		}
		j++;
	}
	std::sort(sum.begin(), sum.end());
	std::cout << sum[0] << " " << sum[sum.size() - 1] << std::endl;
	return (0);
}
