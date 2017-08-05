#include <iostream>
#include <vector>
#include <algorithm>

void	ft_print_vector(std::vector<int> lb)
{
	std::vector<int>::iterator 	it;

	it = lb.begin();
	while (it != lb.end())
	{
		std::cout << *(it) << std::endl;
		it++;
	}
}

void	ft_remove_duplicates(std::vector<int> &vec)
{
	std::vector<int>::iterator 	it;

	it = vec.begin();
	while (it != vec.end() - 1)
	{
		if ((*it) == *(it + 1))
			vec.erase(it);
		it++;
	}
}

int		main(void)
{
	std::vector<int>			leader_board;
	std::vector<int>			results;
	std::vector<int>			scores;
	std::vector<int>::iterator	it;
	int							nb;
	int							temp;
	int							i;
	int							j;
	int							pos;

	i = 0;
	std::cin >> nb;
	while (i < nb)
	{
		std::cin >> temp;
		leader_board.push_back(temp);
		i++;
	}
	std::cin >> nb;
	i = 0;
	while (i < nb)
	{
		std::cin >> temp;
		results.push_back(temp);
		i++;
	}
	i = 0;
	it = std::unique (leader_board.begin(), leader_board.end());
	leader_board.resize( std::distance(leader_board.begin(), it));
	std::reverse(results.begin(), results.end());
	i = 0;
	j = 0;
	pos = 1;
	while (i < results.size())
	{
		while (j < leader_board.size())
		{
			if (leader_board[j] <= results[i])
				break ;
			pos++;
			j++;
		}
		scores.push_back(pos);
		i++;
	}
	std::reverse(scores.begin(), scores.end());
	ft_print_vector(scores);
	return (0);
}
