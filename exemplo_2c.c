// Para executar:
// gcc -c cg2d.c
// gcc exemplo_2c.c -o exemplo_2c cg2d.o -lm -lX11
// ./exemplo_2c

#include "cg2d.h"

int main(int argc, char ** argv) {
  
  palette * palheta;
  bufferdevice * monitor;
  window * janela;
  viewport * porta0, * porta1, * porta2, * porta3;
  hObject * poligono1, * poligono2, * poligono3, * poligono4, * poligono5, * poligono6, * poligono7, * poligono8;
  
  SetWorld(-20, 10, -20, 15); // Define o tamanho do mundo  
  //monitor = CreateBuffer(640,480); // Cria um monitor virtual
  monitor = CreateBuffer(1024,768); // conforme solicitado
  
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


  poligono3 = TransObj(poligono1, SetMatrixCis(0.1,0.0));
  poligono4 = TransObj(poligono1, SetMatrixCis(0.15,0.0));
  poligono5 = TransObj(poligono1, SetMatrixCis(0.2,0.0));
  poligono6 = TransObj(poligono2, SetMatrixCis(0.1,0.0));
  poligono7 = TransObj(poligono2, SetMatrixCis(0.15,0.0));
  poligono8 = TransObj(poligono2, SetMatrixCis(0.2,0.0));
  
  janela = CreateWindow(-20.0, 10.0, -20.0, 15.0);
  porta0 = CreateView(0, 250, 0, 250);
  porta1 = CreateView(250, 500, 0, 250);
  porta2 = CreateView(0, 250, 250, 500);
  porta3 = CreateView(250, 500, 250, 500);
  
  DrawObjectHC(poligono1, janela, monitor, porta0, 1);
  DrawObjectHC(poligono2, janela, monitor, porta0, 3);
  DrawObjectHC(poligono6, janela, monitor, porta1, 3);
  DrawObjectHC(poligono3, janela, monitor, porta1, 1);
  DrawObjectHC(poligono7, janela, monitor, porta2, 3);
  DrawObjectHC(poligono4, janela, monitor, porta2, 1);
  DrawObjectHC(poligono8, janela, monitor, porta3, 3);
  DrawObjectHC(poligono5, janela, monitor, porta3, 1);
 
  Dump2X(monitor,palheta);
 
  return 0;
}