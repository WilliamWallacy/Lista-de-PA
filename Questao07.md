Ao considerar o vetor mat[4], o ponteiro *p e a variável x do tipo inteiro:   

* p = mat + 1   
  É válida, pois o ponteiro estará recebendo o endereço da segunda posição do vetor m[1];
  
* p = mat++
  É inválida, pois o valor atribuido ao ponteiro não é uma sintaxe relacionada ao vetor, ela só é valida nos elementos do vetor.
  
* p = ++mat;
  É inválida, pelo menos motivo da expressão anterior
