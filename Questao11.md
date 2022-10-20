Os comandos válidos são:

* aloha[2] = value;   
O valor da variável value é recebido na terceira posição do vetor aloha;   

* scanf("%f", &aloha);   
A primeira posição do vetor aloha tem seu valor gravado pelo que foi lido;   

* printf("%f", aloha);   
O comando é valido, porém o valor do vetor não será exibido, para isso, é necessário um laço de repetição para imprimir o vetor comutando os seus índices;

* coisas[4][4] = aloha[3];   
O valor de aloha[3] será guardado na linha e coluna indicada na matriz 4 por 4 coisas;

* pf = aloha;   
O ponteiro irá apontar para o endereço do vetor aloha.   
   
   

Os comandos inválidos são:   
* coisas[5] = aloha;   
É necessário indicar os índices de linha e coluna;

* pf = value;   
É preciso informar o endereço da variável utilizando o &.
