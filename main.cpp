#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> Baraja();
vector<string> Baraja2();
int readInt();
int Carta(vector<int>);

int main(){
	vector<int> used_number;
	cout<<Baraja().size();
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
int Repartir(vector<int> used_numbers){
	bool retornar;
	int retVal;
	do{	
		retornar=true;
		retVal=(0 + rand() % 51);
		for (int i = 0; i < used_numbers.size(); ++i){
			if(retVal==used_number.at(i)){
				retornar=false;
			}
		}
		if(retornar){
			return retVal;
		}

	}while(retornar);

}
vector<string> Baraja2(){
	vector<string> baraja;

	baraja.push_back("2 ♠");
	baraja.push_back("2 ♥");
	baraja.push_back("2 ♦");
	baraja.push_back("2 ♣");

	baraja.push_back("3 ♠");
	baraja.push_back("3 ♥");
	baraja.push_back("3 ♦");
	baraja.push_back("3 ♣");

	baraja.push_back("4 ♠");
	baraja.push_back("4 ♥");
	baraja.push_back("4 ♦");
	baraja.push_back("4 ♣");

	baraja.push_back("5 ♠");
	baraja.push_back("5 ♥");
	baraja.push_back("5 ♦");
	baraja.push_back("5 ♣");

	baraja.push_back("6 ♠");
	baraja.push_back("6 ♥");
	baraja.push_back("6 ♦");
	baraja.push_back("6 ♣");

	baraja.push_back("7 ♠");
	baraja.push_back("7 ♥");
	baraja.push_back("7 ♦");
	baraja.push_back("7 ♣");

	baraja.push_back("8 ♠");
	baraja.push_back("8 ♥");
	baraja.push_back("8 ♦");
	baraja.push_back("8 ♣");

	baraja.push_back("9 ♠");
	baraja.push_back("9 ♥");
	baraja.push_back("9 ♦");
	baraja.push_back("9 ♣");

	baraja.push_back("10 ♠");
	baraja.push_back("10 ♥");
	baraja.push_back("10 ♦");
	baraja.push_back("10 ♣");

	baraja.push_back("J ♠");
	baraja.push_back("J ♥");
	baraja.push_back("J ♦");
	baraja.push_back("J ♣");

	baraja.push_back("Q ♠");
	baraja.push_back("Q ♥");
	baraja.push_back("Q ♦");
	baraja.push_back("Q ♣");

	baraja.push_back("A ♠");
	baraja.push_back("A ♥");
	baraja.push_back("A ♦");
	baraja.push_back("A ♣");
	
	return baraja;

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
