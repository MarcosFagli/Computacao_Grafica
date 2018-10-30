// Para executar:
// gcc -c cg2d.c
// gcc exemplo_2d.c -o exemplo_2d cg2d.o -lm -lX11
// ./exemplo_2d

//Resposta a pergunta proposta - É notado uma pequena distorção no triangulo que forma o centro da letra A

#include "cg2d.h"

int main(int argc, char ** argv) {
  
  palette * palheta;
  bufferdevice * monitor;
  window * janela;
  viewport * porta;
  hObject * poligono1, * poligono2, * poligono3;
  
  SetWorld(-20, 10, -20, 15); // Define o tamanho do mundo  
  monitor = CreateBuffer(640,480); // Cria um monitor virtual
  //monitor = CreateBuffer(1024,768); // conforme solicitado
  
  palheta = CreatePalette(5);  // Cria um colormap
  SetColor(0,0,0,palheta);
  SetColor(1,0,0,palheta);
  SetColor(0,1,0,palheta);
  SetColor(0,0,1,palheta);
  SetColor(1,1,1,palheta);
  
  poligono1 = CreateHObject(9);
  poligono2 = CreateHObject(6);
  poligono3 = CreateHObject(6);
  
  SetHObject(SetHPoint(-8.0,2.0,1,3), poligono1);
  SetHObject(SetHPoint(-8.0,-9.0,1,3), poligono1);
  SetHObject(SetHPoint(-5.0,-9.0,1,3), poligono1);
  SetHObject(SetHPoint(-4.0,-8.0,1,3), poligono1);
  SetHObject(SetHPoint(-4.0,-5.0,1,3), poligono1);
  SetHObject(SetHPoint(-5.0,-3.0,1,3), poligono1);
  SetHObject(SetHPoint(-4.0,-1.5,1,3), poligono1);
  SetHObject(SetHPoint(-4.0,0.5,1,3), poligono1);
  SetHObject(SetHPoint(-5.0,2.0,1,3), poligono1);
  
  SetHObject(SetHPoint(-7.5,1.0,1,3), poligono2);
  SetHObject(SetHPoint(-5.5,1.0,1,3), poligono2);
  SetHObject(SetHPoint(-4.75,0.0,1,3), poligono2);
  SetHObject(SetHPoint(-4.75,-1.0,1,3), poligono2);
  SetHObject(SetHPoint(-5.5,-2.0,1,3), poligono2);
  SetHObject(SetHPoint(-7.5,-2.0,1,3), poligono2);
  
  SetHObject(SetHPoint(-7.5,-4.0,1,3), poligono3);
  SetHObject(SetHPoint(-5.5,-4.0,1,3), poligono3);
  SetHObject(SetHPoint(-4.75,-5.5,1,3), poligono3);
  SetHObject(SetHPoint(-4.75,-7.0,1,3), poligono3);
  SetHObject(SetHPoint(-5.5,-8.0,1,3), poligono3);
  SetHObject(SetHPoint(-7.5,-8.0,1,3), poligono3);

  janela = CreateWindow(-20.0, 10.0, -20.0, 15.0);
  porta = CreateView(0, 639, 0, 479);
  
  DrawObjectHC(poligono1, janela, monitor, porta, 1);
  DrawObjectHC(poligono2, janela, monitor, porta, 3);
  DrawObjectHC(poligono3, janela, monitor, porta, 3);
 
  Dump2X(monitor,palheta);
 
  return 0;
}