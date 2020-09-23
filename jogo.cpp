#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

//cor
 enum DOS_COLORS{ 
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };
 void textcolor (DOS_COLORS iColor){ 
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}
//funcoes
string nome;
int k=0;
int senha[100];
int p = 0;
int p2 = 0;
int p3 = 0;
int o = 0;
int option = 0;
int escolha2 = 0;
int n=0;
void jogar(){
	bool soption = false;
	while(soption==false){
		system("cls");
		if(option==0){
			textcolor(WHITE);
			cout<<"+--------------------------------+"<<endl
	  	 		<<"|    ~           ~               |"<<endl
	   			<<"| \\o/                     \\@/   ";
			   textcolor(YELLOW);
			   cout<<"0";
				textcolor(WHITE);
		 	  cout<<"|"<<endl
				<<"|             ~                  |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|Andar <-                        |"<<endl
				<<"|Fugir                           |"<<endl
				<<"+--------------------------------+"<<endl;
		} else if(option==1){
			cout<<"+--------------------------------+"<<endl
	  	 		<<"|    ~           ~               |"<<endl
	   			<<"| \\o/                     \\@/   ";
			   textcolor(YELLOW);
			   cout<<"0";
				textcolor(WHITE);
		 	  cout<<"|"<<endl
				<<"|             ~                  |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|Andar                           |"<<endl
				<<"|Fugir <-                        |"<<endl
				<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				if(option>0){
					option--;
				}
				break;
			case 80:
				if(option<1){
					option++;
				}
				break;
			case 13:
				soption=true;
				break;
		}
	}
	}
}
void menu(){
	
	bool so = false;
	while(so==false){
		system("cls");
		if(o==0){
			textcolor(RED);
			cout << "-----------<< O jogo >>-----------" <<endl<<endl<<endl<<endl;
			textcolor(GREEN);
			cout<<"+--------------------------------+"<<endl;
			cout<<"|Jogar <-                        |"<<endl;
			cout<<"|Sair                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		} else if(o==1){
			textcolor(RED);
			cout << "-----------<< O jogo >>-----------" <<endl<<endl<<endl<<endl;
			textcolor(GREEN);
			cout<<"+--------------------------------+"<<endl;
			cout<<"|Jogar                           |"<<endl;
			cout<<"|Sair <-                         |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				if(o>0){
					o--;
				}
				break;
			case 80:
				if(o<1){
					o++;
				}
				break;
			case 13:
				so=true;
				break;
		}
	}
	}
}
void andar(){
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"| \\o/                     \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|";
		textcolor(LIGHT_GREEN);
		cout<<"Andar";
		textcolor(WHITE);
		cout<<"                           |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(500);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|  \\o/                    \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|";
		textcolor(LIGHT_GREEN);
		cout<<"Andar";
		textcolor(WHITE);
		cout<<"                           |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|   \\o/                   \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|    \\o/                  \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|     \\o/                 \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|      \\o/                \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|       \\o/               \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|        \\o/              \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|         \\o/             \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|          \\o/            \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|           \\o/           \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|            \\o/          \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|             \\o/         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|              \\o/        \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|               \\o/       \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                \\o/      \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                 \\o/     \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                  \\o/    \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                   \\o/   \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                    \\o/  \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                     \\o/ \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(100);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                      \\o/\\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(300);
		bool sescolha = false;
	while(sescolha==false){
		system("cls");
		if(escolha2==0){
			textcolor(WHITE);
			cout<<"+--------------------------------+"<<endl
	  	 		<<"|    ~           ~               |"<<endl
	   			<<"|                      \\o/\\@/   ";
			   textcolor(YELLOW);
			   cout<<"0";
				textcolor(WHITE);
		 	  cout<<"|"<<endl
				<<"|             ~                  |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|Enfrentar <-                    |"<<endl
				<<"|Contornar                       |"<<endl
				<<"+--------------------------------+"<<endl;
		} else if(escolha2==1){
			cout<<"+--------------------------------+"<<endl
	  	 		<<"|    ~           ~               |"<<endl
	   			<<"|                      \\o/\\@/   ";
			   textcolor(YELLOW);
			   cout<<"0";
				textcolor(WHITE);
		 	  cout<<"|"<<endl
				<<"|             ~                  |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|Enfrentar                       |"<<endl
				<<"|Contornar <-                    |"<<endl
				<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				if(escolha2>0){
					escolha2--;
				}
				break;
			case 80:
				if(escolha2<1){
					escolha2++;
				}
				break;
			case 13:
				sescolha=true;
				break;
		}
	}
	} 
}
void enfrentar(){
	//ataque/defesa
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                      \\o/\\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|";
		textcolor(LIGHT_GREEN);
		cout<<"Enfrentar";
		textcolor(WHITE);
		cout<<"                       |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(500);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                      \\o/\\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~      ";
	   	textcolor(RED);
		   cout<<"*boink*";
		textcolor(WHITE);
		   cout<<"  |"<<endl
	   	<<"|                      \\o/\\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(1000);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                      \\o/      ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\o/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                            \\o/";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(1000);
system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                            \\o/ |"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                             \\o/|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                              \\o|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                               \\|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                                |"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
		
}
void contornar(){
	//couts do personagem dando a volta
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                      \\o/\\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|";
		textcolor(LIGHT_GREEN);
		cout<<"Contornar";
		textcolor(WHITE);
		cout<<"                       |"<<endl
		<<"+--------------------------------+"<<endl;
		Sleep(500);
	Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~        \\o/       |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~         \\o/      |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~          \\o/     |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~           \\o/    |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~            \\o/   |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~             \\o/  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   ";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~              \\o/ |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(200);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/\\o/";
		   textcolor(YELLOW);
		   cout<<"0";
			textcolor(WHITE);
		   cout<<"|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(1000);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/\\o/ |"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/ \\o/|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/  \\o|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/   \\|"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|    ~           ~               |"<<endl
	   	<<"|                         \\@/    |"<<endl
		<<"|             ~                  |"<<endl
		<<"+--------------------------------+"<<endl
		<<"|                                |"<<endl
		<<"|                                |"<<endl
		<<"+--------------------------------+"<<endl;
}
void introbau(){
	Sleep(300);
		system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|           ~                    |"<<endl
	   	<<"|\\o/";
		   textcolor(YELLOW);
		   cout<<"0";
		   textcolor(WHITE);
	cout<<"                       ~    |"<<endl
		<<"|      ~                         |"<<endl
		<<"+--------------------------------+"<<endl
		<<"| Depois de passar pelo inimigo, |"<<endl
		<<"|  voce ve que o bau tem senha   |"<<endl
		<<"+--------------------------------+"<<endl;
	Sleep(6000);
	system("cls");
	cout<<"+--------------------------------+"<<endl
	   	<<"|           ~                    |"<<endl
	   	<<"|\\o/";
		   textcolor(YELLOW);
		   cout<<"0";
		   textcolor(WHITE);
	cout<<"                       ~    |"<<endl
		<<"|      ~                         |"<<endl
		<<"+--------------------------------+"<<endl
		<<"| Descubra a senha para adquirir |"<<endl
		<<"|   os tesouros dentro do bau    |"<<endl
		<<"+--------------------------------+"<<endl;
	Sleep(6000);
}
void pergunta1(){
	bool sp = false;
	while(sp==false){
		system("cls");
		if(p==0){			
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6 <-                            |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		} else if(p==1){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|15 <-                           |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p==2){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|1 <-                            |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p==3){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|10 <-                           |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				//seta cima
				if(p==1){
					p=0;
				}else if(p==2){
					p=1;
				}else if(p==3){
					p=2;
				}
				break;
			case 80:
				//seta baixo 
				if(p==1){
					p=2;
				} else if(p==0){
					p=1;
				} else if(p==2){
					p=3;
				}
				break;
			case 13:
				sp=true;
				break;
		}
	}
	}
}
void resposta1(){
	while(p!=3){
		pergunta1();
		if(p==0){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"6 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p==1){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"15 <-";
			textcolor(WHITE);
			cout<<"                           |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p==2){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"1 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|10                              |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		
	}
	system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|        Quanto e 8+4/2?         |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|6                               |"<<endl;
			cout<<"|15                              |"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|";
			textcolor(GREEN);
			cout<<"10 <-";
			textcolor(WHITE);
			cout<<"                           |"<<endl;
			cout<<"+--------------------------------+"<<endl;
}
void pergunta2(){
	bool sp2 = false;
	while(sp2==false){
		system("cls");
		if(p2==0){			
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57 <-                           |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		} else if(p2==1){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|7 <-                            |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p2==2){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|4 <-                            |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p2==3){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|2 <-                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				//seta cima
				if(p2==1){
					p2=0;
				}else if(p2==2){
					p2=1;
				}else if(p2==3){
					p2=2;
				}
				break;
			case 80:
				//seta baixo 
				if(p2==1){
					p2=2;
				} else if(p2==0){
					p2=1;
				} else if(p2==2){
					p2=3;
				}
				break;
			case 13:
				sp2=true;
				break;
		}
	}
	}
}
void resposta2(){
	while(p2!=1){
		pergunta2();
		if(p2==0){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"57 <-";
			textcolor(WHITE);
			cout<<"                           |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p2==3){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"2 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p2==2){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|7                               |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"4 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		
	}
	system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantas notas musicais existem? |"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|57                              |"<<endl;
			cout<<"|";
			textcolor(GREEN);
			cout<<"7 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|4                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
}
void pergunta3(){
	bool sp3 = false;
	while(sp3==false){
		system("cls");
		if(p3==0){			
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1 <-                            |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		} else if(p3==1){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|2 <-                            |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p3==2){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|5 <-                            |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}else if(p3==3){
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|0 <-                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				//seta cima
				if(p3==1){
					p3=0;
				}else if(p3==2){
					p3=1;
				}else if(p3==3){
					p3=2;
				}
				break;
			case 80:
				//seta baixo 
				if(p3==1){
					p3=2;
				} else if(p3==0){
					p3=1;
				} else if(p3==2){
					p3=3;
				}
				break;
			case 13:
				sp3=true;
				break;
		}
	}
	}
}
void resposta3(){
	while(p3!=2){
		pergunta3();
		if(p3==0){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"1 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p3==1){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"2 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
		else if(p3==3){
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|5                               |"<<endl;
			cout<<"|";
			textcolor(RED);
			cout<<"0 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
		}
	}
			system("cls");
			cout<<"+--------------------------------+"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"|Quantos pontos esse jogo merece?|"<<endl;
			cout<<"|                                |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			cout<<"|1                               |"<<endl;
			cout<<"|2                               |"<<endl;
			cout<<"|";
			textcolor(GREEN);
			cout<<"5 <-";
			textcolor(WHITE);
			cout<<"                            |"<<endl;
			cout<<"|0                               |"<<endl;
			cout<<"+--------------------------------+"<<endl;
			Sleep(200);
}
void pergunta4(){
		system("cls");
		cout<<"+--------------------------------+"<<endl;
		cout<<"|          E por ultimo,         |"<<endl;
		cout<<"|   qual a combinacao da senha?  |"<<endl;
		cout<<"| Sao os numeros de cada resposta|"<<endl;
		cout<<"+--------------------------------+"<<endl;
		for(int i=0;i<=2;i++){
			cin>>senha[i];
			}
		}
void creditos(){
	system("cls");
	textcolor(YELLOW);
		cout<<"+--------------------------------+"<<endl;
		cout<<"|  Parabens!, depois de derrotar |"<<endl;
		cout<<"|   um forte bandido ou apenas   |"<<endl;
		cout<<"|   contornar ele, voce ficou    |"<<endl;
		cout<<"|   conhecido como um heroi e    |"<<endl;
		cout<<"|  viveu uma boa vida com o ouro |"<<endl;
		cout<<"|   que voce pegou do bandido    |"<<endl
			<<"+--------------------------------+"<<endl
		    <<"|       Obrigado por jogar!      |"<<endl
			    <<"|  ";
			    
			textcolor(LIGHT_MAGENTA);
			cout<<"Feito por Guilherme e Taissa";
			textcolor(YELLOW);
			cout<<"  |"<<endl
				<<"+--------------------------------+"<<endl;
			system("pause");
}
void jdn(){
	bool jd = false;
	while(jd==false){
		system("cls");
		if(n==0){
			textcolor(RED);
			cout << "    Deseja jogar novamente?    " <<endl<<endl<<endl<<endl;
			textcolor(GREEN);
			cout<<"+--------------------------------+"<<endl;
			cout<<"|Jogar <-                        |"<<endl;
			cout<<"|Sair                            |"<<endl;
			cout<<"+--------------------------------+"<<endl;
		} else if(n==1){
			textcolor(RED);
			cout << "    Deseja jogar novamente?    " <<endl<<endl<<endl<<endl;
			textcolor(GREEN);
			cout<<"+--------------------------------+"<<endl
				<<"|Jogar                           |"<<endl
				<<"|Sair <-                         |"<<endl
				<<"+--------------------------------+"<<endl;
		}
		if(_kbhit()){
		switch(_getch()){
			case 72:
				if(n>0){
				n--;
				}
				break;
			case 80:
				if(n<1){
				n++;
				}
				break;
			case 13:
				jd=true;
				break;
		}
	}
	}
}
int main(){
//inicio
	menu();
	do{
	 if(o==0){
		//joguin
		jogar();
			
	if(option==0){
		//animação 
		andar();
	if(escolha2==0){
		//enfrenta
		enfrentar();
		//mudacenario
		introbau();
		}
	else{
		//contorna
		contornar();
		//mudacenario
		introbau();
		}
		pergunta1();
		resposta1();
		Sleep(500);
		pergunta2();
		resposta2();
		Sleep(500);
		pergunta3();
		resposta3();
		Sleep(500);
		while(senha[0]!=10 || senha[1]!=7 || senha[2]!=5){
					pergunta4();	
			if(senha[0]==10 && senha[1]==7 && senha[2]==5){
				creditos();
				break;
			}		
		}
		}
		
			else{
			//fugir
			system("cls");
			textcolor(RED);
			cout<<"+--------------------------------+"<<endl
			  	<<"|  Voce decidiu fugir, o inimigo |"<<endl
			    <<"|  roubou todo o tesouro e voce  |"<<endl
			    <<"|  ficou conhecido como um bobo  |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|       Obrigado por jogar!      |"<<endl
				<<"|                                |"<<endl
				<<"+--------------------------------+"<<endl;
			textcolor(YELLOW);
			system("pause");
			}
			}
	else{
			break;
			}
			for(int i=0;i<=2;i++){
			senha[i]=0;
			}
			k=0, p=0, p2=0, p3=0,o=0, option=0, escolha2=0;
			jdn();}while(n!=1);
			system("cls");
			cout<<"+--------------------------------+"<<endl
			  	<<"|                                |"<<endl
			    <<"|                                |"<<endl
			    <<"|                                |"<<endl
				<<"+--------------------------------+"<<endl
				<<"|       Obrigado por jogar!      |"<<endl
			    <<"|  ";
			textcolor(LIGHT_MAGENTA);
			cout<<"Feito por Guilherme e Taissa";
			textcolor(GREEN);
			cout<<"  |"<<endl
				<<"+--------------------------------+"<<endl;
			textcolor(BLACK);
		
return 0;
}
