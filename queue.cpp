#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
	string comando = " ";
	int contador; //quantidade de filas
	int tamanho = 0; //quantidade de elementos na fila
	int valor = 0; //valor do elemento na fila
	cin >> contador;
	while (contador != 0)
	{	
		cin >> contador; 
		vector <*map<int,int> > times(contador);
		for (int i = 0; i < contador; ++i)
		{
			cin >> tamanho;
			times[i] = new map<int,int>;
			for (int i = 0; i < tamanho; ++i)
			{
				cin>>valor;
				*(times[i])[valor] = valor;
			}
		}
		vector <*queue<int> > filas(contador);
		while(comando != "STOP"){
			cin >> comando;
			if(!comando.compare("ENQUEUE")){
				cin >> valor;
			}
		}
	}
}