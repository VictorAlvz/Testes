#include <iostream>
using namespace std;

/*
	Jogo da velha
		 0	  1	  2
	  0	   	|   |
		--------------
	  1		|	|
		--------------
	  2		|	|
*/
int main()
{
	//Declarando matriz
	char velha[3][3];
	//Declarando variaveis
	int i,j, terminou=0, encerra=0, jogador = 1, linha, coluna,jogada = 1;

	//Preenchendo a matriz velha com espaços
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			velha[i][j]=' ';
		}
	}

	while(terminou==0)
	{
		if(encerra ==0)
		{
			system("cls");
		}
		//Mostrando a grade de jogo
		cout<<"\n   0   1   2\n";
		for(i = 0; i<3;i++)
		{
			cout<<i<<" ";
			for(j=0; j<3;j++)
			{
				cout<<" "<<velha[i][j]<<" ";
				if(j<2)
				{
					cout<<"|";
				}
			}
			if(i<2)
			{
				cout<<"\n  -----------\n";
			}
		}
		if(encerra ==1)
		{
			terminou = 1;
		}
		if(encerra ==0)
		{
			cout<<"\nJogador "<<jogador<<" informe a linha: ";
			cin>>linha;
			while((linha<0)||(linha>2))
			{
				cout<<"\n\tLinha invalida, informe a linha novamente: ";
				cin>>linha;
			}
			cout<<"Jogador "<<jogador<< " informe a coluna: ";
			cin>>coluna;
			while((coluna<0)||(coluna>2))
			{
				cout<<"\n\tColuna invalida, informe a coluna novamente: ";
				cin>>coluna;
			}

			while(velha[linha][coluna]!=' ')
			{
				cout<<"\n\tPosicao jah ocupada\n";
				cout<<"\tInforme a linha novamente: ";
				cin>>linha;
				cout<<"\tInforme a coluna novamente: ";
				cin>>coluna;
			}

			if (jogador==1)
			{
				velha[linha][coluna]='O';
				jogador = 2;
				jogada++;
			}
			else
			{
				velha[linha][coluna]='X';
				jogador = 1;
				jogada++;
			}

			// Verificando vitória por linha
				//Jogador 1
			if ((velha[0][0]=='O' && velha[0][1]=='O'&& velha[0][2]=='O')||
			(velha[1][0]=='O' && velha[1][1]=='O'&& velha[1][2]=='O')||
			(velha[2][0]=='O' && velha[2][1]=='O'&& velha[2][2]=='O'))
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 1";
				encerra = 1;
			}
					//Jogador 2
			if ((velha[0][0]=='X' && velha[0][1]=='X'&& velha[0][2]=='X')||
			(velha[1][0]=='X' && velha[1][1]=='X'&& velha[1][2]=='X')||
			(velha[2][0]=='X' && velha[2][1]=='X'&& velha[2][2]=='X'))
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 1";
				encerra = 1;
			}
			// Verificando vitória por coluna
				//Jogador 1
			if ((velha[0][0]=='O' && velha[1][0]=='O'&& velha[2][0]=='O')||
			(velha[0][1]=='O' && velha[1][1]=='O'&& velha[2][1]=='O')||
			(velha[0][2]=='O' && velha[1][2]=='O'&& velha[2][2]=='O'))
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 1";
				encerra = 1;
			}
					//Jogador 2
			if ((velha[0][0]=='X' && velha[1][0]=='X'&& velha[2][0]=='X')||
			(velha[0][1]=='X' && velha[1][1]=='X'&& velha[2][1]=='X')||
			(velha[0][2]=='X' && velha[1][2]=='X'&& velha[2][2]=='X'))
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 2";
				encerra = 1;
			}
			// Verificando vitória por diagonal principal
				//Jogador 1
			if(velha[0][0]=='O' && velha [1][1]=='O' && velha[2][2]=='O')
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 1";
				encerra = 1;
			}
					//Jogador 2
			if(velha[0][0]=='X' && velha [1][1]=='X' && velha[2][2]=='X')
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 2";
				encerra = 1;
			}
			// Verificando vitória por diagonal secundaria
				//Jogador 1
			if(velha[2][0]=='O' && velha [1][1]=='O' && velha[0][2]=='O')
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 1";
				encerra = 1;
			}
					//Jogador 2
			if(velha[2][0]=='X' && velha [1][1]=='X' && velha[0][2]=='X')
			{
				cout<<"\n\n\tFIM DO JOGO: parabens jogador 2";
				encerra = 1;
			}
			// Verificando empate
			if(jogada>9)
			{
				cout<<"\n\n\tFIM DO JOGO: deu Velha!!!!";
				encerra = 1;
			}
		}
	}







	cout<<"\n\n\n";
	return 0;
}
