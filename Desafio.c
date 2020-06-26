#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

int cor,x1,y1,op,op1,pr,mi,ms,mp,mc,mv,cps,cpp,mac,msob;
HANDLE  hConsole;
x1 =14;
x2 =15;
void main()
{
system ( "title PROGRAMA - DESAFIO" );
inicio_programa();
menu_inicial();

}
////////////////////////////////////////////////////////////////////////////////
void menu_inicial()
{
	mi=1; // menu inicial
	while(mi==1)
	{
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	system("cls");	
	printf("\nBem-vindos\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n");	
	printf("Digite a opcao: \n\n\n");
	printf("1. Calculo de resistores em serie\n");
	printf("2. Calculo de resistores em paralelo\n");
	printf("3. Cores de resistores 		[3 - faixas]\n");
	printf("4. Valor do resistor 		[cor]\n");
	printf("5. Calculo de capacitores em serie\n");	
	printf("6. Calculo de capacitores em paralelo\n");
	printf("7. Alterar cores dos menus\n");
	printf("8. Sobre\n");	
	printf("9. Sair\n\n\n");
	scanf("%d",&op);	
	escolha();
	}

}
////////////////////////////////////////////////////////////////////////////////
void menu_serie()
{
	int qc;
	float req,r1,r2,r3;
		
	ms=1; // menu serie
	while(ms==1 && mi ==0)
	{
	cor=x1;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	system("cls");
	printf("\n\n1 - CALCULO DE RESISTORES EM SERIE\n\n");
	cor=x2;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("0 - Menu Principal\n\n");
	printf("Quantos resistores voce deseja calcular? (2 ou 3) \n\n");
	scanf("%d",&qc);
	switch(qc)
	{
	case 0:
	menu_inicial();	
	break;
	case 2:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n1 - CALCULO DE RESISTORES EM SERIE\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Resistor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Resistor 2: ");
	scanf("%f",&r2);
	req=r1+r2;
	printf("\n\n\nResultado: ");
	printf("R1(%.1f) + R2(%.1f) = %.1f", r1, r2, req); // resultado
	getch();
	voltar_menu();
	break;
	case 3:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n1 - CALCULO DE RESISTORES EM SERIE\n\n");
	cor=x2;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Resistor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Resistor 2: ");
	scanf("%f",&r2);
	printf("Digite o valor do Resistor 3: ");
	scanf("%f",&r3);	
	req=r1+r2+r3;
	printf("\n\n\nResultado: ");
	printf("R1(%.1f) + R2(%.1f) + R3(%.1f) = %.1f", r1, r2, r3, req); // resultado
	getch();
	voltar_menu();	
	default:
	system("cls");
	break;
	}
	}
	}

		


////////////////////////////////////////////////////////////////////////////////

void menu_paralelo()
{
	int qc;
	
	float req,r1,r2,r3;
	mp=1; // menu paralelo
	while(mp==1 && mi ==0)
	{
	system("cls");
	cor=x1;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n2 - CALCULO DE RESISTORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("0 - Menu Principal \n\n");
	printf("Quantos resistores voce deseja calcular? (2 ou 3) \n\n");
	scanf("%d",&qc);
	switch(qc)
	{
	case 0:
	menu_inicial();	
	break;
	case 2:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n2 - CALCULO DE RESISTORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Resistor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Resistor 2: ");
	scanf("%f",&r2);
	req=(r1*r2)/(r1+r2);
	printf("\n\n\nResultado: ");
	printf("%.1f * %.1f\n", r1, r2);
	printf("           컴컴컴컴컴컴�      = %.1f\n", req);
	printf("           %.1f + %.1f\n", r1, r2);
	getch();
	voltar_menu();
//	menu_paralelo();
	
	break;
	case 3:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n2 - CALCULO DE RESISTORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Resistor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Resistor 2: ");
	scanf("%f",&r2);
	printf("Digite o valor do Resistor 3: ");
	scanf("%f",&r3);
	req=1/(1/r1)+(1/r2)+(1/r3);
	printf("\n\n\nResultado: ");
	printf("             1      \n");
	printf("           컴컴컴컴컴컴컴컴컴컴컴컴      = %.1f\n", req);
	printf("              1          1          1        \n");
	printf("           컴컴컴�    컴컴컴�    컴컴컴�      \n");
	printf("             %.1f   +   %.1f   +  %.1f\n", r1, r2, r3);
	getch();
	voltar_menu();
//	menu_paralelo();
	break;
	default:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n2 - CALCULO DE RESISTORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Valor incorreto ");
	Sleep(2);
//	menu_paralelo();
	break;
	}
	}	
}
////////////////////////////////////////////////////////////////////////////////
void menu_cor()
{	
	mc=1; // menu cor
	int f1,f2,f3;
	float v1,v2,v3,vf;
	char unid[15];
	v1=0;
	v2=0;
	v3=0;
	while(mc==1 && mi ==0)
	{
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n3 - COR DO RESISTOR\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("________________________________________________________________\n\n");
	printf("Primeira faixa: 	|Segunda faixa: 	|Terceira faixa:| \n");
	printf("  	  	 	| 			|           	|\n");
	printf("1 - Marron 		| 1 - Preto		| 1 - Preto	|\n");
	printf("2 - Vermelho 		| 2 - Marron		| 2 - Marron	|\n");
	printf("3 - Laranja 		| 3 - Vermelho		| 3 - Vermelho	|\n");
	printf("4 - Amarelo 		| 4 - Laranja		| 4 - Laranja	|\n");
	printf("5 - Verde 		| 5 - Amarelo		| 5 - Amarelo	|\n");
	printf("6 - Azul		| 6 - Verde		| 6 - Verde	|\n");
	printf("7 - Violeta		| 7 - Azul 		| 7 - Azul 	|\n");
	printf("8 - Cinza 		| 8 - Violeta		| 8 - Violeta	|\n");
	printf("9 - Branco 		| 9 - Cinza		| 9 - Cinza 	|\n");
	printf("		 	| 10 - Branco		| 10 - Branco	|\n");
	printf("  	  	 	| 			| 11 - Dourado	|\n");
	printf("  	  	 	| 			| 12 - Prata	|\n");
	printf("________________________________________________________________|\n\n");
	printf("COR DA FAIXA 1: ");
	scanf("%d",&f1);
	printf("COR DA FAIXA 2: ");
	scanf("%d",&f2);
	printf("COR DA FAIXA 3: ");
	scanf("%d",&f3);
	switch(f1)
	{
	case 1:
	v1=1;
	break;
	case 2:
	v1=2;
	break;
	case 3:
	v1=3;
	break;	
	case 4:
	v1=4;
	break;	
	case 5:
	v1=5;
	break;	
	case 6:	
	v1=6;
	break;	
	case 7:	
	v1=7;
	break;	
	case 8:
	v1=8;	
	break;
	case 9:
	v1=9;
	break;
	
	default:
//	menu_cor();
	break;				
	}	
	switch(f2)
	{
	case 1:
	v2=0;
	break;
	case 2:
	v2=1;
	break;
	case 3:
	v2=2;
	break;	
	case 4:
	v2=3;
	break;	
	case 5:
	v2=4;
	break;	
	case 6:	
	v2=5;
	break;	
	case 7:	
	v2=6;
	break;	
	case 8:
	v2=7;	
	break;
	case 9:
	v2=8;
	break;
	case 10:
	v2=9;
	break;	
	default:
//	menu_cor();
	break;				
	}
	switch(f3)
	{
	case 1:
	v3 = 1;
	strcpy( unid, "Ohms");
	break;
	case 2:
	v3 = 10;
	strcpy( unid, "Ohms");
	break;
	case 3:
	v3 = 0.1;
	strcpy( unid, "KilOhms");
	break;	
	case 4:
	v3 = 1;
	strcpy( unid, "Kilohms");
	break;	
	case 5:
	v3 = 10;
	strcpy( unid, "KilOhms");
	break;	
	case 6:	
	v3 = 0.1;
	strcpy( unid, "MegaOhms");
	break;	
	case 7:	
	v3 = 1;
	strcpy( unid, "MegaOhms");
	break;	
	case 8:
	v3 = 10;
	strcpy( unid, "MegaOhms");	
	break;
	case 9:
	v3 = 0.1;
	strcpy( unid, "GigaOmhs");
	break;
	case 10:
	v3 = 1;
	strcpy( unid, "GigaOmhs");
	break;
	case 11:
	v3=0.1;
	strcpy( unid, "Ohms");
	break;
	case 12:
	v3=0.01;
	strcpy( unid, "Ohms");
	break;		
	default:
//	menu_cor();
	break;	
	}			
	vf = (v1*10)+(v2*1);
	vf= (vf*v3);
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n3 - COR DO RESISTOR\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("________________________________________________________________\n\n");
	printf("Primeira faixa: 	|Segunda faixa: 	|Terceira faixa:| \n");
	printf("  	  	 	| 			|           	|\n");
	printf("1 - Marron 		| 1 - Preto		| 1 - Preto	|\n");
	printf("2 - Vermelho 		| 2 - Marron		| 2 - Marron	|\n");
	printf("3 - Laranja 		| 3 - Vermelho		| 3 - Vermelho	|\n");
	printf("4 - Amarelo 		| 4 - Laranja		| 4 - Laranja	|\n");
	printf("5 - Verde 		| 5 - Amarelo		| 5 - Amarelo	|\n");
	printf("6 - Azul		| 6 - Verde		| 6 - Verde	|\n");
	printf("7 - Violeta		| 7 - Azul 		| 7 - Azul 	|\n");
	printf("8 - Cinza 		| 8 - Violeta		| 8 - Violeta	|\n");
	printf("9 - Branco 		| 9 - Cinza		| 9 - Cinza 	|\n");
	printf("		 	| 10 - Branco		| 10 - Branco	|\n");
	printf("  	  	 	| 			| 11 - Dourado	|\n");
	printf("  	  	 	| 			| 12 - Prata	|\n");
	printf("________________________________________________________________|\n\n\n");
	printf("Resultado:  ");	
	if (vf<2 && vf>1)
	{
	printf("%.1f %s",vf,unid);
	}
	else if (vf<1 && vf >0)
	{
	printf("%.2f %s",vf,unid);	
	}
	else if (vf==0)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("valor incorreto!");	
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	else if (f1==0 || f2 ==0 || f3 ==0)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("valor incorreto!");	
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	else
	{
	printf("%.0f %s",vf,unid);
	}
	getch();
	voltar_menu();
	}
}
////////////////////////////////////////////////////////////////////////////////
void menu_valor()
{
	mv=1; // menu valor
	float vr;
	int unid,vu;
	int v1,v2,v3;
	float oh,kl,mg,go,vf,f3;
	int flag,flag1;
	char cor1[15],cor2[15],cor3[15];
	while(mv==1 && mi==0)
	{
	oh=0;
	kl=0;
	mg=0;
	go=0;
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n4 - VALOR DO RESISTOR\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("________________________________________________________________\n\n");
	printf("Unidade: \n");
	printf("1 - Ohms		[0.1 - 990 ]\n");	
	printf("2 - KiloOhms    	[1K - 990K ]\n");
	printf("3 - MegaOhms		[1M - 990M ]\n");
	printf("4 - GigaOhms		[1G - 99G ]\n\n");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Atencao: Nao coloque um valor maior do que o limite para cada unidade\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("________________________________________________________________\n\n");
	printf("Digite a unidade do resistor(1|2|3|4): ");
	scanf("%d",&unid);
	if(unid >=5)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto, tente novamente\n");
	flag=0;
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	if (unid<1)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto, tente novamente\n");
	flag=0;	
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);	
	}
	if (unid==1 || unid==2 || unid==3 || unid==4 )
	{
	flag1=0;
	printf("\nDigite o valor do resistor: ");
	scanf("%f",&vr);
	}
	switch(unid)
	{
	case 1:
	flag = 1;
	break;
			
	case 2:
	flag = 2;
	break;	
	
	case 3:
	flag = 3;
	break;	
		
	case 4:
 	flag = 4;
	break;	
	}

	
	if (flag == 1)
	{
	if (vr<100 && vr>=10)
 	{
	v3 = 1;
	f3 = 1;
	}
    else if  (vr>=100 && vr<990)
 	{
	v3 = 2;
	f3 = 10;
	}
	else if (vr<1 && vr>=0.1)
 	{
	v3 = 12;
	f3=0.01;
	}
	else if (vr<10 && vr>=1)
 	{
	v3 = 11;
	f3=0.1;
	}
	else
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto");
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	}	
	if (flag==2)
	{
	if (vr<10 && vr>=1)
	{
	v3 = 3;
	f3 = 0.1;
	}	
	else if (vr<100 && vr>=10)
	{
	v3 = 4;
	f3 = 1;
	}
	else if (vr<990 && vr>=100)
	{
	v3 = 5;	
	f3 = 10;
	}	
	else
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto\n");
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	}
	if(flag==3)
	{
	if (vr<10 && vr>=1)
	{
	v3 = 6;	
	f3 = 0.1;
	}
	else if (vr<100 && vr>=10)
	{
	v3 = 7;	
	f3 = 1;
	}
	else if (vr<990 && vr>=100)
	{
	v3 = 8;	
	f3 = 10;
	}
	else 
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto\n");
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	}
	if (flag==4)
	{
	if (vr<10 && vr>=1)
	{
	v3 = 9;
	f3 = 0.1;
	}
	else if (vr<100 && vr>=10)
	{
	v3 = 10;
	f3 = 1;	
	}
	else
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto\n");
	flag1=1;
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	}
	}
//	v1= vr/10
//	vf = (v1*10)+(v2*1);		
	vf = vr / f3; 	
	v1 = vf / 10;
	v2 = (vf) - (v1*10);
	
	switch(v1)
	{
	case 1:
	strcpy( cor1, "Marron");
	break;
	case 2:
	strcpy( cor1, "Vermelho");
	break;	
	case 3:
	strcpy( cor1, "Laranja");
	break;	
	case 4:
	strcpy( cor1, "Amarelo");
	break;	
	case 5:
	strcpy( cor1, "Verde");
	break;	
	case 6:	
	strcpy( cor1, "Azul");
	break;	
	case 7:
	strcpy( cor1, "Violeta");	
	break;
	case 8:
	strcpy( cor1, "Cinza");
	break;
	case 9:
	strcpy( cor1, "Branco");
	break;	
	}
	switch(v2)
	{
	case 0:
	strcpy( cor2, "Preto");
	break;
	case 1:
	strcpy( cor2, "Marron");
	break;
	case 2:
	strcpy( cor2, "Vermelho");
	break;	
	case 3:
	strcpy( cor2, "Laranja");
	break;	
	case 4:
	strcpy( cor2, "Amarelo");
	break;	
	case 5:	
	strcpy( cor2, "Verde");
	break;	
	case 6:	
	strcpy( cor2, "Azul");
	break;	
	case 7:
	strcpy( cor2, "Violeta");	
	break;
	case 8:
	strcpy( cor2, "Cinza");
	break;
	case 9:
	strcpy( cor2, "Branco");
	break;	
	}
	switch(v3)
	{
	case 1:
	strcpy( cor3, "Preto");
	break;
	case 2:
	strcpy( cor3, "Marron");
	break;
	case 3:
	strcpy( cor3, "Vermelho");
	break;	
	case 4:
	strcpy( cor3, "Laranja");
	break;	
	case 5:
	strcpy( cor3, "Amarelo");
	break;	
	case 6:	
	strcpy( cor3, "Verde");
	break;	
	case 7:	
	strcpy( cor3, "Azul");
	break;	
	case 8:
	strcpy( cor3, "Violeta");	
	break;
	case 9:
	strcpy( cor3, "Cinza");
	break;
	case 10:
	strcpy( cor3, "Branco");
	break;
	case 11:
	strcpy( cor3, "Dourado");
	break;
	case 12:
	strcpy( cor3, "Prata");
	break;		
	}
	if(flag1==0)
	{
	printf("Cor da faixa 1: %s\n",cor1);
	printf("Cor da faixa 2: %s\n",cor2);	
	printf("Cor da faixa 3: %s\n",cor3);
	}

	getch();
	voltar_menu();
	}	
}
////////////////////////////////////////////////////////////////////////////////
void escolha()
{
	pr=1; // programa executando(run)
	while(pr==1) 
	{
	switch(op)
	{
	case 1:
	mi=0;
	Beep(2600,300);
	menu_serie();
	
	break;
	case 2:
	mi=0;
	Beep(2600,300);
	menu_paralelo();
	
	break;
	case 3:	
	mi=0;
	Beep(2600,300);
	menu_cor();
	
	break;
	case 4:
	mi=0;
	Beep(2600,300);
	menu_valor();
		
	break;
	
	case 5:
	mi=0;
	Beep(2600,300);
	menu_capserie();	
	break;
	
	case 6:
	mi=0;
	Beep(2600,300);
	menu_capprl();	
	break;
	
	case 7:
	mi=0;
	Beep(2600,300);
	menu_alterarcor();	
	break;
	
	case 8:
	mi=0;
	Beep(2600,300);
	menu_sobre();	
	break;
		
	case 9:
	system("exit");	
	ms=0;
	mp=0;
	mc=0;
	mv=0;
	cps=0;
	cpp=0;
	mac=0;
	msob=0;
	pr=0;
	mi=0;
	
	system("exit");
	break;
	
	default:
	printf("Valor incorreto, tente novamente...");
	getch();
	menu_inicial();
	break;
	
	}
	}
}
///////////////////////////////////////////////////////////////////////////////
void voltar_menu()
{
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n\nDeseja voltar ao menu? \n1[sim] 0[nao]: \n");
	scanf("%d",&op1);
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	switch(op1)
	{		
	case 0:
	break;
	
	case 1:
	menu_inicial();
	break;	
	}
}
///////////////////////////////////////////////////////////////////////////////
void menu_capserie()
{
	int qc;
	
	float req,r1,r2,r3;
	cps=1;
	while(cps==1 && mi==0)
	{
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n5 - CALCULO DE CAPACITORES EM SERIE\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("0 - Menu Principal \n\n");
	printf("Quantos capacitores voce deseja calcular? (2 ou 3) \n\n");
	scanf("%d",&qc);
	switch(qc)
	{
	case 0:
	menu_inicial();	
	break;
	case 2:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n5 - CALCULO DE CAPACITORES EM SERIE\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do capacitor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do capacitor 2: ");
	scanf("%f",&r2);
	req=(r1*r2)/(r1+r2);
	printf("\n\n\nResultado: ");
	printf("%.1f * %.1f\n", r1, r2);
	printf("           컴컴컴컴컴컴컴      = %.1f\n", req);
	printf("           %.1f + %.1f\n", r1, r2);
	getch();
	voltar_menu();
//	menu_paralelo();
	
	break;
	case 3:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n5 - CALCULO DE CAPACITORES EM SERIE\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do capacitor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do capacitor 2: ");
	scanf("%f",&r2);
	printf("Digite o valor do capacitor 3: ");
	scanf("%f",&r3);
	req=1/(1/r1)+(1/r2)+(1/r3);
	printf("\n\n\nResultado: ");
	printf("             1      \n");
	printf("           컴컴컴컴컴컴컴컴컴컴컴컴컴컴      = %.1f\n", req);
	printf("              1         1         1        \n");
	printf("           컴컴컴�   컴컴컴�   컴컴컴�      \n");
	printf("            %.1f   +   %.1f   +  %.1f\n", r1, r2, r3);
	getch();
	voltar_menu();
//	menu_paralelo();
	break;
	default:
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	system("cls");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n5 - CALCULO DE CAPACITORES EM SERIE\n\n");
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("Valor incorreto ");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	Sleep(2);
//	menu_paralelo();
	break;
	}
	}	
}
////////////////////////////////////////////////////////////////////////////////
void menu_capprl()
{
	int qc;
	float req,r1,r2,r3;
		
	cpp=1; 
	while(cpp==1 && mi ==0)
	{
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n6 - CALCULO DE CAPACITORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("0 - Menu Principal\n\n");
	printf("Quantos capacitores voce deseja calcular? (2 ou 3) \n\n");
	scanf("%d",&qc);
	switch(qc)
	{
	case 0:
	menu_inicial();	
	break;
	case 2:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n6 - CALCULO DE CAPACITORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Capacitor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Capacitor 2: ");
	scanf("%f",&r2);
	req=r1+r2;
	printf("\n\n\nResultado: ");
	printf("R1(%.1f) + R2(%.1f) = %.1f ", r1, r2, req); // resultado
	getch();
	voltar_menu();
	break;
	case 3:
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n6 - CALCULO DE CAPACITORES EM PARALELO\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("Digite o valor do Capacitor 1: ");
	scanf("%f",&r1);
	printf("Digite o valor do Capacitor 2: ");
	scanf("%f",&r2);
	printf("Digite o valor do Caoacitor 3: ");
	scanf("%f",&r3);	
	req=r1+r2+r3;
	printf("\n\n\nResultado: ");
	printf("R1(%.1f) + R2(%.1f) + R3(%.1f) = %.1f", r1, r2, r3, req); // resultado
	getch();
	voltar_menu();	
	default:
	system("cls");
	break;
	}
	}	
}
/////////////////////////////////////////////////////////////////////////////////
void inicio_programa()
{
	int i;
	cor=10;// verde
	i=0;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor); // mudar cor 
	
	for(i=0;i<=5; i++)
	{
	cor=10;// verde
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\nIniciando\n\n");	
	cor=15;// branco
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	Sleep(15);
	system("cls");
	cor=10;// verde
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\nIniciando.\n\n");
	cor=15;// branco
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	Sleep(20);
	system("cls");
	cor=10;// verde
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\nIniciando..\n\n");
	cor=15;// branco
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	Sleep(20);
	system("cls");
	cor=10;// verde
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\nIniciando...\n\n");
	cor=15;// branco
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	Sleep(20);
	system("cls");
	}
	cor=15;// branco
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor); // muda cor 
	system("cls");
}
////////////////////////////////////////////////////////////////////////////////
void menu_alterarcor()
{
	int titulo,menu;
	mac=1;
	while(mac==1 && mi==0)
	{
	cor=x1;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	system("cls");
	printf("\n\n7 - ALTERAR CORES DOS MENUS\n\n");
	cor=x2;	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("0 - Menu Principal\n\n");
	printf("Confira as cores disponiveis: \n\n");
	printf("Amarelo - 1 \n");
	printf("Verde - 2 \n");
	printf("Azul - 3 \n");
	printf("Branco - 4 \n\n");
	printf("Digite a cor desejada para o titulo:  ");
	scanf("%d",&titulo);
	switch(titulo)
	{
		case 0:
		menu_inicial();
		break;
		
		case 1:
		x1=14;
		break;
		
		case 2:
		x1=10;
		break;
		
		case 3:
		x1=11;
		break;
		
		case 4:
		x1=15;
	}
	if(titulo>4)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf(" Valor incorreto\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);		
	}
	printf("Digite a cor desejada para os menus:  ");	
	scanf("%d",&menu);
	switch(menu)
	{
		case 0:
		menu_inicial();
		break;
		
		case 1:
		x2=14;
		break;
		
		case 2:
		x2=10;
		break;
		
		case 3:
		x2=11;
		break;
		
		case 4:
		x2=15;
		break;
	}
	if(menu>4)
	{
	cor=12;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);	
	printf(" Valor incorreto\n");		
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);	
	}

	voltar_menu();
	}
}
////////////////////////////////////////////////////////////////////////////////
void menu_sobre()
{
	msob =1;
	while(msob==1 && mi==0)
	{
	system("cls");
	cor=x1;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("\n\n8 - Sobre\n\n");
	cor=x2;		
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //tela
	SetConsoleTextAttribute(hConsole, cor);
	printf("컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴\n\n");
	printf("\nEscola: SENAI HENRIQUE LUPO  \n");
	printf("Turma: 3ELT - Eletroeletronica \n");
	printf("Professor: Gilmar leo  \n");
	printf("Autor do programa: Gabriel Lopes  \n\n");
	printf("Software (IDE): Dev-C++ 5.11\n");
	printf("Compilador: MinGW GCC 4.6.1\n");
	printf("Data: Junho de 2016\n\n");
	getch();
	menu_inicial();
	}
}
