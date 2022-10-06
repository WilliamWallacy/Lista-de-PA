Os resultados dos prints em um loop executado 5 vezes foram os seguintes:

* 1º printf:   
  contador   
  valor   
  valor   
  endereco   
  endereco;
  
* 2º printf:   
  i = 0   
  i = 1   
  i = 2   
  i = 3   
  i = 4;
  
* 3º printf:   
  vet[0] = 1.1   
  vet[1] = 2.2   
  vet[2] = 3.3   
  vet[3] = 4.4   
  vet[4] = 5.5;
  
* 4º printf:   
  *(f + 0) = 1.1    
  *(f + 1) = 2.2    
  *(f + 2) = 3.3    
  *(f + 3) = 4.4   
  *(f + 4) = 5.5;
  
* 5º printf:   
  &vet[0] = Endereço de v[0]   
  &vet[1] = Endereço de v[1]   
  &vet[2] = Endereço de v[2]   
  &vet[3] = Endereço de v[3]   
  &vet[4] = Endereço de v[4]
  
*  Os resultados obtidos foram os previstos menos o endereço dos vetores, pois ao compilar, seus valores mudavam.   
*  Os valores dos endereços que apareciam ao compilar foram:   
  914BE630   
  914BE634   
  914BE638   
  914BE63C   
  914BE640.
