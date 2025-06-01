#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

static void teste_exec(void)
{
	uint32_t i;    
    puts("\nInicio teste\n");
    puts("\n3\n");
    for (i = 0; i < 10000000; i++) {
        printf("."); 
    }
    puts("\n2\n");
    for (i = 0; i < 10000000; i++) {
        printf("."); 
    }
    puts("\n1\n");
    for (i = 0; i < 10000000; i++) {
        printf("."); 
    }
    puts("\nComecou\n");
    for (i = 0; i < 100000000; i++) {
        printf("%" PRIu32 " ", i); 
    }
    puts("\nFim teste\n");
}

int main(void)
{
	teste_exec();
	return 0;
}
