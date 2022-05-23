#include <iostream>
#include <vector>
using namespace std;

		
void acidom(){
	vector<long double> porpotion;
	porpotion.push_back(0);
	porpotion.push_back(0);
	cout<< "entre a porporção estequimetrica de acido base, primeiro base depois acido."<< endl;
	cout<< "base: ";
	cin >> porpotion.at(0);
	cout << endl;
	cout<<"acido: ";
	cin >> porpotion.at(1);
	cout << endl;
	cout<< "Qual a concentração da solução de base?(forneça em decimal)"<<endl;
	long double ConcentrationB = 0;
	cin >> ConcentrationB;
	cout<<"Qual o volume de acido utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<< endl;
	long double VolumeA = 0;
	cin >> VolumeA;
    cout<<endl <<"Qual o volume da base utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<<endl;
	long double VolumeB = 0;
	cin >> VolumeB;
	cout<< endl <<"-------------------------------------------------------------------"<<endl;
	cout<<ConcentrationB<<" mol/l de base" <<endl;
	cout<<VolumeB<< " L foram utilizados de base na titulação"<<endl<<endl;
	cout<<VolumeA<< " L de acido foram neutralizados na titulação"<< endl<<endl;
	cout<< "------------------------------------------------------------------------"<<endl<<endl;
	cout<<endl << "a concentração de acido em mols é de: " << (ConcentrationB * (porpotion.at(0)/porpotion.at(1))* VolumeB)/VolumeA <<" mol/litro de acido."<<endl<<endl<<"-------------------------------"<<endl;
}

	
		
void acidog(){
	vector<long double> porpotion;
	porpotion.push_back(0);
	porpotion.push_back(0);
	cout<< "entre a porporção estequimetrica de acido base, primeiro base depois acido."<< endl;
	cout<< "base: ";
	cin >> porpotion.at(0);
	cout << endl;
	cout<<"acido: ";
	cin >> porpotion.at(1);
	cout << endl;
	cout << "qual a massa molar do acido? (g/mol em decimal)"<<endl;
	double Massa_molar = 0;
	cin >> Massa_molar;
	cout<< "Qual a concentração da solução de base?(forneça em decimal)"<<endl;
	long double ConcentrationB = 0;
	cin >> ConcentrationB;
	cout<<endl<<"Qual o volume de acido utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<< endl;
	long double VolumeA = 0;
	cin >> VolumeA;
		cout<<endl <<"Qual o volume da base utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<<endl;
	long double VolumeB = 0;
	cin >> VolumeB;
	cout<< endl <<"-------------------------------------------------------------------"<<endl;
	cout<<ConcentrationB<<" mol/l de base" <<endl;
	cout<<Massa_molar<<" é a massa molar do acido.";
	cout<<VolumeB<< " L foram utilizados de base na titulação"<<endl<<endl;
	cout<<VolumeA<< " L de acido foram neutralizados na titulação"<< endl<<endl;
	cout<< "------------------------------------------------------------------------"<<endl<<endl;
	cout<<endl << "A concentração de acido em mols é de: " << (ConcentrationB * (porpotion.at(0)/porpotion.at(1))* VolumeB)*Massa_molar/VolumeA <<" gramas/litro de acido."<<endl<<endl<<"-------------------------------"<<endl;
}

	
		
void basem(){
		vector<long double> porpotion;
	porpotion.push_back(0);
	porpotion.push_back(0);
	cout<< "entre a porporção estequimetrica de acido base, primeiro acido depois base."<< endl;
	cout<< "acido: ";
	cin >> porpotion.at(0);
	cout << endl;
	cout<<"base: ";
	cin >> porpotion.at(1);
	cout << endl;
		cout << "qual a massa molar do acido? (g/mol em decimal)"<<endl;
	double Massa_molar = 0;
	cin>> Massa_molar;
	cout<< "Qual a concentração da solução de acido?(forneça em decimal)"<<endl;
	long double ConcentrationA = 0;
	cin >> ConcentrationA;
	cout<<"Qual o volume de base utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<< endl;
	long double VolumeB = 0;
	cin >> VolumeB;
		cout<<endl <<"Qual o volume da acido utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<<endl;
	long double VolumeA = 0;
	cin >> VolumeA;
	cout<< endl <<"-------------------------------------------------------------------"<<endl;
	cout<<ConcentrationA<<" mol/l de base" <<endl;
	cout<<VolumeA<< " L foram utilizados de acido na titulação"<<endl<<endl;
	cout<<VolumeB<< " L de base foram neutralizados na titulação"<< endl<<endl;
	cout<< "------------------------------------------------------------------------"<<endl<<endl;
	cout<<endl << "a concentração de base em mols é de: " << (ConcentrationA * (porpotion.at(0)/porpotion.at(1))* VolumeA)*Massa_molar/VolumeB <<" gramas/litro de base."<<endl<<endl<<"-------------------------------"<<endl;
}



void baseg()
	{
			vector<long double> porpotion;
	porpotion.push_back(0);
	porpotion.push_back(0);
	cout<< "entre a porporção estequimetrica de acido base, primeiro acido depois base."<< endl;
	cout<< "acido: ";
	cin >> porpotion.at(0);
	cout << endl;
	cout<<"base: ";
	cin >> porpotion.at(1);
	cout << endl;
	cout<< "Qual a concentração da solução de acido?(forneça em decimal)"<<endl;
	long double ConcentrationA = 0;
	cin >> ConcentrationA;
	cout<<"Qual o volume de base utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<< endl;
	long double VolumeB = 0;
	cin >> VolumeB;
		cout<<endl <<"Qual o volume da acido utilizado em litros? (lembre-se acitamos apenas decimal e 1L = 1000ml.)"<<endl;
	long double VolumeA = 0;
	cin >> VolumeA;
	cout<< endl <<"-------------------------------------------------------------------"<<endl;
	cout<<ConcentrationA<<" mol/l de base" <<endl;
	cout<<VolumeA<< " L foram utilizados de acido na titulacao"<<endl<<endl;
	cout<<VolumeB<< " L de base foram neutralizados na titulacao"<< endl<<endl;
	cout<< "------------------------------------------------------------------------"<<endl<<endl;
	cout<<endl << "a concentracao de base em gramas é de: " << (ConcentrationA * (porpotion.at(0)/porpotion.at(1))* VolumeA)/VolumeB <<" mol/litro de base."<<endl<<endl<<"-------------------------------"<<endl;
}



int main()
{
	int operacao =0;
	cout << "bem vindo ao sistema de calculo automatico de titulação, trabalhamos com decimais use ponto ao inves de virgula em nossas opcoes."<<endl;
	do{
		cout<< endl << "------------------------------------" <<endl <<endl;
			cout<<"escolha uma das opcoes"<<endl;
	cout << "1: obter concentração inicial do acido em mols por litro" << endl;
	cout << "2: obter concentração inicial do acido em gramas por litro"<< endl;
	cout << "3: obter concentração inicial da base em mols por litro" << endl;
	cout << "4: obter concentração inicial da base em gramas por litro"<< endl;
	cout << "0: para sair"<< endl;
	cout<< "                    "<< endl;
	cin >> operacao;
	if(operacao == 1){
		acidom();
	}
	if(operacao == 2){
		acidog();
	}
	if(operacao == 3){
		basem();
	}
	if(operacao == 4){
		baseg();
	}
	}while(operacao != 0);
	cout <<"------------------------------";
	cout<<endl<<"agradecemos o uso desse programa, mande ao desenvolvedor sugestoes de melhora caso queira no discord: carboxilato #9629 ele sempre está aberto a DMs."<<endl;
	cout<<"e desculpas por erro, ainda estou aprendendo a programar."<<endl;
	cout<<"--------------------------------------------------------------------:)-------------------------------"<<endl<<endl;
	return 0;
}
