#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int		main(void)
{
	std::string				alphabet;
	std::string				input;
	std::vector<int>		size;
	std::vector<int>		elems;
	int						res;
	char					ch;
	int						nb;
	int						i;
	int						temp;
	int						j;

	ch = 'a';
	nb = 26;
	while (ch <= 'z')
	{
		alphabet.push_back(ch);
		ch++;
	}
	i = 0;
	while (i < nb)
	{
		std::cin >> temp;
		size.push_back(temp);
		i++;
	}
	std::cin >> input;
	i = 0;
	res = 1;
	while (input[i])
	{
		j = 0;
		while (alphabet[j])
		{
			if (input[i] == alphabet[j])
			{
				elems.push_back(size[j]);
				break ;
			}
			j++;
		}
		i++;
	}
	std::sort(elems.begin(), elems.end());
	std::cout << i * elems[elems.size() - 1] << std::endl;
	return (0);
}
