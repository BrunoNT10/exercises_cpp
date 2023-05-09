#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int N;
	
	cin >> N;
	
	double notas[N];
	double soma_notas, media;
	int num_alunos_na_media = 0, num_alunos_fora_da_media = 0;
	
	for(int i=0; i<N; i++)
	{
		cin >> notas[i];
	}
	for(int i=0; i<N; i++)
	{
		soma_notas += notas[i];
		if (notas[i] >= 60)
		{
			num_alunos_na_media += 1;
		}
		else{
			num_alunos_fora_da_media += 1;
		}
	}
	media = soma_notas/N;
	
	cout << fixed << setprecision(2);
	
	cout << "Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << num_alunos_na_media << endl;
	cout << "Alunos com nota abaixo da media: " << num_alunos_fora_da_media << endl;
	
	return 0;
}