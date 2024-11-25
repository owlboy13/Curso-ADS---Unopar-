#include <stdio.h>

int main(){

int multiplicador = 0, resultado, num;

printf('Tabuada de qual numero: ');
scanf('%d', &num);

// scanf('%d',&num);

// while(multiplicador <= 10)

// {

//      resultado = num * multiplicador;

//      printf('%d', resultado);

//      multiplicador = multiplicador + 1;

// }
do {
    resultado = num * multiplicador;
    printf('%d', resultado);
    multiplicador = multiplicador + 1;
} while(multiplicador <=10);

return 0;

}