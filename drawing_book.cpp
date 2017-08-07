#include <iostream>
#include <vector>

int		main(void)
{
	int 	n;
	int 	page;
	int 	start;
	int 	steps;

	std::cin >> n;
	std::cin >> page;
	steps = 0;
	if (page <= n / 2)
	{
		start = 0;
		while (start < n)
		{
			if (start == page || start + 1 == page)
				break ;
			steps++;
			start += 2;
		}
	}
	else
	{
		start = n;
		if (start % 2 == 0)
			start++;
		while (start > n / 2)
		{
			if (start == page || start - 1 == page)
				break ;
			start -= 2;
			steps++;
		}
	}
	std::cout << steps << std::endl;
	return (0);
}
