#include <iostream>
#include <vector>
#include <algorithm>

int 	main(void)
{
	int 			n;
	int 			i;
	int 			row;
	int			temp;
	std::vector<long> 	arr;
	
	i = 0;
	std::cin >> n;
	arr.reserve(n);
	while (i < n)
	{
		std::cin >> temp;
		arr.push_back(temp);
		i++;
	}
	std::sort(arr.begin(), arr.end());
	i = n - 1;
	row = 1;
	while (i > 0)
	{
		if (arr[i] != arr[i - 1])
			break ;
		row++;
		i--;
	}
	std::cout << row << std::endl;
	return (0);
}
