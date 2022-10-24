/*
==================================================================================


==================================================================================
Empresa:                    AR Company
Equipe de Programadores:
                Victor Vinicius     RA 190873
                Luan Henrique       RA 191987
                Maria Eduarda       RA 189328
Curso: Engenharias: Computação, Controle e Automação
Data de inicio do projeto: 09/10/2022
----------------------------------------------------------------------------------
Descriчуo do Programa:
		Desenvolver um software que leia e calcule o fator de atrito de diferentes situações.

Versуo do programa: 1.0
Melhorias da versao: 0.1 - Versao inicial
                     0.5 - Versao com alteraçoes e novos cases
                     1.0 - Versao Finalizada
Data de lanчamento da versao: 11/10/22
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main()

{
	system("color 02");
    //definindo variaveis


    int substancia, opcao, i = 0, opcao2;
    float VMedia, diametro, area, vazao, Re, mi;
    bool continuar = true, continuar1 = true;


	//definir 4 casas decimais
	cout<<fixed<<setprecision(4);
    //variaveis para formula
    float a1, a2, a3, a4, a5;

    // Massa Especifica está em KG/m³,    leia se 'Rho'
    // Viscosidade Dinamica está em Pa.s, leia se  'Mi'

    // dados de entrada do programa

    cout<<"Informe o diametro da Tubulacao em mm: ";
    cin>>diametro;
	diametro = diametro /1000;

    while(diametro == 0) // diametro nao pode ser 0, pois nao podera ser dividido
    {
        cout<<"\nOperacão invalida, digite outro valor: ";
        cin>>diametro;
    }
    cout<<"Informe a vazao do escoamento em L/s: ";
    cin>>vazao;
    vazao = vazao/1000;

    while(continuar){

        //tabela dos fluidos para calcular o problema a ser solucionado

    cout<<"\n\n";
    cout<<"|----------------------------------------------------------|\n";
    cout<<"|                  Propriedades dos Fluidos                |\n";
    cout<<"|----------------------------------------------------------|\n";
    cout<<"|   Substancia   | Massa Especifica | Viscosidade Dinamica |\n";
    cout<<"|----------------------------------------------------------|\n";
    cout<<"| 1 - Agua       |       998,2      |        1,00e^-3      |\n";
    cout<<"| 2 - Ar Seco    |       1,189      |        1,83e^-5      |\n";
    cout<<"| 3 - Etanol     |       789        |        1,19e^-5      |\n";
    cout<<"| 4 - Glicerina  |       1260       |        1,49          |\n";
    cout<<"| 5 - Mercurio   |       13550      |        1,56e^-3      |\n";
    cout<<"| 6 - Oleo SAE30 |       891        |        0,29          |\n";
    cout<<"|----------------------------------------------------------|\n";

    cout<<"\nAgora selecione o material: ";
    cin>>opcao;

    float resultado, massaEsp, ViscDinam, E, pi = 3.141592;
    // aqui o usuario selecionara um opcao de material para efetuar o calculo
    //cada case contem um valor para uma opcao
    switch(opcao){

    case 1:
        massaEsp = 998.2;
        ViscDinam = 1.00 * (pow(10, -3));
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

   		 continuar = false;
    		break;

    case 2:
        massaEsp = 1.189;
        ViscDinam = 1.83 * (pow(10, -5));
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

        continuar = false;
			break;

    case 3:
        massaEsp = 789;
        ViscDinam = 1.19 * (pow(10, -3));
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

		continuar = false;
			break;

    case 4:
        massaEsp = 1260;
        ViscDinam = 1.49;
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

		continuar = false;
			break;

    case 5:
        massaEsp = 13550;
        ViscDinam = 1.56*(pow(10, -3));
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

    	continuar = false;
			break;

    case 6:
        massaEsp = 891;
        ViscDinam = 0,29;
        area = (pi*(diametro*diametro))/4;
        VMedia = (vazao/area);

   		 continuar = false;
			break;


}

	default:
    	cout<<"ALTERNATIVA INVALIDA\n";
    	cout<<"Digite outra opcao: "<<opcao;
    	break;

    //Nova tabela, essa a seguir contem os dados de superficie interna

    while(continuar1){

    cout<<"\n\t                                      Superficie Interna  \n";
    cout<<"|---------------------------------------------------------------------------------------------------------|\n";
    cout<<"|                        MATERIAL                                 |              E(mm) Ao Cubo            |\n";
    cout<<"|---------------------------------------------------------------------------------------------------------|\n";
    cout<<"|1- Aco Carbono Comercial Novo                                    |                  0,045                |\n";
    cout<<"|2- Aco Laminado Novo                                             |               0,04 a 0,10             |\n";
    cout<<"|3- Aco Soldado Novo                                              |               0,05 a 0,10             |\n";
    cout<<"|4- Aco Soldados Moderadamente odixdado                           |                  0,4                  |\n";
    cout<<"|5- Aco Laminado Revestido de Asfalto                             |                  0,05                 |\n";
    cout<<"|6- Aco Galvanizado com Costura                                   |                  0,15                 |\n";
    cout<<"|7- Ferro Fundido Novo                                            |                  0,26                 |\n";
    cout<<"|8- Ferro Fundido com Leve Oxidacao                               |                  0,30                 |\n";
    cout<<"|9- Ferro Fundido Velho                                           |                  3 a 5                |\n";
    cout<<"|10- Ferro Fundido Centrifugado                                   |                  0,05                 |\n";
    cout<<"|11- Ferro Fundido com Revestimento Asfaltico                     |               0,12 a 0,20             |\n";
    cout<<"|12- Ferro Fundido Oxidado                                        |                  1 a 1,5              |\n";
    cout<<"|13- Concreto Centrifugado Novo                                   |                  0,16                 |\n";
    cout<<"|14- Concreto Armado Liso com varios  Anos de Uso                 |               0,20 a 0,30             |\n";
    cout<<"|15- Concreto com Acabamento Normal                               |                  1 a 3                |\n";
    cout<<"|16- Cobre, latao, aco revestido de epoxi e tubos extrudados      |              0,0015 a 0,010           |\n";
    cout<<"|17- Vidro, PVC e Plasticos em Geral                              |                     0                 |\n";
    cout<<"|---------------------------------------------------------------------------------------------------------|\n";

    cout<<"\n\nAgora selecione um material para a superficie interna: ";
    cin>>opcao2;

    //novos cases com materias diferentes para efetuar o calculo, onde E representa a superficie internia (mi)
    switch(opcao2)
    {
        case 1:
            E = 0.045 ;
            break;

        case 2:
            E = 0.07 ;
            break;

        case 3:
            E = 0.15 ;
            break;

        case 4:
            E = 0.4 ;
            break;

        case 5:
            E = 0.05 ;
            break;

        case 6:
            E = 0.15 ;
            break;

        case 7:
            E = 0.26 ;
            break;

        case 8:
            E = 0.30;
            break;

        case 9:
            E = 4 ;
            break;

        case 10:
            E = 0.05 ;
            break;

        case 11:
            E = 0.16 ;
            break;

        case 12:
            E = 1.25 ;
            break;

        case 13:
            E = 0.16 ;
            break;

        case 14:
            E = 0.25;
            break;

        case 15:
            E = 2 ;
            break;

        case 16:
            E = 0.00575 ;
            break;

        case 17:
            E = 0;
            break;
    }
	system("cls");
{
		double FatorAtrito, FatorAtrito_chute = 1;
		float erro = 1;
        //formula de Reynolds
        Re = (massaEsp*VMedia*diametro)/ViscDinam;
        E = E/1000;
        //Valor do atrito para laminar
            if(Re<2300)
            {
                FatorAtrito = 64/Re;
                cout<<"\nRESPOSTA: Ele e LAMINAR e o FATOR de ATRITO sera: "<<FatorAtrito;
            }
        //valor do atrito para turbulento, segue uma nova formula

            else if(Re>=2300)
            {

                a1 = ((E/diametro)/3.7);
            while(erro>0.01) // chutar um valor da forca de atrito ate acertar
            {
                a2 = 2.51/(Re*sqrt(FatorAtrito_chute));

                a3 = a1 + a2;
                a4 =   -2 * log10(a3);
                FatorAtrito = pow(a4, -2);
                erro = fabs((FatorAtrito-FatorAtrito_chute)/FatorAtrito);
            	FatorAtrito_chute=FatorAtrito;
			}
                cout<<"\nRESPOSTA: Ele e TURBULENTO e o FATOR de ATRITO sera: "<<FatorAtrito;
            }
            continuar1 = false;
        	}

    	}

	}
    return 0;

}

