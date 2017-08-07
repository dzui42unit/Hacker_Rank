#include <iostream>
#include <string>

int		ft_check_valley(std::string str, int *i)
{
	int s_u;
	int s_d;

	s_u = 0;
	s_d = 0;
	while (str[*i])
	{
		if (str[*i] == 'D')
			s_d++;
		if (str[*i] == 'U')
			s_u++;
		if (s_u == s_d)
		{
			(*i)++;
			return (1);
		}
		(*i)++;
	}
	return (0);
}

int		main(void)
{
	std::string 	str;
	char			temp;
	int 			i;
	int 			nb;
	int 			step_up;
	int 			step_down;
	int				valley;
	int 			start;

	std::cin >> nb;
	i = 0;
	start = 0;
	while (i < nb)
	{
		std::cin >> temp;
		str.push_back(temp);
		i++;
	}
	i = 0;
	step_up = 0;
	step_down = 0;
	valley = 0;
	while (str[i])
	{
		if (!(step_up - step_down) && str[i] == 'D')
		{
			valley += ft_check_valley(str, &i);
			step_up = 0;
			step_down = 0;
			continue ;
		}
		if (str[i] == 'U')
			step_up++;
		if (str[i] == 'D')
			step_down++;
		i++;
	}
	std::cout << valley << std::endl;
	return (0);
}
