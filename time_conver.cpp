#include <iostream>
#include <string>
#include <cstring>
#include <vector>

void				ft_print_time(std::string time)
{
	if (time == "12")
		std::cout << "12";
	if (time == "01")
		std::cout << "13";
	if (time == "02")
		std::cout << "14";
	if (time == "03")
		std::cout << "15";
	if (time == "04")
		std::cout << "16";
	if (time == "05")
		std::cout << "17";
	if (time == "06")
		std::cout << "18";
	if (time == "07")
		std::cout << "19";
	if (time == "08")
		std::cout << "20";
	if (time == "09")
		std::cout << "21";
	if (time == "10")
		std::cout << "22";
	if (time == "11")
		std::cout << "23";
}

std::vector<std::string>	ft_split(std::string inp, char delim)
{
	int 				i;
	std::string			temp;
	std::vector<std::string> 	res;
	
	i = 0;
	while (inp[i])
	{
		if (inp[i] == delim)
		{
			res.push_back(temp);
			temp.clear();
		}
		else
			temp.push_back(inp[i]);
		i++;
	}
	res.push_back(temp);
	return (res);
}

int	main(void)
{
	std::string input;
	std::vector<std::string> splitted;

	std::getline(std::cin, input);
	splitted = ft_split(input, ':');
	if (splitted[splitted.size() - 1][2] == 'A' && splitted[splitted.size() - 1][3] == 'M' && splitted[0] == "12")
		std::cout << "00" << ":" << splitted[1] << ":" << splitted[2][0] << splitted[2][1] << std::endl;
	else if (splitted[splitted.size() - 1][2] == 'A' && splitted[splitted.size() - 1][3] == 'M' && splitted[0] != "12")
		std::cout << splitted[0] << ":" << splitted[1] << ":" << splitted[2][0] << splitted[2][1] << std::endl;
	else
	{
		ft_print_time(splitted[0]);
		std::cout << ":" << splitted[1] << ":" << splitted[2][0] << splitted[2][1] << std::endl;
	}
	return (0);
}
