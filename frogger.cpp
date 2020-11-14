#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

//Se definirán los valores de teclas de cada flecha y las colocaremos en palabras clave
//Cuando un valor entero es enviado a una variable char se toma en cuenta el código ASCII
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ENTER 13

using namespace std;
void gotoxy(int x, int y){
	HANDLE hCon; //El nombre de la ventana que se usará para el juego
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);//Se obtiene el nombre por medio de GetStdHandle, el parámetro por defecto es STD_OUTPUT_HANDLE
	COORD dwPos; //Se crea un objeto de tipo COORD llamada dwPos
	dwPos.X = x;//Se asigna la coordenada X
	dwPos.Y = y;//Se asigna la coordenada Y
	SetConsoleCursorPosition(hCon, dwPos); //Parte de windows.h, tiene un HANDLE y un COORD
}
	void color(int color){
		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE); //Se obtiene el nombre por medio de GetStdHandle, el parámetro por defecto es STD_OUTPUT_HANDLE
		SetConsoleTextAttribute(hcon,color); //Parte de windows.h también, tiene un HANDLE y un parámetro que es para código de color
	}
		void ocultarCursor(){ //Sirve para ocultar el cursor que nos sale por defecto
			HANDLE hCon; //El nombre de la ventana que se usará para el juego
			hCon = GetStdHandle(STD_OUTPUT_HANDLE); //Necesitaremos el HANDLE
			CONSOLE_CURSOR_INFO cci; //La función nos pide una estructura de datos cci(CONSOLE CURSOR INFO)
			//Esta estructura cuenta con el tamaño del cursor y la visibilidad
			cci.dwSize = 1;			//Editando el valor el cursor se hará más grande o más pequeño
			cci.bVisible = FALSE;	//Debido a que no importa el tamaño editaremos solamente la visibilidad para que no se vea
			SetConsoleCursorInfo(hCon,&cci); //Finalmente para "editar" el cursor mandaremos los parámetros hCon y
			//cci (por referencia con &, esto se usa cuando las caracterísitcas de una función son editables
		}
			void instrucciones(){
				system("cls");
				color(5);
				cout<<char(201);for(int i=1;i<65;i++) cout<<char(205);cout<<char(187)<<endl;
				cout<<char(186);color(9);cout<<"      INSTRUCCIONES:                                            ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     -Con las teclas "<<char(16)<<" "<<char(17)<<" "<<char(30)<<" "<<char(31)<<", el sapito debe llegar a su        ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     destino.                                                   ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     -El sapito se encuentra en una vereda superior, y deberá   ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"      de llegar al otro extremo de la pista. A partir del       ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"      5to nivel también debe cruzar el río.                     ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     -Ten cuidado con los mototaxis que pasan por la pista,     ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"      con un simple toque te eliminarán.                        ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     -No caigas al río porque serás eliminado, utiliza los      ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"      troncos. Además evita los cocodrilos.                     ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"     -Cuentas con 3 vidas al inicio del juego.                  ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
				cout<<char(186);color(9);cout<<"                                 Presiona Enter para regresar...";color(5);cout<<char(186)<<endl;
				cout<<char(200);for(int i=1;i<65;i++) cout<<char(205);cout<<char(188)<<endl;
				while(1==1){
					if(kbhit()){
						char a=getch();
						if(a==ENTER){
							Beep(500, 400);
							system("cls");
							break;
						}
					}
				}
				Sleep(30);
			}
				void creditos(){
					system("cls");
					color(5);
					cout<<char(201);for(int i=1;i<65;i++) cout<<char(205);cout<<char(187)<<endl;
					cout<<char(186);color(14);cout<<"     Salcedo Ramsay Santiago Andrés                             ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"     Chalco Pari Jairo Alonso                                   ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"     Rojas Torres Geraldine Elizabeth                           ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"     Calle Villafane Diane Gianella                             ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"     Carbajal Chopitea France Dayana                            ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
					cout<<char(186);color(14);cout<<"                                 Presiona Enter para regresar...";color(5);cout<<char(186)<<endl;
					cout<<char(200);for(int i=1;i<65;i++) cout<<char(205);cout<<char(188)<<endl;
					while(1==1){
						if(kbhit()){
							char a=getch();
							if(a==ENTER){
								Beep(500, 400);
								system("cls");
								break;
							}
						}
						Sleep(30);
					}
				}
					void inicial(){
						color(5);cout<<char(201);for(int i=1;i<65;i++) cout<<char(205);cout<<char(187)<<endl;
						cout<<char(186);color(10);cout<<"      ######     ###    ########  #### ########  #######        ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"     ##    ##   ## ##   ##     ##  ##     ##    ##     ##       ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"     ##        ##   ##  ##     ##  ##     ##    ##     ##       ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"      ######  ##     ## ########   ##     ##    ##     ##       ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"           ## ######### ##         ##     ##    ##     ##       ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"     ##    ## ##     ## ##         ##     ##    ##     ##       ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"      ######  ##     ## ##        ####    ##     #######        ";color(5);cout<<char(186)<<endl;
						cout<<char(204);;for(int i=1;i<65;i++) cout<<char(205);cout<<char(185)<<endl;
						cout<<char(186);color(10);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"                                                                ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"             Jugar                                              ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"             Instrucciones                                      ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"             Créditos                                           ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"             Salir                                              ";color(5);cout<<char(186)<<endl;
						cout<<char(186);color(10);cout<<"                                                          V.1.0 ";color(5);cout<<char(186)<<endl;
						cout<<char(200);for(int i=1;i<65;i++) cout<<char(205);cout<<char(188)<<endl;
					}
						void escenario(int dato){
							gotoxy(0,0);
							cout<<"           "<<endl;
							color(15);cout<<"  VIDAS                                   "<<endl;
							color(12);cout<<char(201);for(int i=1;i<31;i++) cout<<char(205);cout<<char(187)<<endl;
							cout<<char(186);color(128);for(int i=1;i<31;i++) cout<<char(178);color(12);cout<<char(186)<<endl;
							cout<<char(186);color(135);cout<<"»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»";color(12);cout<<char(186)<<endl;
							cout<<char(186);color(135);cout<<"==============================";color(12);cout<<char(186)<<endl;
							cout<<char(186);color(135);cout<<"»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»";color(12);cout<<char(186)<<endl;
							cout<<char(186);color(135);cout<<"==============================";color(12);cout<<char(186)<<endl;
							cout<<char(186);color(135);cout<<"»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»";color(12);cout<<char(186)<<endl;
							if(dato>1){ cout<<char(186);color(135);cout<<"==============================";color(12);cout<<char(186)<<endl;}
							if(dato>2){ cout<<char(186);color(135);cout<<"»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»";color(12);cout<<char(186)<<endl;}
							if(dato>3){ cout<<char(186);color(135);cout<<"==============================";color(12);cout<<char(186)<<endl;}
							if(dato>4 && dato<8){
								if(dato!=7){color(12);cout<<char(186);for(int i=1;i<31;i++){color(64); cout<<char(186);} color(12);cout<<char(186)<<endl;}
								else {color(12);cout<<char(186);for(int i=1;i<31;i++){color(162); cout<<char(177);} color(12);cout<<char(186)<<endl;}
								color(12);cout<<char(186);for(int i=1;i<31;i++){color(162); cout<<char(177);} color(12);cout<<char(186)<<endl;
							}
							else{
								cout<<char(186);color(128);for(int i=1;i<31;i++) cout<<char(178);color(12);cout<<char(186)<<endl;
								
							}
							if(dato>4){
								cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;
								cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;
								cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;
								cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;
								cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;
								if(dato>5){cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;}
								if(dato>6){cout<<char(186);color(66);for(int i=1;i<31;i++){ cout<<" ";} color(12);cout<<char(186)<<endl;}
								color(12);cout<<char(186);for(int i=1;i<31;i++){color(162); cout<<char(177);} color(12);cout<<char(186)<<endl;
								
							}
							cout<<char(200);for(int i=1;i<31;i++) cout<<char(205);cout<<char(188)<<endl;
						}
							class SAPO{
								int x,y;
								int corazones;
								int nivel=1;
							public:
								SAPO(int _x,int _y,int _corazones): x(_x),y(_y),corazones(_corazones){}
								int X(){ return x;}
								int Y(){ return y;}
								int NIVEL(){ return nivel;}
								int kokoro(){ return corazones;}
								void pintar();
								void borrar();
								void mover();
								void pintar_corazones();
								void morir();
								void vida();
								bool llegada();
								void caer_agua();
								void hacer_madera_5();
								void hacer_madera_6();
								void hacer_madera_7();
							};
							void SAPO::pintar(){
								if(NIVEL()==5){
									if(x<31 && x>0 && y>13 && y<19){
										gotoxy(x,y); color(66);cout<<char(207);
									}
									else {
										gotoxy(x,y); color(2);cout<<char(207);
									}
								}
								else{
									gotoxy(x,y); color(2);cout<<char(207);
								}
							}
							void SAPO::borrar(){
								if(NIVEL()==1){
									if(x<31 && x>0 && (y==4 || y==6 || y==8 )){ 
										gotoxy(x,y); 
										color(135);
										cout<<"»";
									}
									else if(x<31 && x>0 && (y==5 || y==7)){
										gotoxy(x,y);
										color(135);
										cout<<"=";
									}
									else if(x<31 && x>0 && (y==3 || y==10)){ 
										gotoxy(x,y); 
										color(128);
										cout<<char(178);
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==2){
									if(x<31 && x>0 && (y==4 || y==6 || y==8 )){ 
										gotoxy(x,y); 
										color(135);
										cout<<"»";
									}
									else if(x<31 && x>0 && (y==5 || y==7 || y==9)){
										gotoxy(x,y);
										color(135);
										cout<<"=";
									}
									else if(x<31 && x>0 && (y==3 || y==10)){ 
										gotoxy(x,y); 
										color(128);
										cout<<char(178);
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==3){
									if(x<31 && x>0 && (y==4 || y==6 || y==8 || y==10)){ 
										gotoxy(x,y); 
										color(135);
										cout<<"»";
									}
									else if(x<31 && x>0 && (y==5 || y==7 || y==9)){
										gotoxy(x,y);
										color(135);
										cout<<"=";
									}
									else if(x<31 && x>0 && (y==3 || y==10)){ 
										gotoxy(x,y); 
										color(128);
										cout<<char(178);
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==4){
									if(x<31 && x>0 && (y==4 || y==6 || y==8 || y==10)){ 
										gotoxy(x,y); 
										color(135);
										cout<<"»";
									}
									else if(x<31 && x>0 && (y==5 || y==7 || y==9 || y==11)){
										gotoxy(x,y);
										color(135);
										cout<<"=";
									}
									else if(x<31 && x>0 && (y==3 || y==10)){ 
										gotoxy(x,y); 
										color(128);
										cout<<char(178);
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==5){
									if(x<31 && x>0 && (y==13 || y==19)){ 
										gotoxy(x,y); 
										color(162); 
										cout<<char(177);
									}
									else if(x<31 && x>0 && y>13 && y<19){
										gotoxy(x,y); 
										color(66); 
										cout<<" ";
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==6){
									if(x<31 && x>0 && (y==13 || y==19)){ 
										gotoxy(x,y); 
										color(162); 
										cout<<char(177);
									}
									else if(x<31 && x>0 && y>13 && y<19){
										gotoxy(x,y); 
										color(66); 
										cout<<" ";
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
								if(NIVEL()==7){
									if(x<31 && x>0 && (y==4 || y==6 || y==8 || y==10)){ 
										gotoxy(x,y); 
										color(135);
										cout<<"»";
									}
									else if(x<31 && x>0 && (y==5 || y==7 || y==9 || y==11)){
										gotoxy(x,y);
										color(135);
										cout<<"=";
									}
									else if(x<31 && x>0 && (y==3 || y==10)){ 
										gotoxy(x,y); 
										color(128);
										cout<<char(178);
									}
									else if(x<31 && x>0 && (y==12 || y==13 || y==19)){ 
										gotoxy(x,y); 
										color(162); 
										cout<<char(177);
									}
									else if(x<31 && x>0 && y>13 && y<19){
										gotoxy(x,y); 
										color(66); 
										cout<<" ";
									}
									else {
										gotoxy(x,y); 
										color(135);
										cout<<"";
									}
								}
							}
							void SAPO::mover(){
								pintar_corazones();
								char a;
								if(NIVEL()<5){
									if(kbhit()){
										a = getch();
										borrar();
										if(a == IZQUIERDA && x>1){ x--; Beep(300, 20); }
										if(a == DERECHA && x<30){ x++; Beep(300, 20); }
										if(a == ARRIBA && y>3){ y--; Beep(300, 20); }
										if(a == ABAJO && y<13){ y++;  Beep(300, 20); }
										pintar();
									}
								}else if(NIVEL()==7){
									if(kbhit()){
										a = getch();
										borrar();
										if(a == IZQUIERDA && x>1){ x--; Beep(300, 20); }
										if(a == DERECHA && x<30){ x++; Beep(300, 20); }
										if(a == ARRIBA && y>3){ y--; Beep(300, 20); }
										if(a == ABAJO && y<25){ y++;  Beep(300, 20); }
										pintar();
									}
								}
								else{
									if(kbhit()){
										a = getch();
										borrar();
										if(a == IZQUIERDA && x>1){ x--; Beep(300, 20); }
										if(a == DERECHA && x<30){ x++; Beep(300, 20); }
										if(a == ARRIBA && y>13){ y--; Beep(300, 20); }
										if(a == ABAJO && y<25){ y++;  Beep(300, 20); }
										pintar();
									}
								}
							}
							void SAPO::pintar_corazones(){
								gotoxy(9,1); cout<<"                          ";
								for(int i=0; i<corazones;i++){
									gotoxy(9+i,1); color(10);cout<<char(3);
								}
							}
							void SAPO::morir(){
								borrar();
								gotoxy(x,y); cout<<"X";
								Sleep(200);
								Beep(600,50);
								Beep(500,75);
								gotoxy(x,y); cout<<"x";
								Beep(250,80);
								Beep(150,20);
								gotoxy(x,y); cout<<"X";
								Beep(190,300);
								gotoxy(x,y);
								color(179);cout<<" ";
								if(NIVEL()==5 || NIVEL()==6){gotoxy(15,13); cout<<char(207);x=15;y=13;}
								else {gotoxy(15,3); cout<<char(207);x=15;y=3;} 
								cout<<"";
								
								borrar();
								corazones--;
								pintar_corazones();
							}
							void SAPO::vida(){
								gotoxy(21,1);
								color(14);
								cout<<"+1 VIDA!!!!";
								gotoxy(x,y);
								corazones++;
								Sleep(600);
								Beep(800,100);
								Beep(500,200);
								Beep(1000,100);
								Beep(500,200);
								pintar_corazones();
							}
							bool SAPO::llegada(){
								if(NIVEL()==1){
									if(x>=2 && x<=32 && y==9){
										borrar();
										Sleep(200);
										gotoxy(15,3); cout<<"*";
										x=15;y=3;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
										
									}
									else return false;
								}
								if(NIVEL()==2){
									if(x>=2 && x<=32 && y==10){
										borrar();
										Sleep(200);
										x=15;y=3;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								if(NIVEL()==3){
									if(x>=2 && x<=32 && y==11){
										borrar();
										Sleep(200);
										x=15;y=3;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								if(NIVEL()==4){
									if(x>=2 && x<=32 && y==12){
										borrar();
										Sleep(200);
										x=15;y=13;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								if(NIVEL()==5){
									if(x>=2 && x<=32 && y==19){
										borrar();
										Sleep(200);
										x=15;y=13;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								if(NIVEL()==6){
									if(x>=2 && x<=32 && y==20){
										borrar();
										Sleep(200);
										x=15;y=3;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								if(NIVEL()==7){
									if(x>=2 && x<=32 && y==21){
										borrar();
										Sleep(200);
										x=15;y=3;
										nivel++;
										borrar();
										pintar_corazones();
										return true;
									}
									else return false;
								}
								return false;
							}
							void SAPO::caer_agua(){
								if(X()>1 && X()<32 && Y()>13 && Y()<28){
									morir();
								}
							}
							void SAPO::hacer_madera_5(){
								if(X()==7 && Y()==14){
									gotoxy(7,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(7,14); color(66);cout<<" ";
								}
								if(X()==17 && Y()==14){
									gotoxy(17,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,14); color(66);cout<<" ";
								}
								if(X()==22 && Y()==14){
									gotoxy(22,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,14); color(66);cout<<" ";
								}
								if(X()==28 && Y()==14){
									gotoxy(28,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,14); color(66);cout<<" ";
								}
								if(X()==4 && Y()==15){
									gotoxy(4,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,15); color(66);cout<<" ";
								}
								if(X()==7 && Y()==15){
									gotoxy(7,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(7,15); color(66);cout<<" ";
								}
								if(X()==8 && Y()==15){
									gotoxy(8,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,15); color(66);cout<<" ";
								}
								if(X()==9 && Y()==15){
									gotoxy(9,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,15); color(66);cout<<" ";
								}
								if(X()==13 && Y()==15){
									gotoxy(13,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,15); color(66);cout<<" ";
								}
								if(X()==14 && Y()==15){
									gotoxy(14,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,15); color(66);cout<<" ";
								}
								if(X()==15 && Y()==15){
									gotoxy(15,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,15); color(66);cout<<" ";
								}
								if(X()==16 && Y()==15){
									gotoxy(46,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,15); color(66);cout<<" ";
								}
								if(X()==17 && Y()==15){
									gotoxy(17,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,15); color(66);cout<<" ";
								}
								if(X()==22 && Y()==15){
									gotoxy(22,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,15); color(66);cout<<" ";
								}
								if(X()==27 && Y()==15){
									gotoxy(27,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,15); color(66);cout<<" ";
								}
								if(X()==28 && Y()==15){
									gotoxy(28,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,15); color(66);cout<<" ";
								}
								if(X()==4 && Y()==16){
									gotoxy(4,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,16); color(66);cout<<" ";
								}
								if(X()==5 && Y()==16){
									gotoxy(5,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(5,16); color(66);cout<<" ";
								}
								if(X()==9 && Y()==16){
									gotoxy(9,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,16); color(66);cout<<" ";
								}
								if(X()==10 && Y()==16){
									gotoxy(10,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,16); color(66);cout<<" ";
								}
								if(X()==13 && Y()==16){
									gotoxy(13,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,16); color(66);cout<<" ";
								}
								if(X()==14 && Y()==16){
									gotoxy(14,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,16); color(66);cout<<" ";
								}
								if(X()==22 && Y()==16){
									gotoxy(22,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,16); color(66);cout<<" ";
								}
								if(X()==25 && Y()==16){
									gotoxy(25,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(25,16); color(66);cout<<" ";
								}
								if(X()==26 && Y()==16){
									gotoxy(26,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(26,16); color(66);cout<<" ";
								}
								if(X()==27 && Y()==16){
									gotoxy(27,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,16); color(66);cout<<" ";
								}
								if(X()==3 && Y()==17){
									gotoxy(3,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,17); color(66);cout<<" ";
								}
								if(X()==4 && Y()==17){
									gotoxy(4,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,17); color(66);cout<<" ";
								}
								if(X()==9 && Y()==17){
									gotoxy(9,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,17); color(66);cout<<" ";
								}
								if(X()==14 && Y()==17){
									gotoxy(14,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,17); color(66);cout<<" ";
								}
								if(X()==15 && Y()==17){
									gotoxy(15,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,17); color(66);cout<<" ";
								}
								if(X()==16 && Y()==17){
									gotoxy(16,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,17); color(66);cout<<" ";
								}
								if(X()==18 && Y()==14){
									gotoxy(18,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,17); color(66);cout<<" ";
								}
								if(X()==19 && Y()==17){
									gotoxy(19,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,17); color(66);cout<<" ";
								}
								if(X()==20 && Y()==17){
									gotoxy(20,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,17); color(66);cout<<" ";
								}
								if(X()==21 && Y()==17){
									gotoxy(21,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(21,17); color(66);cout<<" ";
								}
								if(X()==15 && Y()==18){
									gotoxy(15,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,18); color(66);cout<<" ";
								}
								if(X()==20 && Y()==18){
									gotoxy(20,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,18); color(66);cout<<" ";
								}
							}
							void SAPO::hacer_madera_6(){
								if(X()==9 && Y()==14){
									gotoxy(9,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,14); color(66);cout<<" ";
								}
								if(X()==14 && Y()==14){
									gotoxy(14,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,14); color(66);cout<<" ";
								}
								if(X()==19 && Y()==14){
									gotoxy(19,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,14); color(66);cout<<" ";
								}
								if(X()==28 && Y()==14){
									gotoxy(28,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,14); color(66);cout<<" ";
								}
								if(X()==4 && Y()==15){
									gotoxy(4,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,15); color(66);cout<<" ";
								}
								if(X()==8 && Y()==15){
									gotoxy(8,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,15); color(66);cout<<" ";
								}
								if(X()==9 && Y()==15){
									gotoxy(9,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,15); color(66);cout<<" ";
								}
								if(X()==10 && Y()==15){
									gotoxy(10,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,15); color(66);cout<<" ";
								}
								if(X()==11 && Y()==15){
									gotoxy(11,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(11,15); color(66);cout<<" ";
								}
								if(X()==12 && Y()==15){
									gotoxy(12,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(12,15); color(66);cout<<" ";
								}
								if(X()==13 && Y()==15){
									gotoxy(13,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,15); color(66);cout<<" ";
								}
								if(X()==14 && Y()==15){
									gotoxy(14,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,15); color(66);cout<<" ";
								}
								if(X()==15 && Y()==15){
									gotoxy(15,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,15); color(66);cout<<" ";
								}
								if(X()==16 && Y()==15){
									gotoxy(16,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,15); color(66);cout<<" ";
								}
								if(X()==17 && Y()==15){
									gotoxy(17,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,15); color(66);cout<<" ";
								}
								if(X()==18 && Y()==15){
									gotoxy(18,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,15); color(66);cout<<" ";
								}
								if(X()==19 && Y()==15){
									gotoxy(19,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,15); color(66);cout<<" ";
								}
								if(X()==20 && Y()==15){
									gotoxy(20,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,15); color(66);cout<<" ";
								}
								if(X()==27 && Y()==15){
									gotoxy(27,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,15); color(66);cout<<" ";
								}
								if(X()==28 && Y()==15){
									gotoxy(28,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,15); color(66);cout<<" ";
								}
								if(X()==2 && Y()==16){
									gotoxy(2,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(2,16); color(66);cout<<" ";
								}
								if(X()==4 && Y()==16){
									gotoxy(4,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,16); color(66);cout<<" ";
								}
								if(X()==5 && Y()==16){
									gotoxy(5,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(5,16); color(66);cout<<" ";
								}
								if(X()==11 && Y()==16){
									gotoxy(11,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(11,16); color(66);cout<<" ";
								}
								if(X()==15 && Y()==16){
									gotoxy(15,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,16); color(66);cout<<" ";
								}
								if(X()==18 && Y()==16){
									gotoxy(18,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,16); color(66);cout<<" ";
								}
								if(X()==25 && Y()==16){
									gotoxy(25,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(25,16); color(66);cout<<" ";
								}
								if(X()==26 && Y()==16){
									gotoxy(26,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(26,16); color(66);cout<<" ";
								}
								if(X()==27 && Y()==16){
									gotoxy(27,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,16); color(66);cout<<" ";
								}
								if(X()==2 && Y()==17){
									gotoxy(2,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(2,17); color(66);cout<<" ";
								}
								
								if(X()==3 && Y()==17){
									gotoxy(3,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,17); color(66);cout<<" ";
								}
								
								if(X()==4 && Y()==17){
									gotoxy(4,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,17); color(66);cout<<" ";
								}
								
								if(X()==11 && Y()==17){
									gotoxy(11,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(11,17); color(66);cout<<" ";
								}
								
								if(X()==12 && Y()==17){
									gotoxy(12,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(12,17); color(66);cout<<" ";
								}
								
								if(X()==13 && Y()==17){
									gotoxy(13,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,17); color(66);cout<<" ";
								}
								
								if(X()==14 && Y()==17){
									gotoxy(14,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,17); color(66);cout<<" ";
								}
								
								if(X()==15 && Y()==17){
									gotoxy(15,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,17); color(66);cout<<" ";
								}
								
								if(X()==17 && Y()==17){
									gotoxy(17,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,17); color(66);cout<<" ";
								}
								
								if(X()==18 && Y()==17){
									gotoxy(18,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,17); color(66);cout<<" ";
								}
								
								if(X()==19 && Y()==17){
									gotoxy(19,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,17); color(66);cout<<" ";
								}
								if(X()==20 && Y()==17){
									gotoxy(20,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,17); color(66);cout<<" ";
								}
								if(X()==21 && Y()==17){
									gotoxy(21,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(21,17); color(66);cout<<" ";
								}
								if(X()==22 && Y()==17){
									gotoxy(22,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,17); color(66);cout<<" ";
								}
								if(X()==28 && Y()==17){
									gotoxy(28,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,17); color(66);cout<<" ";
								}
								if(X()==6 && Y()==18){
									gotoxy(6,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,18); color(66);cout<<" ";
								}
								if(X()==13 && Y()==18){
									gotoxy(13,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,18); color(66);cout<<" ";
								}
								if(X()==17 && Y()==18){
									gotoxy(17,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,18); color(66);cout<<" ";
								}
								if(X()==22 && Y()==18){
									gotoxy(22,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,18); color(66);cout<<" ";
								}
								if(X()==23 && Y()==18){
									gotoxy(23,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(23,18); color(66);cout<<" ";
								}
								if(X()==29 && Y()==18){
									gotoxy(29,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(29,18); color(66);cout<<" ";
								}
								if(X()==7 && Y()==19){
									gotoxy(7,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(7,19); color(66);cout<<" ";
								}
								if(X()==12 && Y()==19){
									gotoxy(12,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(12,19); color(66);cout<<" ";
								}
								if(X()==23 && Y()==19){
									gotoxy(23,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(23,19); color(66);cout<<" ";
								}
								if(X()==28 && Y()==19){
									gotoxy(28,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,19); color(66);cout<<" ";
								}
							}
							void SAPO::hacer_madera_7(){
								if(X()==11 && Y()==14){
									gotoxy(11,14); color(66);cout<<char(207);
								}
								else{
									gotoxy(11,14); color(66);cout<<" ";
								}
								if(X()==1 && Y()==15){
									gotoxy(1,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(1,15); color(66);cout<<" ";
								}
								if(X()==3 && Y()==15){
									gotoxy(3,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,15); color(66);cout<<" ";
								}
								if(X()==6 && Y()==15){
									gotoxy(6,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,15); color(66);cout<<" ";
								}
								if(X()==7 && Y()==15){
									gotoxy(7,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(7,15); color(66);cout<<" ";
								}
								if(X()==8 && Y()==15){
									gotoxy(8,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,15); color(66);cout<<" ";
								}
								if(X()==9 && Y()==15){
									gotoxy(9,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,15); color(66);cout<<" ";
								}
								if(X()==10 && Y()==15){
									gotoxy(10,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,15); color(66);cout<<" ";
								}
								if(X()==11 && Y()==15){
									gotoxy(11,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(11,15); color(66);cout<<" ";
								}
								if(X()==12 && Y()==15){
									gotoxy(12,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(12,15); color(66);cout<<" ";
								}
								if(X()==13 && Y()==15){
									gotoxy(13,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,15); color(66);cout<<" ";
								}
								if(X()==14 && Y()==15){
									gotoxy(14,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,15); color(66);cout<<" ";
								}
								if(X()==15 && Y()==15){
									gotoxy(15,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,15); color(66);cout<<" ";
								}
								if(X()==16 && Y()==15){
									gotoxy(16,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,15); color(66);cout<<" ";
								}
								if(X()==17 && Y()==15){
									gotoxy(17,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,15); color(66);cout<<" ";
								}
								if(X()==18 && Y()==15){
									gotoxy(18,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,15); color(66);cout<<" ";
								}
								if(X()==19 && Y()==15){
									gotoxy(19,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,15); color(66);cout<<" ";
								}
								if(X()==20 && Y()==15){
									gotoxy(20,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,15); color(66);cout<<" ";
								}
								if(X()==24 && Y()==15){
									gotoxy(24,15); color(66);cout<<char(207);
								}
								else{
									gotoxy(24,15); color(66);cout<<" ";
								}
								if(X()==1 && Y()==16){
									gotoxy(1,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,16); color(66);cout<<" ";
								}
								if(X()==3 && Y()==16){
									gotoxy(3,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,16); color(66);cout<<" ";
								}
								if(X()==6 && Y()==16){
									gotoxy(6,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,16); color(66);cout<<" ";
								}
								if(X()==8 && Y()==16){
									gotoxy(8,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,16); color(66);cout<<" ";
								}
								if(X()==20 && Y()==16){
									gotoxy(20,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,16); color(66);cout<<" ";
								}
								if(X()==24 && Y()==16){
									gotoxy(24,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(24,16); color(66);cout<<" ";
								}
								if(X()==25 && Y()==16){
									gotoxy(25,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(25,16); color(66);cout<<" ";
								}
								if(X()==26 && Y()==16){
									gotoxy(26,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(26,16); color(66);cout<<" ";
								}
								if(X()==27 && Y()==16){
									gotoxy(27,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,16); color(66);cout<<" ";
								}
								if(X()==29 && Y()==16){
									gotoxy(29,16); color(66);cout<<char(207);
								}
								else{
									gotoxy(29,16); color(66);cout<<" ";
								}
								if(X()==1 && Y()==17){
									gotoxy(1,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(1,17); color(66);cout<<" ";
								}
								if(X()==3 && Y()==17){
									gotoxy(3,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,17); color(66);cout<<" ";
								}
								if(X()==4 && Y()==17){
									gotoxy(4,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(4,17); color(66);cout<<" ";
								}
								if(X()==5 && Y()==17){
									gotoxy(5,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(5,17); color(66);cout<<" ";
								}
								if(X()==6 && Y()==17){
									gotoxy(6,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,17); color(66);cout<<" ";
								}
								if(X()==8 && Y()==17){
									gotoxy(8,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,17); color(66);cout<<" ";
								}
								if(X()==9 && Y()==17){
									gotoxy(9,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,17); color(66);cout<<" ";
								}
								if(X()==10 && Y()==17){
									gotoxy(10,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,17); color(66);cout<<" ";
								}
								if(X()==20 && Y()==17){
									gotoxy(20,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,17); color(66);cout<<" ";
								}
								if(X()==24 && Y()==17){
									gotoxy(24,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(24,17); color(66);cout<<" ";
								}
								if(X()==27 && Y()==17){
									gotoxy(27,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,17); color(66);cout<<" ";
								}
								if(X()==29 && Y()==17){
									gotoxy(29,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(29,17); color(66);cout<<" ";
								}
								if(X()==30 && Y()==17){
									gotoxy(30,17); color(66);cout<<char(207);
								}
								else{
									gotoxy(30,17); color(66);cout<<" ";
								}
								if(X()==1 && Y()==18){
									gotoxy(1,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(1,18); color(66);cout<<" ";
								}
								if(X()==6 && Y()==18){
									gotoxy(6,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,18); color(66);cout<<" ";
								}
								if(X()==10 && Y()==18){
									gotoxy(10,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,18); color(66);cout<<" ";
								}
								if(X()==13 && Y()==18){
									gotoxy(13,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,18); color(66);cout<<" ";
								}
								if(X()==14 && Y()==18){
									gotoxy(14,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(14,18); color(66);cout<<" ";
								}
								if(X()==15 && Y()==18){
									gotoxy(15,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(15,18); color(66);cout<<" ";
								}
								if(X()==16 && Y()==18){
									gotoxy(16,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,18); color(66);cout<<" ";
								}
								if(X()==17 && Y()==18){
									gotoxy(17,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(17,18); color(66);cout<<" ";
								}
								if(X()==18 && Y()==18){
									gotoxy(18,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(18,18); color(66);cout<<" ";
								}
								if(X()==19 && Y()==18){
									gotoxy(19,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(19,18); color(66);cout<<" ";
								}
								if(X()==20 && Y()==18){
									gotoxy(20,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(20,18); color(66);cout<<" ";
								}
								if(X()==21 && Y()==18){
									gotoxy(21,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(21,18); color(66);cout<<" ";
								}
								if(X()==22 && Y()==18){
									gotoxy(22,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(22,18); color(66);cout<<" ";
								}
								if(X()==23 && Y()==18){
									gotoxy(23,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(23,18); color(66);cout<<" ";
								}
								if(X()==24 && Y()==18){
									gotoxy(24,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(24,18); color(66);cout<<" ";
								}
								if(X()==27 && Y()==18){
									gotoxy(27,18); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,18); color(66);cout<<" ";
								}
								if(X()==1 && Y()==18){
									gotoxy(1,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(1,19); color(66);cout<<" ";
								}
								if(X()==3 && Y()==18){
									gotoxy(3,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(3,19); color(66);cout<<" ";
								}
								if(X()==6 && Y()==18){
									gotoxy(6,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(6,19); color(66);cout<<" ";
								}
								if(X()==8 && Y()==18){
									gotoxy(8,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,19); color(66);cout<<" ";
								}
								if(X()==9 && Y()==18){
									gotoxy(9,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(9,19); color(66);cout<<" ";
								}
								if(X()==10 && Y()==18){
									gotoxy(10,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(10,19); color(66);cout<<" ";
								}
								if(X()==13 && Y()==18){
									gotoxy(13,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(13,19); color(66);cout<<" ";
								}
								if(X()==16 && Y()==18){
									gotoxy(16,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,19); color(66);cout<<" ";
								}
								if(X()==27 && Y()==18){
									gotoxy(27,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(27,19); color(66);cout<<" ";
								}
								if(X()==28 && Y()==18){
									gotoxy(28,19); color(66);cout<<char(207);
								}
								else{
									gotoxy(28,19); color(66);cout<<" ";
								}
								if(X()==8 && Y()==20){
									gotoxy(8,20); color(66);cout<<char(207);
								}
								else{
									gotoxy(8,20); color(66);cout<<" ";
								}
								if(X()==16 && Y()==20){
									gotoxy(16,20); color(66);cout<<char(207);
								}
								else{
									gotoxy(16,20); color(66);cout<<" ";
								}
							}
							class MOTOTAXI_T_1{
								int x,y;
							public:
								MOTOTAXI_T_1(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void mover();
								void chocar(class SAPO &S);
							};
							void MOTOTAXI_T_1::pintar(){
								gotoxy(x,y); 
								color(9);
								cout<<"#";
							}
							void MOTOTAXI_T_1::mover(){
								gotoxy(x,y); 
								color(135);
								cout<<"»";
								x++;
								if(x>30){
									x=1;
								}
								pintar();
							}
							void MOTOTAXI_T_1::chocar(class SAPO &sapito){
								if(x==sapito.X() && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							class MOTOTAXI_T_2{
								int x,y;
							public:
								MOTOTAXI_T_2(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void mover();
								void chocar(class SAPO &S);
							};
							void MOTOTAXI_T_2::pintar(){
								gotoxy(x,y); 
								color(14);
								cout<<"#";
							}
							void MOTOTAXI_T_2::mover(){
								gotoxy(x,y); 
								color(135);
								cout<<"=";
								x--;
								if(x==0){
									x=30;
								}
								pintar();
							}
							void MOTOTAXI_T_2::chocar(class SAPO &sapito){
								if(x==sapito.X() && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							class TAXI_T_2{
								int x,y;
							public:
								TAXI_T_2(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void mover();
								void chocar(class SAPO &S);
							};
							void TAXI_T_2::pintar(){
								gotoxy(x,y);
								color(224);
								cout<<char(200)<<char(188);
							}
							void TAXI_T_2::mover(){
								gotoxy(x,y); 
								color(135);
								cout<<"=";
								gotoxy(x+1,y); 
								color(135);
								cout<<"=";
								x--;
								if(x==0){
									x=28;
								}
								pintar();
							}
							void TAXI_T_2::chocar(class SAPO &sapito){
								if((x==sapito.X() || x+1==sapito.X()) && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							
							class MOSCA{
								int x,y;
								bool aparecer;
							public:
								MOSCA(int _x,int _y): x(_x),y(_y){}
								int X(){ return x;}
								int Y(){ return y;}
								void pintar();
								void borrar();
								void mover();
								bool desaparecer(class SAPO &S);
							};
							void MOSCA::pintar(){
								gotoxy(x,y); color(15);cout<<char(148);
							}
							void MOSCA::borrar(){
								if(x<31 && x>0 && y>3 && y<9){ 
									gotoxy(x,y); 
									cout<<"=";
								}
								else if(x<31 && x>0 && (y==3 || y==10)){ 
									gotoxy(x,y); 
									cout<<char(176);
								}
							}
							bool MOSCA::desaparecer(class SAPO &sapito){
								if(x==sapito.X() && y==sapito.Y()){
									sapito.vida();
									borrar();
									return true;
								}
								return false;
							}
							class AGUA{
								int x,y;
							public:
								AGUA(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void ahogar(class SAPO &S);
							};
							void AGUA::pintar(){
								gotoxy(x,y); color(178);cout<<" ";
							}
							void AGUA::ahogar(class SAPO &sapito){
								if(x==sapito.X() && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							class COCODRILO_T_1{
								int x,y;
							public:
								COCODRILO_T_1(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void mover();
								void morder(class SAPO &S);
							};
							void COCODRILO_T_1::pintar(){
								gotoxy(x,y);
								color(178);
								cout<<char(205)<<char(167)<<char(191);
							}
							void COCODRILO_T_1::mover(){
								gotoxy(x,y); 
								color(178);
								cout<<" ";
								gotoxy(x+1,y); 
								color(178);
								cout<<" ";
								gotoxy(x+2,y);
								color(178);
								cout<<" ";
								x++;
								if(x==29){
									x=1;
									gotoxy(x+1,y);
									color(178);
									cout<<" ";
								}
								pintar();
							}
							void COCODRILO_T_1::morder(class SAPO &sapito){
								if((x==sapito.X() || x+1==sapito.X() || x+2==sapito.X()) && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							
							class COCODRILO_T_2{
								int x,y;
							public:
								COCODRILO_T_2(int _x, int _y): x(_x),y(_y){}
								void pintar();
								void mover();
								void morder(class SAPO &S);
							};
							void COCODRILO_T_2::pintar(){
								gotoxy(x,y);
								color(178);
								cout<<char(218)<<char(167)<<char(205);
							}
							void COCODRILO_T_2::mover(){
								gotoxy(x,y); 
								color(178);
								cout<<" ";
								gotoxy(x+1,y); 
								color(178);
								cout<<" ";
								gotoxy(x+2,y);
								color(178);
								cout<<" ";
								x--;
								if(x==0){
									x=28;
									gotoxy(x-1,y);
									color(178);
									cout<<" ";
								}
								pintar();
							}
							void COCODRILO_T_2::morder(class SAPO &sapito){
								if((x==sapito.X() || x+1==sapito.X() || x+2==sapito.X()) && y==sapito.Y()){
									sapito.morir();
									sapito.pintar();
								}
							}
							int main() {
								srand(time(0));
								bool muerto=false,meta=false,mosca_desaparecida=false;
								ocultarCursor();
								inicial();
								int x=12,y=11,casos=0,nivelactual=1;
								gotoxy(x,y);cout<<"*";
								bool gameover=false;
								while(true){
									if(gameover==true){
										x=12,y=11;
										system("cls");
										inicial();
										gotoxy(x,y);cout<<"*";
									}
									gameover=false;
									if(kbhit() && gameover==false){ //kbhit es una función que verifica que se haya presionado una tecla
										gotoxy(x,y);cout<<" ";
										char tecla = getch();//getch sirve para guardar la tecla presionada
										if(tecla==ARRIBA && y==11) {y+=3;Beep(300, 300); gotoxy(x,y);cout<<"*";}
										else if(tecla==ARRIBA && (y==12 || y==13 || y==14)) {y--;Beep(300, 300); gotoxy(x,y);cout<<"*";}
										else if(tecla==ABAJO && (y==11 || y==12 || y==13)) {y++;Beep(300, 300); gotoxy(x,y);cout<<"*";}
										else if(tecla==ABAJO && y==14) {y-=3;Beep(300, 300); gotoxy(x,y);cout<<"*";}
										else if(tecla==ENTER && y==11){
											SAPO sapito(15,3,7);
											while(meta==false && gameover==false){
												system("cls");
												escenario(1);
												Beep(500, 400);
												gotoxy(12,6); 
												color(138);
												cout<<"Nivel 1";
												Sleep(1500);
												gotoxy(11,6); 
												color(135);
												cout<<"»»»»»»»»";
												MOTOTAXI_T_1 *mototaxis[6];
												MOTOTAXI_T_2 *mototaxis2[6];
												for(int i=0;i<6;i++){
												switch(casos){
												case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
												case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
												case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos=0; break;
												}
												}
												casos=0;
												for(int i=0;i<6;i++){
												switch(casos){
												case 0: mototaxis2[i]= new MOTOTAXI_T_2((2+rand()%28)+1,5); casos++; break;
												case 1: mototaxis2[i]= new MOTOTAXI_T_2((2+rand()%28)+1,7); casos--;
												}
												}
												while(meta==false && gameover==false){
													sapito.pintar();
													sapito.mover();
													for(int i=0;i<6;i++){
													mototaxis[i]->mover();
													mototaxis[i]->chocar(sapito);
													}
													for(int i=0;i<6;i++){
													mototaxis2[i]->mover();
													mototaxis2[i]->chocar(sapito);
													}
													meta=sapito.llegada();
													if(sapito.kokoro()==0) gameover=true;
													if(muerto==true && gameover==false){
														escenario(1);
														gotoxy(12,6); 
														color(138);
														cout<<"Nivel 1";
														Sleep(800);
													}
													Sleep(150);
												}
											}
											meta=false;
											MOSCA mosca1((2+rand()%28)+1,(3+rand()%6)+1);
											while(meta==false && gameover==false){
											nivelactual=2;
											escenario(2);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 2";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[7];
											TAXI_T_2 *taxis[6];
											for(int i=0;i<7;i++){
											switch(casos){
											case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
											case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
											case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos=0; break;
											}
											}
											casos=0;
											for(int i=0;i<6;i++){
											switch(casos){
											case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
											case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
											case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos=0;
											}
											}
											while(meta==false && gameover==false){
											sapito.pintar();
											sapito.mover();
											if(mosca_desaparecida==false)mosca1.pintar();
											for(int i=0;i<7;i++){
											mototaxis[i]->mover();
											mototaxis[i]->chocar(sapito);
											}
											for(int i=0;i<6;i++){
											taxis[i]->mover();
											taxis[i]->chocar(sapito);
											}
											if(mosca_desaparecida==false)mosca_desaparecida=mosca1.desaparecer(sapito);
											meta=sapito.llegada();
											if(sapito.kokoro()==0) gameover=true;
											if(muerto==true && gameover==false){
											escenario(2);
											gotoxy(12,6); 
											color(135);
											cout<<"Nivel 2";
											Sleep(1500);
											}
											Sleep(150);
											}
											}
											meta=false;
											while(meta==false && gameover==false){
												nivelactual=3;
											system("cls");
											escenario(3);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 3";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[8];
											TAXI_T_2 *taxis[8];
											for(int i=0;i<8;i++){
											switch(casos){
											case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
											case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
											case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos++; break;
											case 3: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,10); casos=0; break;
											}
											}
											casos=0;
											for(int i=0;i<8;i++){
											switch(casos){
											case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
											case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
											case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos=0;
											}
											}
											while(meta==false && gameover==false){
											sapito.pintar();
											sapito.mover();
											for(int i=0;i<8;i++){
											mototaxis[i]->mover();
											mototaxis[i]->chocar(sapito);
											}
											for(int i=0;i<8;i++){
											taxis[i]->mover();
											taxis[i]->chocar(sapito);
											}
											meta=sapito.llegada();
											if(sapito.kokoro()==0) gameover=true;
											if(muerto==true && gameover==false){
											escenario(2);
											gotoxy(12,6); cout<<"Nivel 3";
											Sleep(1500);
											}
											Sleep(100);
											}
											}
											meta=false;
											MOSCA mosca2((2+rand()%28)+1,(3+rand()%7)+1);
											mosca_desaparecida=false;
											while(meta==false && gameover==false){
											nivelactual=4;
											system("cls");
											escenario(4);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 4";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[9];
											TAXI_T_2 *taxis[9];
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
											case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
											case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos++; break;
											case 3: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,10); casos=0; break;
											}
											}
											casos=0;
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
											case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
											case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos++; break;
											case 3: taxis[i]= new TAXI_T_2((2+rand()%27)+1,11); casos=0;
											}
											}
											while(meta==false && gameover==false){
											sapito.pintar();
											sapito.mover();
											for(int i=0;i<9;i++){
											mototaxis[i]->mover();
											mototaxis[i]->chocar(sapito);
											}
											for(int i=0;i<9;i++){
											taxis[i]->mover();
											taxis[i]->chocar(sapito);
											}
											if(mosca_desaparecida==false)mosca2.pintar();
											if(mosca_desaparecida==false)mosca_desaparecida=mosca2.desaparecer(sapito);
											meta=sapito.llegada();
											if(sapito.kokoro()==0) gameover=true;
											if(muerto==true && gameover==false){
											escenario(2);
											gotoxy(12,6); cout<<"Nivel 4";
											Sleep(1500);
											}
											Sleep(100);
											}
											}
											meta=false;
											while(meta==false && gameover==false){
											nivelactual=5;
											system("cls");
											escenario(5);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 5";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[9];
											TAXI_T_2 *taxis[9];
											COCODRILO_T_1 *cocodrilos1[2];
											COCODRILO_T_2 *cocodrilos2[3];
											AGUA *aguas[500];
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
											case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
											case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos++; break;
											case 3: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,10); casos=0; break;
											}
											}
											casos=0;
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
											case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
											case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos++; break;
											case 3: taxis[i]= new TAXI_T_2((2+rand()%27)+1,11); casos=0;
											}
											}
											for(int i=0;i<2;i++){
											switch(casos){
											case 0: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,15); casos++; break;
											case 1: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,17); casos=0; break;
											}
											}
											for(int i=0;i<3;i++){
											switch(casos){
											case 0: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,14); casos++; break;
											case 1: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,16); casos++; break;
											case 2: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,18); casos=0; break;
											}
											}
											int contador1=1;
											int contador2=14;
											for(int i=0;i<150;i++){
											aguas[i]=new AGUA(contador1,contador2);
											contador1++;
											if(contador1==31){
											contador1=1;
											contador2++;
											}
											}
											for(int i=0;i<150;i++){
											if(i!=6 && i!=16 && i!=21 && i!=27 && i!=33 && i!=36 && i!=37 && i!=38 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=51 && i!=56 && i!=57 && i!=63 && i!=64 && i!=68 && i!=69 && i!=72 && i!=73 && i!=81 && i!=84 && i!=85 && i!=86 && i!=92 && i!=93 && i!=98 && i!=103 && i!=104 && i!=105 && i!=107 && i!=108 && i!=109 && i!=110 && i!=134 && i!=139){
											aguas[i]->pintar();
											}
											}
											while(meta==false && gameover==false){
											sapito.pintar();
											sapito.mover();
											for(int i=0;i<9;i++){
											mototaxis[i]->mover();
											mototaxis[i]->chocar(sapito);
											}
											for(int i=0;i<9;i++){
											taxis[i]->mover();
											taxis[i]->chocar(sapito);
											}
											for(int i=0;i<2;i++){
											cocodrilos1[i]->mover();
											cocodrilos1[i]->morder(sapito);
											}
											for(int i=0;i<3;i++){
											cocodrilos2[i]->mover();
											cocodrilos2[i]->morder(sapito);
											}
											sapito.hacer_madera_5();
											for(int i=0;i<150;i++){
											if(i!=6 && i!=16 && i!=21 && i!=27 && i!=33 && i!=36 && i!=37 && i!=38 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=51 && i!=56 && i!=57 && i!=63 && i!=64 && i!=68 && i!=69 && i!=72 && i!=73 && i!=81 && i!=84 && i!=85 && i!=86 && i!=92 && i!=93 && i!=98 && i!=103 && i!=104 && i!=105 && i!=107 && i!=108 && i!=109 && i!=110 && i!=134 && i!=139){
											aguas[i]->ahogar(sapito);
											}
											
											}
											meta=sapito.llegada();
											if(sapito.kokoro()==0) gameover=true;
											if(muerto==true && gameover==false){
											escenario(2);
											gotoxy(12,6); cout<<"Nivel 5";
											Sleep(1500);
											}
											Sleep(100);
											}
											}
											meta=false;
											while(meta==false && gameover==false){
											nivelactual=6;
											system("cls");
											escenario(6);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 6";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[9];
											TAXI_T_2 *taxis[9];
											COCODRILO_T_1 *cocodrilos1[2];
											COCODRILO_T_2 *cocodrilos2[3];
											AGUA *aguas[500];
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
											case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
											case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos++; break;
											case 3: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,10); casos=0; break;
											}
											}
											casos=0;
											for(int i=0;i<9;i++){
											switch(casos){
											case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
											case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
											case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos++; break;
											case 3: taxis[i]= new TAXI_T_2((2+rand()%27)+1,11); casos=0;
											}
											}
											for(int i=0;i<3;i++){
											switch(casos){
											
											case 0: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,15); casos++; break;
											case 1: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,17); casos++; break;
											case 2: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,19); casos=0; break;
											}
											}
											for(int i=0;i<3;i++){
											switch(casos){
											case 0: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,14); casos++; break;
											case 1: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,16); casos++; break;
											case 2: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,18); casos=0; break;
											}
											}
											int contador1=1;
											int contador2=14;
											for(int i=0;i<150;i++){
											aguas[i]=new AGUA(contador1,contador2);
											contador1++;
											if(contador1==31){
											contador1=1;
											contador2++;
											}
											}
											for(int i=0;i<150;i++){
											if(i!=8 && i!=13 && i!=18 && i!=27 && i!=33 && i!=37 && i!=38 && i!=39 && i!=40 && i!=41 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=47 && i!=48 && i!=49 && i!=56 && i!=57 && i!=61 && i!=63 && i!=64 && i!=70 && i!=74 && i!=77 && i!=84 && i!=85 && i!=86 && i!=91 && i!=92 && i!=93 && i!=100 && i!=101 && i!=102 && i!=103 && i!=104 && i!=106 && i!=107 && i!=108 && i!=109 && i!=110 && i!=111 && i!=117 && i!=125 && i!=132 && i!=136 && i!=141 && i!=142 && i!=148 && i!=156 && i!=161 && i!=172 && i!=177){
											aguas[i]->pintar();
											}
											
											}
											while(meta==false && gameover==false){
											sapito.pintar();
											sapito.mover();
											for(int i=0;i<9;i++){
											mototaxis[i]->mover();
											mototaxis[i]->chocar(sapito);
											}
											for(int i=0;i<9;i++){
											taxis[i]->mover();
											taxis[i]->chocar(sapito);
											}
											for(int i=0;i<3;i++){
											cocodrilos1[i]->mover();
											cocodrilos1[i]->morder(sapito);
											}
											for(int i=0;i<3;i++){
											cocodrilos2[i]->mover();
											cocodrilos2[i]->morder(sapito);
											}
											sapito.hacer_madera_6();
											for(int i=0;i<150;i++){
											if(i!=8 && i!=13 && i!=18 && i!=27 && i!=33 && i!=37 && i!=38 && i!=39 && i!=40 && i!=41 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=47 && i!=48 && i!=49 && i!=56 && i!=57 && i!=61 && i!=63 && i!=64 && i!=70 && i!=74 && i!=77 && i!=84 && i!=85 && i!=86 && i!=91 && i!=92 && i!=93 && i!=100 && i!=101 && i!=102 && i!=103 && i!=104 && i!=106 && i!=107 && i!=108 && i!=109 && i!=110 && i!=111 && i!=117 && i!=125 && i!=132 && i!=136 && i!=141 && i!=142 && i!=148 && i!=156 && i!=161 && i!=172 && i!=177){
											aguas[i]->ahogar(sapito);
											}
											
											}
											meta=sapito.llegada();
											if(sapito.kokoro()==0) gameover=true;
											if(muerto==true && gameover==false){
											escenario(2);
											gotoxy(12,6); cout<<"Nivel 6";
											Sleep(1500);
											}
											Sleep(100);
											}
											}
											meta=false;
											while(meta==false && gameover==false){
											nivelactual=7;
											system("cls");
											escenario(7);
											Beep(500, 400);
											gotoxy(12,6); 
											color(138);
											cout<<"Nivel 7";
											Sleep(1500);
											gotoxy(11,6); 
											color(135);
											cout<<"»»»»»»»»";
											MOTOTAXI_T_1 *mototaxis[9];
											TAXI_T_2 *taxis[9];
											COCODRILO_T_1 *cocodrilos1[3];
											COCODRILO_T_2 *cocodrilos2[4];
											AGUA *aguas[500];
											for(int i=0;i<9;i++){
												switch(casos){
												case 0: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,4); casos++; break; 
												case 1: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,6); casos++; break;
												case 2: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,8); casos++; break;
												case 3: mototaxis[i]= new MOTOTAXI_T_1((2+rand()%28)+1,10); casos=0; break;
												}
											}
											casos=0;
											for(int i=0;i<9;i++){
												switch(casos){
												case 0: taxis[i]= new TAXI_T_2((2+rand()%27)+1,5); casos++; break;
												case 1: taxis[i]= new TAXI_T_2((2+rand()%27)+1,7); casos++; break;
												case 2: taxis[i]= new TAXI_T_2((2+rand()%27)+1,9); casos++; break;
												case 3: taxis[i]= new TAXI_T_2((2+rand()%27)+1,11); casos=0;
												}
											}
											for(int i=0;i<3;i++){
												switch(casos){
												case 0: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,15); casos++; break;
												case 1: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,17); casos++; break;
												case 2: cocodrilos1[i]= new COCODRILO_T_1((2+rand()%26)+1,19); casos=0; break;
												}
											}
											for(int i=0;i<4;i++){
												switch(casos){
												case 0: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,14); casos++; break;
												case 1: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,16); casos++; break;
												case 2: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,18); casos++; break;
												case 3: cocodrilos2[i]= new COCODRILO_T_2((2+rand()%26)+1,20); casos=0; break;
												}
											}
											int contador1=1;
											int contador2=14;
											for(int i=0;i<150;i++){
												aguas[i]=new AGUA(contador1,contador2);
												contador1++;
												if(contador1==31){
													contador1=1;
													contador2++;
												}
											}
											for(int i=0;i<150;i++){
												if(i!=10 && i!=30 && i!=32 && i!=35 && i!=36 && i!=37 && i!=38 && i!=39 && i!=40 && i!=41 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=47 && i!=48 && i!=49 && i!=53 && i!=60 && i!=62 && i!=65 && i!=67 && i!=79 && i!=83 && i!=84 && i!=85 && i!=86 && i!=88 && i!=90 && i!=92 && i!=93 && i!=94 && i!=95 && i!=97 && i!=98 && i!=99 && i!=109 && i!=113 && i!=116 && i!=118 && i!=119 && i!=120 && i!=125 && i!=129 && i!=132 && i!=133 && i!=134 && i!=135 && i!=136 && i!=137 && i!=138 && i!=139 && i!=140 && i!=141 && i!=142 && i!=143 && i!=146 && i!=150 && i!=152 && i!=155 && i!=157 && i!=158 && i!=159 && i!=162 && i!=165 && i!=176 && i!=177 && i!=187 && i!=195){
													aguas[i]->pintar();
												}
												
											}
											while(meta==false && gameover==false){
												sapito.pintar();
												sapito.mover();
												for(int i=0;i<9;i++){
													mototaxis[i]->mover();
													mototaxis[i]->chocar(sapito);
												}
												for(int i=0;i<9;i++){
													taxis[i]->mover();
													taxis[i]->chocar(sapito);
												}
												for(int i=0;i<3;i++){
													cocodrilos1[i]->mover();
													cocodrilos1[i]->morder(sapito);
												}
												for(int i=0;i<4;i++){
													cocodrilos2[i]->mover();
													cocodrilos2[i]->morder(sapito);
												}
												sapito.hacer_madera_7();
												for(int i=0;i<150;i++){
													if(i!=10 && i!=30 && i!=32 && i!=35 && i!=36 && i!=37 && i!=38 && i!=39 && i!=40 && i!=41 && i!=42 && i!=43 && i!=44 && i!=45 && i!=46 && i!=47 && i!=48 && i!=49 && i!=53 && i!=60 && i!=62 && i!=65 && i!=67 && i!=79 && i!=83 && i!=84 && i!=85 && i!=86 && i!=88 && i!=90 && i!=92 && i!=93 && i!=94 && i!=95 && i!=97 && i!=98 && i!=99 && i!=109 && i!=113 && i!=116 && i!=118 && i!=119 && i!=120 && i!=125 && i!=129 && i!=132 && i!=133 && i!=134 && i!=135 && i!=136 && i!=137 && i!=138 && i!=139 && i!=140 && i!=141 && i!=142 && i!=143 && i!=146 && i!=150 && i!=152 && i!=155 && i!=157 && i!=158 && i!=159 && i!=162 && i!=165 && i!=176 && i!=177 && i!=187 && i!=195){
														aguas[i]->ahogar(sapito);
													}
													
												}
												meta=sapito.llegada();
												if(sapito.kokoro()==0) gameover=true;
												if(muerto==true && gameover==false){
													escenario(2);
													gotoxy(12,6); cout<<"Nivel 7";
													Sleep(1500);
												}
												Sleep(100);
											}
											}
										}
										else if(tecla==ENTER && y==12) {
											Beep(500, 400);
											int x=1,y=1;
											gotoxy(x,y); cout<<"*";
											instrucciones();
											inicial();
										}
										else if(tecla==ENTER && y==13) {
											Beep(500, 400);
											int x=1,y=1;
											gotoxy(x,y); cout<<"*";
											creditos();
											inicial();
										}
										else if(tecla==ENTER && y==14) {
											Beep(500, 400);
											gotoxy(1,15);
											color(5);
											return 0;
										}
										if(gameover==true){
											for(int i=0;i<3;i++){
												if(i==0)Beep(390,1000);
												if(i==1)Beep(370,1000);
												if(i==2)Beep(340,1500);
												color(138);
												gotoxy(10,6); 
												cout<<"»»»»»»»»»»»»»»";
												Sleep(100);
												gotoxy(10,6);
												if(i<2)cout<<"HAZ PERDIDO!!!";
												Sleep(50);
											}
										}
										if(meta==true && nivelactual==7){
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);;color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1480,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1568,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1568,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<""<<char(126)<<char(126)<<"    _    _    "<<char(126)<<char(126)<<"  ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(92)<<char(92)<<"  (o)--(o)  //   ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<"/.______.";cout<<char(92)<<"//    ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   '";cout<<char(92)<<"________/'     ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ ";cout<<"/ /    ";color(12);cout<<"                I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<" "<<char(92)<<"    / /      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   "<<char(126)<<char(126)<<char(126)<<char(126)<<"    "<<char(126)<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1568,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(739.99,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(783.99,100);
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(783.99,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                   ";color(15);cout<<"                           (   (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(783.99,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(369.99,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(392,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<""<<char(126)<<char(126)<<"    _    _    "<<char(126)<<char(126)<<"  ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(92)<<char(92)<<"  (o)--(o)  //   ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<"/.______.";cout<<char(92)<<"//    ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   '";cout<<char(92)<<"________/'     ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ ";cout<<"/ /    ";color(12);cout<<"                I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<" "<<char(92)<<"    / /      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   "<<char(126)<<char(126)<<char(126)<<char(126)<<"    "<<char(126)<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(369.99,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(392,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(392,400);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											system("cls");
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                   ";color(15);cout<<"                           (   (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(196,400);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);	
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(880,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(830.61,150);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<""<<char(126)<<char(126)<<"    _    _    "<<char(126)<<char(126)<<"  ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(92)<<char(92)<<"  (o)--(o)  //   ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<"/.______.";cout<<char(92)<<"//    ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   '";cout<<char(92)<<"________/'     ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ ";cout<<"/ /    ";color(12);cout<<"                I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<" "<<char(92)<<"    / /      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   "<<char(126)<<char(126)<<char(126)<<char(126)<<"    "<<char(126)<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(880,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<" ";cout<<char(126)<<char(126)<<" /.______.";cout<<char(92)<<" "<<char(126)<<char(126)<<"   ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(92)<<char(92)<<char(92)<<"________///    ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<" ____ / /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ";cout<<char(126)<<char(126)<<char(126)<<"        "<<char(126)<<char(126)<<char(126)<<"    ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(987.77,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( . ||  || , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"";cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<char(126)<<char(126)<<"--"<<char(126)<<char(126)<<"/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(126)<<char(126)<<char(126)<<"      "<<char(126)<<char(126)<<char(126)<<"     ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											
											Beep(1108,150);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1174.7,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1480,150);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(1568,100);
											system("cls");
											
											color(14);cout<<char(201);for(int i=1;i<69;i++) cout<<char(205);cout<<char(187);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"                                                                    ";	color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<"  _  _   __   ____     ___   __   __ _   __   ____   __     _  _  _ ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" / )( ";cout<<char(92)<<" / _";cout<<char(92)<<" (__  )   / __) / _";cout<<char(92)<<" (  ( ";cout<<char(92)<<" / _";cout<<char(92)<<" (    ";cout<<char(92)<<" /  ";cout<<char(92)<<"   / ";cout<<char(92)<<"/ ";cout<<char(92)<<"/ ";cout<<char(92);color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ) __ (/    ";cout<<char(92)<<" / _/   ( (_ ";cout<<char(92)<<"/    ";cout<<char(92)<<"/    //    ";cout<<char(92)<<" ) D ((  O )  ";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(14);cout<<" ";cout<<char(92)<<"_)(_/";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____)   ";cout<<char(92)<<"___/";cout<<char(92)<<"_/";cout<<char(92)<<"_/";cout<<char(92)<<"_)__)";cout<<char(92)<<"_/";cout<<char(92)<<"_/(____/ ";cout<<char(92)<<"__/   (_)(_)(_)";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                                                                    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (   (                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            )  )                ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                           (  (                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(15);cout<<"                            (_)                 ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"                    ________[_]________         ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"           /";cout<<char(92)<<"      /";cout<<char(92)<<"        ______    ";cout<<char(92);cout<<"        ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"          /  ";cout<<char(92)<<"    //_";cout<<char(92)<<"       ";cout<<char(92)<<"    /";cout<<char(92)<<"    ";cout<<char(92);cout<<"       ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"      _    _        ";color(12);cout<<"   /";cout<<char(92)<<"    / /";cout<<char(92)<<"/";cout<<char(92)<<"  //___";cout<<char(92)<<"       ";cout<<char(92)<<"__/  ";cout<<char(92)<<"    ";cout<<char(92);cout<<"      ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"     (o)--(o)       ";color(12);cout<<"  /  ";cout<<char(92)<<"  /";cout<<char(92)<<"/    ";cout<<char(92)<<"//_____";cout<<char(92)<<"       ";cout<<char(92)<<" |[]|     ";cout<<char(92);cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    /.______.";cout<<char(92)<<"      ";color(12);cout<<" /";cout<<char(92)<<"/";cout<<char(92)<<"/";cout<<char(92)<<"/       //_______";cout<<char(92)<<"       ";cout<<char(92)<<"|__|      ";cout<<char(92);cout<<"    ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(92)<<"________/      ";color(12);cout<<"/      ";cout<<char(92)<<"      /X20XXXX20X";cout<<char(92)<<"  ING. BIOM"<<char(144)<<"DICA  ";cout<<char(92);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ./        ";cout<<char(92)<<".     ";color(12);cout<<"        ";cout<<char(92)<<"    /_I_II  I__I_";cout<<char(92)<<"__________________";cout<<char(92);cout<<"  ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"  ( .  FIEE  , )    ";color(12);cout<<"               I_I|  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"   ";cout<<char(92)<<" ";cout<<char(92)<<"_";cout<<char(92)<<char(92)<<"//_/ /     ";color(12);cout<<"               I_II  I__I_____[]_|_[]_____I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"    ";cout<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"  "<<char(126)<<char(126)<<"      ";color(12);cout<<"               I II__I  I     XXXXXXX     I";cout<<"     ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(186);color(10);cout<<"                    ";color(12);cout<<"             ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<"  ";cout<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126)<<char(126);cout<<"   ";color(14);cout<<char(186);
											color(14);cout<<"\n"<<char(200);for(int i=1;i<69;i++) cout<<char(205);cout<<char(188)<<endl;
											Beep(100,100);
										}
									}
									Sleep(30);
								}
								return 0;
							}
