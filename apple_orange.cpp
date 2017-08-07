#include <iostream>
#include <vector>

long 	ft_count_fruit(std::vector<long> a_b, std::vector<long> s_t, std::vector<long> fruit, int flag)
{
	long i;
	long nb;
	long dist;

	i = 0;
	nb = 0;
	while (i < fruit.size())
	{
		if (flag == 1)
			dist = s_t[0] + fruit[i];
		else
			dist = s_t[1] + fruit[i];
		if (dist >= a_b[0] && dist <= a_b[1])
			nb++;
		i++; 
	}
	return (nb);
}

int		main(void)
{
	std::vector<long> 	a_b;
	std::vector<long>	s_t;
	std::vector<long>	apple;
	std::vector<long>	orange;
	long 				n_a;
	long					n_o;
	long 				i;
	long 				temp;

	i = 0;
	while (i < 2)
	{
		std::cin >> temp;
		a_b.push_back(temp);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		std::cin >> temp;
		s_t.push_back(temp);
		i++;
	}
	std::cin >> n_a;
	std::cin >> n_o;
	i = 0;
	while (i < n_a)
	{
		std::cin >> temp;
		apple.push_back(temp);
		i++;
	}
	i = 0;
	while (i < n_o)
	{
		std::cin >> temp;
		orange.push_back(temp);
		i++;
	}
	std::cout << ft_count_fruit(a_b, s_t, apple, 1) << std::endl;
	std::cout << ft_count_fruit(a_b, s_t, orange, 0) << std::endl;
	return (0);
}
