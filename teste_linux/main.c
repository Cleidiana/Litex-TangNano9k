#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//ajustar de acordo com teste
#define INI_REP         5000*1000
#define QUANT_REP       50000*1000


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
	teste_exec();
	return 0;
}
