#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int num_usuarios, biggest_value = 0, smallest_value;
	
	cin >> num_usuarios;
	
	int num_contatos[num_usuarios];
	
	for(int i=0; i< num_usuarios; i++)
	{
		cin >> num_contatos[i];
	}
	for (int i=0; i< num_usuarios; i++)
	{
		if (i == 0)
		{
			smallest_value = num_contatos[i];
		}
		else if(num_contatos[i] < smallest_value){
			smallest_value = num_contatos[i];
		}
		if(num_contatos[i] > biggest_value)
		{
			biggest_value = num_contatos[i];
		}
		
	}
	cout << "Menor numero de contatos: " << smallest_value << endl;
	cout << "Maior numero de contatos: " << biggest_value << endl;
		
	return 0;
}