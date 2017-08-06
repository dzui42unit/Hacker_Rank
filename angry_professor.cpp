#include <iostream>
#include <vector>
#include <algorithm>

int		main(void)
{
	std::vector<int>	students;
	int					nb;
	int					nb_std;
	int					max;
	int					i;
	int					j;
	int					res;
	int					temp;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> nb_std;
		std::cin >> max;
		j = 0;
		while (j < nb_std)
		{
			std::cin >> temp;
			students.push_back(temp);
			j++;
		}
		temp = 0;
		j = 0;
		std::sort(students.begin(), students.end());
		while (j < nb_std)
		{
			if (students[j] > 0)
				break ;
			temp++;
			j++;
		}
		if (temp < max)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
		students.clear();
		i++;
	}
}
