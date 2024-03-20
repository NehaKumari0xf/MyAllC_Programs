/*
unary opearot is perform on single operator 
like :- sizeof(),not gate, increment and decrement operator.
*/

#include<stdio.h>
int main()
{
    int _post_increment_integer = 58, _pre_increment_integer = 5;
    char _post_decrement_character = 'd', _pre_decrement_character = 'n';

    printf("\n_post_incremen_integer is %d,\t _pre_increment_integer is %d",_post_increment_integer++,++_pre_increment_integer);    
    printf("\n\n_post_incremen_integer is %c, \t_pre_increment_integer is %c",_post_decrement_character--,--_pre_decrement_character);    


}