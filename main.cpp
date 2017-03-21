#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int Baraja(int);
string Baraja2(int);
int readInt();
int Repartir(vector<int>);
int menuInicial();

int main(){

	vector<int> num_rep;
	
	vector<int> mano_ipc;
	vector<string> mano_spc;

	vector<int> mano_ip1;
	vector<string> mano_sp1;

	
	
	int menu=menuInicial();
	bool salir=false;
	do{
		switch(menu){	
			case 1:{
				char c;
				cout<<"~.~.~.~.~.~.~.~.~TURNO PLAYER~.~.~.~.~.~.~.~\n";
				int suma_p1=0, suma_pc=0;
				for (int i = 0; i < 2; ++i){
					int pos_carta=Repartir(num_rep);
					num_rep.push_back(pos_carta);
					mano_ip1.push_back(Baraja(pos_carta));
					mano_sp1.push_back(Baraja2(pos_carta));
					suma_p1+=mano_ip1.back();
					cout<<mano_sp1.back()<<endl<<"Total en mano: "<<suma_p1<<endl;
				}


				
				cout<<"Desea otra Carta [S/N]: ";
				cin>>c;
				while(c =='S' || c =='s'){
					int pos_carta=Repartir(num_rep);
					num_rep.push_back(pos_carta);
					mano_ip1.push_back(Baraja(pos_carta));
					mano_sp1.push_back(Baraja2(pos_carta));
					suma_p1+=mano_ip1.back();
					cout<<mano_sp1.back()<<endl<<"Total en mano: "<<suma_p1<<endl;
					cout<<"Desea otra Carta [S/N]: ";
					cin>>c;
				}
				if(suma_p1<21){
					cout<<"~.~.~.~.~.~.~.~TURNO PC~.~.~.~.~.~.~.~.~.~.~.~.~\n";
					for (int i = 0; i < 2; ++i){
						int pos_carta=Repartir(num_rep);
						num_rep.push_back(pos_carta);
						mano_ipc.push_back(Baraja(pos_carta));
						mano_spc.push_back(Baraja2(pos_carta));
						suma_pc+=mano_ip1.back();
						cout<<mano_spc.back()<<endl<<"Total en mano: "<<suma_pc<<endl;
					}
					cout<<"Desea otra Carta [S/N]: ";
					cin>>c;
					while(c =='S' || c =='s'){
						int pos_carta=Repartir(num_rep);
						num_rep.push_back(pos_carta);
						mano_ipc.push_back(Baraja(pos_carta));
						mano_spc.push_back(Baraja2(pos_carta));
						suma_pc+=mano_ipc.back();
						cout<<mano_spc.back()<<endl<<"Total en mano: "<<suma_pc<<endl;
						cout<<"Desea otra Carta [S/N]: ";
						cin>>c;
					}
				}else{
					cout<<"Gano la PC";
				}

				
			
				







				//turno de la computadora
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
	
				break;
			}
		}
	}while(salir);
	return 0;
}
int menuInicial(){
	int opc;
	do{
		cout<<"1)- Iniciar Partida\n"<<
			  "2)- Ver Partidas Ganadas\n"<<
		  	  "3)- Salir del Juego\n"<<
		  	  "Ingrese Opcion: ";
		opc=readInt();
		if(opc<1 || opc>3){
			cout<<"Opcion no encontrada!\n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>3);
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
	srand(time(NULL));
	bool retornar;
	int retVal;
	do{	
		retornar=true;

		retVal=(rand() % 52);
		for (int i = 0; i < used_numbers.size(); ++i){
			if(retVal==used_numbers.at(i)){
				retornar=false;
			}
		}

	}while(!retornar);
	return retVal;
}

string Baraja2(int x){
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
	
	return baraja.at(x);

}

int Baraja(int x){
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
	
	return baraja.at(x);
}
