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

	vector<int> used_cards;
	
	vector<int> mano_ipc;
	vector<string> mano_spc;

	vector<int> mano_ip1;
	vector<string> mano_sp1;
	
	vector<string> ganadores;

	cout<<endl;
	int menu=menuInicial();
	bool salir=false;
	do{
		switch(menu){	
			case 1:{
				bool turno_pc=true;
				bool ganador_pc=false;
				string nombre;
				cout<<"Nombre del Jugador: ";
				cin.ignore();
				getline(cin,nombre);
				int total_p1=0, total_pc=0;
				cout<<"\n~.~.~.~.~.~.~.~.~Turno de "<<nombre<<"~.~.~.~.~.~·~";
				for (int i = 0; i < 2; ++i){
					cout<<endl;
					used_cards.push_back(Repartir(used_cards));
					mano_ip1.push_back(Baraja(used_cards.back()));
					mano_sp1.push_back(Baraja2(used_cards.back()));
					total_p1+=mano_ip1.back();
					cout<<"Carta: "<<mano_sp1.back()<<endl<<"Total: "<<total_p1<<endl;
				}
				if(total_p1 !=21){
					char resp='S';
					cout<<"Desea otra Carta[S/N]: ";
					cin>>resp;
					while(resp=='S' || resp=='s'){
						cout<<endl;
						used_cards.push_back(Repartir(used_cards));
						mano_ip1.push_back(Baraja(used_cards.back()));
						mano_sp1.push_back(Baraja2(used_cards.back()));
						total_p1+=mano_ip1.back();
						cout<<"Carta: "<<mano_sp1.back()<<endl<<"Total: "<<total_p1<<endl;
						if(total_p1>21){
							bool as=false;
							for (int i = 0; i < mano_ip1.size(); ++i){
								if(mano_ip1.at(i)==11){
									mano_ip1.at(i)=1;
									cout<<"\nValor del A se volvio 1\n";
									as=true;
									break;
								}
							}
							
							if(as){
								total_p1=0;
								for (int i = 0; i < mano_ip1.size(); ++i){
									total_p1+=mano_ip1.at(i);
								}
								cout<<"\nNuevo valor en mano:"<<total_p1<<endl;
							}
							
						}
						if(total_p1<21){
							cout<<"Desea otra Carta[S/N]: ";
							cin>>resp;	
						}else if(total_p1==21){
							cout<<"21 BlackJack Ha ganado! "<<nombre<<endl;
							stringstream ss;
							ss<<"-) "<<nombre<<"\t"<<total_p1<<endl;
							ganadores.push_back(ss.str());
							turno_pc=false;
							ganador_pc=false;
							resp='n';
						}else{
							ganador_pc=true;
							resp='n';
						}
					
					}
				}else if(total_p1==21){
					cout<<"21 BlackJack Ha ganado! "<<nombre<<endl;
					stringstream ss;
					ss<<"-) "<<nombre<<"\t"<<total_p1<<endl;
					ganadores.push_back(ss.str());
					turno_pc=false;
				}
				if(ganador_pc){
					cout<<"21 BlackJack Ha ganado la PC!\n";
					stringstream ss;
					ss<<"-) "<<"PC"<<"\t"<<total_pc<<endl;
					ganadores.push_back(ss.str());
					turno_pc=false;
					
				}
				if(turno_pc){
					cout<<"~.~.~.~.~.~.~Turno PC~.~.~.~.~.~.~.~.~\n";

				}
				

						
					
					
			    			
			     //turno de la computadora
				break;
			}
					
			
			case 2:{
				for (int i = 0; i < ganadores.size(); ++i){
					cout<<ganadores.at(i);
				}
				
				break;
			}
			case 3:{
	
				break;
			}
		}
		menu=menuInicial();
	}while(menu !=3);
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

		if(used_numbers.size()!=0){
			for (int i = 0; i < used_numbers.size(); ++i){
				if(retVal==used_numbers.at(i)){
					retornar=false;
				}
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

	baraja.push_back("K ♠");
	baraja.push_back("K ♥");
	baraja.push_back("K ♦");
	baraja.push_back("K ♣");

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
