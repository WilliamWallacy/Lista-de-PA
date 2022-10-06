Sendo i e j são variáveis inteiras, p e q ponteiros para inteiros e as expressões:   
p = i;   
q = &j;   
p = &*&i;   
i = (*&)j;   
i = *&j;   
i = *&*&j;   
q = *p;   
i = (*p)++ + *q;

É possível verificar que as expressões ilegais são:   
* p = i;   
* i = (*&)j;   
* q = *p.
