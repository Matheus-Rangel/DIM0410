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
    int scenario = 0;
    cin >> contador;
    while (contador != 0){
        scenario++;
        cout<<"Scenario #"<<scenario<<endl;
        vector < map<int,int>* > times(contador);
        for (int i = 0; i < contador; ++i)
        {
            cin >> tamanho;
            times[i] = new map<int,int>;
            for (int j = 0; j < tamanho; ++j)
            {
                cin>>valor;
                (*times[i])[valor] = valor;
            }
        }
        vector < queue<int>* > filas(contador);
        for (int i = 0; i < contador; ++i) {
            filas[i] = new queue<int>;
        }
	queue <int> fila = new queue<int>;
        cin >> comando;
        while(comando != "STOP"){
            if(!comando.compare("ENQUEUE")){
                cin >> valor;
                for (int i = 0; i < contador; ++i) {
                    map<int,int>::iterator it = times[i]->find(valor);
                    if(it != times[i]-> end()){
                        filas[i] -> push(it->second);
                        break;
                    }
                }
            }
            else{//DEQUEUE
                for (int i = 0; i < contador; ++i) {
                    if(filas[i] -> size() != 0){
                        cout<< filas[i] -> front()<<endl;
                        filas[i] -> pop();
                        break;
                    }
                }
            }
            cin >> comando;
        }
        for (int i = 0; i < contador; ++i) {
            delete times[i];
            delete filas[i];
        }
        cin >> contador;
	cout<<endl;
    }
}

