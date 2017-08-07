#include <iostream>
#include <vector>

void	ft_print_date(int year)
{
	int days[8] = { 31, 28, 31, 30, 31, 30, 31, 31 };
	int sum;
	int i;

	i = 0;
	sum = 0;
	while (i < 8)
	{
		sum += days[i];
		i++;
	}
	if (year < 1918)
	{
		if (year % 4 == 0)
			sum++;
	}
	else
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			sum++;
	}
	if (year == 1918)
		std::cout << 13 + 256 - sum << ".09." << year << std::endl;
	else
		std::cout << 256 - sum << ".09." << year << std::endl;
}

int		main(void)
{
	int year;

	std::cin >> year;
	ft_print_date(year);
	return (0);
}