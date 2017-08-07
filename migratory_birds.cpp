#include <iostream>
#include <algorithm>
#include <vector>

int		main(void)
{
	int 						nb;
	int 						i;
	int 						id;
	int 						temp;
	int 						sum;
	std::vector<int>::iterator	j;
	std::vector<int>			birds;
	std::vector<int>			occur_id;	

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		birds.push_back(temp);
		i++;
	}
	std::sort(birds.begin(), birds.end());
	i = 1;
	sum = std::count(birds.begin(), birds.end(), birds[0]);
	occur_id.push_back(birds[0]);
	id = birds[0];
	while (i < nb)
	{
		j = std::find(occur_id.begin(), occur_id.end(), birds[i]);
		if (j == occur_id.end())
		{
			temp = std::count(birds.begin(), birds.end(), birds[i]);
			if (sum < temp)
			{
				id = birds[i];
				sum = temp;
			}
			occur_id.push_back(birds[i]);
		}
		i++;
	}
	std::cout << id << std::endl;
	return (0);
}