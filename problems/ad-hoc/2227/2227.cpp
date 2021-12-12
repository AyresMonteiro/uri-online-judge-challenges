#include <iostream>
#include <vector>

using namespace std;

vector<int> maiores_valores(vector<int> vetor)
{
	vector<int> resultados;

	for (int i = 0; i < vetor.size(); i++)
	{
		if (resultados.empty() || vetor[i] == vetor[resultados[0] - 1])
		{
			resultados.push_back(i + 1);
		}
		if (vetor[i] > vetor[resultados[0] - 1])
		{
			resultados.clear();

			resultados.push_back(i + 1);
		}
	}

	return resultados;
}

void conjunto_de_teste(int aeroportos, int voos)
{
	static int contador_de_testes = 1;
	int tmp_origem, tmp_destino;
	vector<int> resultados, aeroportos_vetor = vector<int>(aeroportos, 0);

	for (int i = 0; i < voos; i++)
	{
		cin >> tmp_origem >> tmp_destino;

		aeroportos_vetor[tmp_origem - 1]++;
		aeroportos_vetor[tmp_destino - 1]++;
	}

	resultados = maiores_valores(aeroportos_vetor);

	cout << "Teste " << contador_de_testes << endl;

	for (int i = 0; i < resultados.size(); i++)
	{
		cout << resultados[i] << " ";
	}

	cout << endl
		 << endl;

	contador_de_testes++;
}

int main()
{
	int tmp_aeroportos, tmp_voos;

	cin >> tmp_aeroportos >> tmp_voos;

	while (!(tmp_aeroportos == 0 && tmp_voos == 0))
	{
		conjunto_de_teste(tmp_aeroportos, tmp_voos);

		cin >> tmp_aeroportos >> tmp_voos;
	}

	return 0;
}
