#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>


static void teste_exec(void)
{
   uint32_t i;   
   puts("\nInicio teste\n");
   puts("\n3\n");
   for (i = 0; i < 1000; i++) {
       printf(".");
   }
   puts("\n2\n");
   for (i = 0; i < 1000; i++) {
       printf(".");
   }
   puts("\n1\n");
   for (i = 0; i < 1000; i++) {
       printf(".");
   }
   puts("\nComecou\n");
   for (i = 0; i < 10000; i++) {
       printf("%" PRIu32 " ", i);
   }
   puts("\nFim teste\n");
}


int main(void)
{


   uart_init();


   teste_exec();


   return 0;
}
