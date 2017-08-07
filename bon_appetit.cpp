#include <vector>
#include <iostream>

int 	main(void)
{
	int 				n;
	int 				i;
	int 				temp;
	int 				charge;
	int 				except;
	std::vector<int>	bill;

	std::cin >> n;
	std::cin >> except;
	i = 0;
	while (i < n)
	{
		std::cin >> temp;
		bill.push_back(temp);
		i++;
	}
	std::cin >> charge;
	i = 0;
	temp = 0;
	while (i < n)
	{
		if (i != except)
			temp += bill[i];
		i++;
	}
	if (charge == temp / 2)
		std::cout << "Bon Appetit" << std::endl;
	else
		std::cout << charge - temp / 2 << std::endl; 
	return (0);
}