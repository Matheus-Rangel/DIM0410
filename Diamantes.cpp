#include <iostream>
#include <string>
#include <stack>
using namespace std;
int comparar(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}
int main(){
	string entrada;
	int total;
	int minera;
	int diamantes;
	cin >> total;
	stack <char> minerios;
	for (int i = 0; i < total; ++i)
	{
		minera = 0;
		diamantes = 0;
		cin >> entrada;
		for(string::iterator it = entrada.begin(); it != entrada.end(); ++it){
			minerios.push(*it);
		}
		while(!minerios.empty()){
			if(minerios.top() == '>'){
				minera++;
				minerios.pop();
				continue;
			}
			if(minerios.top() == '<'){
				if(minera > 0){
					minera--;
					diamantes++;
				}
				minerios.pop();
				continue;
			}
			minerios.pop();
		}
		cout << diamantes << endl;
	}
}