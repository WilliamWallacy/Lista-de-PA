/* Questão 10 - Testando as suposições da questão 9 */

#include <stdio.h>

int main(void){
  /* Declaração dos ponteiros e vetores utilizados */
  int i;
  char *pChar, vetChar[4];
  int *pInt, vetInt[4];
  float *pFloat, vetFloat[4];
  double *pDouble, vetDouble[4];
  
  /* Atribuindo os endereços dos vetores nos ponteiros */
  pChar = &vetChar;
  pInt = &vetInt;
  pFloat = &vetFloat;
  pDouble = &vetDouble;
  
  /* Printando os endereços em uma repetição */
  printf("Os enderecos de X em char sao:\n");
  for (i = 0; i <= 3; i++){
     printf("vetChar[%d] tem endereco: %X \n", i, vetChar + i);
  }
  
  printf("\nOs enderecos de X em int sao:\n");
  for (i = 0; i <= 3; i++){
     printf("vetInt[%d] tem endereco: %X \n", i, vetInt + i);
  }
  
  printf("\nOs enderecos de X em float sao:\n");
  for (i = 0; i <= 3; i++){
     printf("vetFloat[%d] tem endereco: %X \n", i, vetFloat + i);
  }
  
  printf("\nOs enderecos de X em double sao:\n");
  for (i = 0; i <= 3; i++){
     printf("vetDouble[%d] tem endereco: %X \n", i, vetDouble + i);
  }
}   
