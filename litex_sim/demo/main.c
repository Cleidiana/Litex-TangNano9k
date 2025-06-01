#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>

//ajustar de acordo com teste
#define INI_REP         5000
#define QUANT_REP       50000

static void teste_exec(void)
{
   uint32_t i;   
   puts("\nInicio teste\n");
   puts("\n3\n");
   for (i = 0; i < INI_REP; i++) {
       printf(".");
   }
   puts("\n2\n");
   for (i = 0; i < INI_REP; i++) {
       printf(".");
   }
   puts("\n1\n");
   for (i = 0; i < INI_REP; i++) {
       printf(".");
   }
   puts("\nComecou\n");
   for (i = 0; i < QUANT_REP; i++) {
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
