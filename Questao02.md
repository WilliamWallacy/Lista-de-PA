Assumindo que i e *p são do tipo int, i = 5 e p = &i:

E aplicando a entrada:
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4),

Ao supor que i ocupa o endereço 4094 na memória:
* p 
  = 4096;
  
* *p+2 
   = 7;
   
* 3**p
  = 15;
  
 * **&p + 4
   = 9.
