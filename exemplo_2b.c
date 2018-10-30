// Para executar:
// gcc -c cg2d.c
// gcc exemplo_2b.c -o exemplo_2b cg2d.o -lm -lX11
// ./exemplo_2b

//Resposta ao exercicio proposto - Nessa forma de visualização, a letra A parece relativamente mais formatada, assim, parece mais fiel a uma representação de um A convencional

#include "cg2d.h"

int main(int argc, char ** argv) {
  
  palette * palheta;
  bufferdevice * monitor;
  window * janela;
  viewport * porta;
  hObject * poligono1, * poligono2;
  
  SetWorld(-20, 10, -20, 15); // Define o tamanho do mundo  
  monitor = CreateBuffer(640,480); // Cria um monitor virtual
  //monitor = CreateBuffer(1024,768); // conforme solicitado
  
  palheta = CreatePalette(5);  // Cria um colormap
  SetColor(0,0,0,palheta);
  SetColor(1,0,0,palheta);
  SetColor(0,1,0,palheta);
  SetColor(0,0,1,palheta);
  SetColor(1,1,1,palheta);
  
  poligono1 = CreateHObject(7);
  poligono2 = CreateHObject(3);
  
  SetHObject(SetHPoint(-6.0,-1.0,1,3), poligono1);
  SetHObject(SetHPoint(-11.0,-11.0,1,3), poligono1);
  SetHObject(SetHPoint(-9.0,-11.0,1,3), poligono1);
  SetHObject(SetHPoint(-8.0,-9.0,1,3), poligono1);
  SetHObject(SetHPoint(-4.0,-9.0,1,3), poligono1);
  SetHObject(SetHPoint(-3.0,-11.0,1,3), poligono1);
  SetHObject(SetHPoint(-1.0,-11.0,1,3), poligono1);
  
  SetHObject(SetHPoint(-6.0,-5.0,1,3), poligono2);
  SetHObject(SetHPoint(-8.0,-8.0,1,3), poligono2);
  SetHObject(SetHPoint(-4.0,-8.0,1,3), poligono2);
  
  janela = CreateWindow(-20.0, 10.0, -20.0, 15.0);
  porta = CreateView(195, 445, 115, 365);
  
  DrawObjectHC(poligono1, janela, monitor, porta, 1);
  DrawObjectHC(poligono2, janela, monitor, porta, 3);
 
  Dump2X(monitor,palheta);
 
  return 0;
}