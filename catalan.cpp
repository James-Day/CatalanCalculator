#include <iostream>
#include <string>
using namespace std;

int Catalan(const int &num);

int main(int argc, char* argv[])
{
	int num = 0;
	
	if (argc != 2) 
	{
		cout << "enter a number" << endl;
		cin >> num;
		cout << num << "'s catalan number is: " << Catalan(num) << endl;
	}
	else 
	{
		num = std::stoi(argv[1]);
		cout << num << "'s catalan number is: " << Catalan(num) << endl;
	}
}

int Catalan(const int &num)
{
	if (num <= 1) 
	{
		return 1;
	}
	int solution = 0;
	for(int i = 0; i<num; i++) 
	{
		solution += Catalan(i) * Catalan(num - i - 1);
	}
	return solution;
}

//if xr == xt or yr == yt then return 1 path call the function findpaths 
//if inputs are invalid just output to console