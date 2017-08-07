#include <iostream>
#include <vector>

int 	ft_round_nb(int nb)
{
	int five_mult;

	if (nb < 38)
		return (nb);
	five_mult = nb;
	while (five_mult % 5 != 0)
		five_mult++;
	if (five_mult - nb < 3)
		return (five_mult);
	return (nb);	
}

int	main(void)
{
	int 			i;
	int 			n;
	int 			temp;
	std::vector<int>	grade;

	std::cin >> n;
	grade.reserve(n);
	i = 0;
	while (i < n)
	{
		std::cin >> temp;
		grade.push_back(temp);
		i++;
	}
	i = 0;
	while (i < n)
	{
		grade[i] = ft_round_nb(grade[i]);
		std::cout << grade[i] << std::endl;
		i++;
	}
	return (0);
}
