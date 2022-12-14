#include<iostream>
#include<cstring>

int maxdig(char* s, int n, int max)
{
	if (n == 1000)
	{
		return max;
	}
	else
	{
		if (int(s[n]) - 48 > max)
		{
			max = s[n] - 48;
		}
		return maxdig(s, n + 1, max);
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000] {'0'};

	std::cin.getline(s, 1000);

	std::cout << maxdig(s, 0, 0);

	delete[] s;

	return EXIT_SUCCESS;
}