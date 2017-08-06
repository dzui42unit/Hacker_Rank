#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int 	ft_count_numbers(int nb)
{
	int counter;

	counter = 1;
	while ((nb / 10) != 0)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

int 	ft_reverse_number(int nb, int counter)
{
	int reverse;
	int power;
	int i;

	i = 0;
	power = 10;
	reverse = 0;
	while (i < counter)
	{
		reverse +=  ((nb - (nb / power) * power) / (power / 10)) * pow(10, counter - i - 1);
		i++;
		power *= 10;
	}
	return (reverse);
}

int		main(void)
{
	double		start;
	double		end;
	double 		nb;
	double		temp;
	int			reverse;
	int			res;
	int			integer;

	std::cin >> start;
	std::cin >> end;
	std::cin >> nb;
	res = 0;
	while (start <= end)
	{
		reverse = ft_reverse_number((int)start, ft_count_numbers((int)start));
		temp = ((double)start - (double)reverse) / nb;
		integer = (int)temp;
		temp -= integer;
		if (temp == 0.0)
			res++;
		start++;
	}
	std::cout << res << std::endl;
	return (0);
}
