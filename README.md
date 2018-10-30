# Computacao_Grafica

Trabalho apresentado a disciplina de Computação gráfica da Universidade Federal de São Carlos - UFSCar, graduando no curso de Engenharia de computação.

Disciplina cursada no oitavo semestre do curso e ministrada pelo Docente Doutor Murillo Homem.

### Compilação do código
Para compilar o .c, basta:
'''
gcc -c cg2d.c
'''

Para compilar um exemplo, basta:
'''
gcc exemplo.c -o exemplo cg2d.o -lm -lX11
'''
Substituindo exemplo pelo nome do arquivo que se deseja compilar

E por fim, para executar, basta:
'''
./exemplo
'''

## Objetivo da Primeira Entrega

a) Criar uma estrutura "hobject" para trabalhar com pontos homogêneos;

b) Modificar as funções SetPoint(), CreateObject() e SetObject() para incorporar o conceito de coordenadas homogêneas;

c) Modificar as funções sru2srn() e srn2srd() para trabalhar com pontos homogêneos;

d) Modificar a função srn2srd() para trabalhar com a "estrutura viewport";

e) Modificar as funções DrawLine() e DrawObject() para trabalhar com pontos homogêneos e com as dimensões da viewport;

f) Refazer a atividade exemplo (disponibilzada no Moodle) considerando as modificações dos itens anteriores;

g) Implementar uma função para o cisalhamento de um objeto baseada no conceito de transformação linear.

## Objetivo da Segunda Entrega

a) Visualize o objeto ilustrado na figura considerando que as dimensões horizontais e verticais da janela de visualização sejam definidas pelos extremos do SRU e assuma que todo o Página 1
dispositivo de saída será utilizado para a visualização do objeto. Observe que as coordenadas dos pontos do objeto original podem ser extraídas diretamente da figura. Você pode notar alguma
distorção no objeto visualizado? Explique utilizando comentários no código exemplo.

b) Posteriormente, determine uma janela “mais adequada” para a visualização no SRD considerando uma única viewport, agora quadrada e centralizada no SRD, com 250 x 250 entradas.
Como fica visualmente o objeto na tela? Para fins de visualização, implemente uma abordagem para desenhar as bordas de uma viewport no SRD.

c) Agora, o objetivo do exercício é criar versões itálicas dessa fonte (letra). Estas versões podem ser criadas com a função implementada para a operação de cisalhamento. O resultado de
cada operação deve ser mapeado em uma viewport diferente no SRD. Dessa forma, crie três versões itálicas diferentes para a letra “A”, fazendo chamadas as funções da biblioteca implementada. Crie 4
viewports sendo que a primeira deve ser utilizada para visualizar o objeto original. As outras três, para as versões itálicas, com diferentes inclinações, sendo que você também deve assumir diferentes números de entradas na exibição, tomar cuidado para não haver sobreposição entre as portas de visualização e que cada versão da letra “A” deve ser exibida com uma cor diferente das outras.


## Objetivo da Terceira entrega

a) Refaça o que foi solicitado no item (a) mas agora procure ilustrar a letra “B” (com alguma precisão aceitável). Você terá que determinar os pontos no SRU para esta letra considerando este
sistema de referência.

b) Implemente uma função para nossa biblioteca para preenchimento de polígonos e refaça o item (a) ou (b) exibindo na tela a letra
correspondente, agora preenchida por uma cor que deverá seguir a seguinte regra: suponha que seu RA seja 123456. Então, considerando um sistema aditivo RGB e nossas implementações para mapa de cores, a componente “r” deve valer “2/10”, a componente “g” deve valer “4/10” e a componente “b” a “6/10”.