#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> Baraja();
vector<string> Baraja2();
int readInt();
string Repartir(vector<int>);

int main(){
	vector<int> used_number;

	return 0;
}

int readInt() {
	string cad="";
	bool esNumero=true;
	do{
		esNumero=true;
		cin>>cad;
		for (int i = 0; i < cad.size(); ++i){	
			if(!isdigit(cad[i])){
				esNumero=false;
			}
		}
		if(!esNumero){
			cout<<"Ingrese un Valor Entero: ";
		}else{
				
			stringstream ss(cad);
 		    int i;
 			ss >> i;
			return i;
		}
		cout<<endl;
	}while(!esNumero);

}
string Repartir(vector<int> used_numbers){


}
vector<string> baraja2(){
	vector<int> baraja;
	baraja.push_back("2♠");
	baraja.push_back("2♥");
	baraja.push_back("2♦");
	baraja.push_back("2♣");

	baraja.push_back("3♠");
	baraja.push_back("3♥");
	baraja.push_back("3♦");
	baraja.push_back("3♣");

	baraja.push_back("4♠");
	baraja.push_back("4♥");
	baraja.push_back("4♦");
	baraja.push_back("4♣");

	baraja.push_back("5♠");
	baraja.push_back("5♥");
	baraja.push_back("5♦");
	baraja.push_back("5♣");

	baraja.push_back("6♠");
	baraja.push_back("6♥");
	baraja.push_back("6♦");
	baraja.push_back("6♣");

	baraja.push_back("7♠");
	baraja.push_back("7♥");
	baraja.push_back("7♦");
	baraja.push_back("7♣");

	baraja.push_back("8♠");
	baraja.push_back("8♥");
	baraja.push_back("8♦");
	baraja.push_back("8♣");

	baraja.push_back("9♠");
	baraja.push_back("9♥");
	baraja.push_back("9♦");
	baraja.push_back("9♣");

	baraja.push_back("10♠");
	baraja.push_back("10♥");
	baraja.push_back("10♦");
	baraja.push_back("10♣");

	baraja.push_back("J♠");
	baraja.push_back("♥");
	baraja.push_back("♦");
	baraja.push_back("♣");

	baraja.push_back("♠");
	baraja.push_back("♥");
	baraja.push_back("♦");
	baraja.push_back("♣");

	baraja.push_back("♠");
	baraja.push_back("♥");
	baraja.push_back("♦");
	baraja.push_back("♣");

}

vector<int> Baraja(){
	vector<int> baraja;
	baraja.push_back(2);
	baraja.push_back(2);
	baraja.push_back(2);
	baraja.push_back(2);
	baraja.push_back(3);
	baraja.push_back(3);
	baraja.push_back(3);
	baraja.push_back(3);
	baraja.push_back(4);
	baraja.push_back(4);
	baraja.push_back(4);
	baraja.push_back(4);
	baraja.push_back(5);
	baraja.push_back(5);
	baraja.push_back(5);
	baraja.push_back(5);
	baraja.push_back(6);
	baraja.push_back(6);
	baraja.push_back(6);
	baraja.push_back(6);
	baraja.push_back(7);
	baraja.push_back(7);
	baraja.push_back(7);
	baraja.push_back(7);
	baraja.push_back(8);
	baraja.push_back(8);
	baraja.push_back(8);
	baraja.push_back(8);
	baraja.push_back(9);
	baraja.push_back(9);
	baraja.push_back(9);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(10);
	baraja.push_back(11);
	baraja.push_back(11);
	baraja.push_back(11);
	baraja.push_back(11);
	return baraja;
}
