#include <16F877a.h>
#device ADC = 10
#use delay(crystal = 20000000)
#FUSES NOWDT, NOBROWNOUT, NOLVP

//Directiva para utilizar puerto USART
#use rs232(BAUD=9600, XMIT = PIN_C6, RCV=PIN_C7)

int8 sumar(int8 a, int8 b)
{
   int8 resultado = a + b;
   return resultado; 
}
int8 restar(int a, int b;)
  { int8 resures = a - b;
   
   return resultado;
   }
 int8 multiplicar(int a, int b)
  {
  int8 resumulti = a * b;
  return resumulti;
  }
 int8 dividir(int a, int b)
   {
   int8 resudiv = a/b;
   return resudiv; 
}

void main()
{
   setup_uart(9600); //Configurar baudios
   
   printf("Hola mundo\n\r");
   
   int8 num1 = 2;
   int8 num2 = 3;
   int8 res;
   int8 resres;
   int8 resmulti;
   int8 resdiv;
   
   
   res = sumar(num1,num2);
   resres = restar(num1, num2);
   resmulti = multiplicar(num1, num2);
   resdiv= dividir(num1, num2);
   
   printf("%u + %u: %u\n\r",num1,num2,res);
   while (1)
    {
    
    }
}
