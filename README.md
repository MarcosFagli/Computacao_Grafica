# Computacao_Grafica

Trabalho apresentado a disciplina de Computação gráfica da Universidade Federal de São Carlos - UFSCar, graduando no curso de Engenharia de computação.

Disciplina cursada no oitavo semestre do curso e ministrada pelo Docente Doutor Murillo Homem.

### Compilação do código
Para compilar o .c, basta:
```
gcc -c cg2d.c
```

Para compilar um exemplo, basta:
```
gcc exemplo.c -o exemplo cg2d.o -lm -lX11
```
Substituindo exemplo pelo nome do arquivo que se deseja compilar

E por fim, para executar, basta:
```
./exemplo
```

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

a) (Exemplo 2d) Refaça o que foi solicitado no item (a) mas agora procure ilustrar a letra “B” (com alguma precisão aceitável). Você terá que determinar os pontos no SRU para esta letra considerando este
sistema de referência.

b) (Exemplo 2e) Implemente uma função para nossa biblioteca para preenchimento de polígonos e refaça o item (a) ou (b) exibindo na tela a letra
correspondente, agora preenchida por uma cor que deverá seguir a seguinte regra: suponha que seu RA seja 123456. Então, considerando um sistema aditivo RGB e nossas implementações para mapa de cores, a componente “r” deve valer “2/10”, a componente “g” deve valer “4/10” e a componente “b” a “6/10”.


## Objetivo da Quarta entrega

a) aplique uma rotação de 75º apenas no polígono 1 criando um novo objeto, que chamaremos de polígono 3, e visualize os três objetos em uma viewport de 300x200 entradas centralizada no SRD. As arestas do polígono 3 devem ser pintadas na cor verde. Para a visualização, considere uma janela de visualização dada pelo retângulo entre os pontos (-6,-5) e (0,0). Você deverá trabalhar no sentido que os três objetos possam ser visualizados corretamente e sem recortes na viewport considerada. Como comentário no código, descreva qual efeito colateral resulta da operação de rotação.

b) Considerando apenas os polígonos 1 e 2, implemente uma função paracentralizar a “figura formada pelos dois objetos”. Rotacione agora o polígono 2, da nova figura centralizada, considerando um ângulo de 45º, criando um novo objeto. Para isso, utilize o procedimento discutido em aula de forma a evitar o efeito colateral do exercício anterior (cuidado! Preste atenção no que está sendo pedido). Após a
rotação, escale “a figura” de forma que os três objetos possam ser completamente visualizados na janela de visualização definida pelos pontos (-2,-2) e (2,2). Implemente um programa para a visualização do resultado.

c) Considere novamente os polígonos 1 e 2 conforme a figura acima. Implemente uma função para preencher a intersecção entre os dois objetos dados. O preenchimento deve ser uniforme com uma cor diferente do branco, preto, vermelho, azul ou verde. Visualize o resultado, isto é, desenhe os dois objetos nas cores vermelha e azul e a área de sobreposição devidamente preenchida. Considere a janela de visualização dada pelo retângulo entre os pontos (-10,-10) e (0,0).