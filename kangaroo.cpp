#include <iostream>
#include <string>


std::string 	ft_get_result(unsigned long x_1, unsigned long v_1, unsigned long x_2, unsigned long v_2)
{
    int i;
    
    i = 0;
	while (x_1 < x_2 && i < 10000)
	{
		x_1 += v_1;
		x_2 += v_2;
        i++;
	}
	if (x_1 == x_2)
		return ("YES");
	return ("NO");
}

int	main(void)
{
	unsigned long long x_1;
	unsigned long long x_2;
	unsigned long long v_1;
	unsigned long long v_2;

	std::cin >> x_1;
	std::cin >> v_1;
	std::cin >> x_2;
	std::cin >> v_2;

	if (x_2 > x_1)
		std::cout << ft_get_result(x_1, v_1, x_2, v_2);
	else
		std::cout << ft_get_result(x_2, v_2, x_1, v_1);
	return (0);
}