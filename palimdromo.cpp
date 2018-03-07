#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
void formatar(string &in){
	for(string::iterator it = in.begin(); it != in.end(); ++it) {
    		if((*it == ' ' ||*it == '!' ||*it == '?' ||*it == ',' ||*it == '.'){
			in.erase(it);
		}
	}
	transform(in.begin(), in.end(), in.begin(), ::tolower);
}
int main(){

}
