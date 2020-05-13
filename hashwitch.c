#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

    char code[300];
    int total, op, z;

    printf("\n ##################################\n ### ###\n ### SandStorm HASH Witch ###\n ### Made by
    Terrem0th ###\n ### Lucas M. Dutra ###\n ### dutr4@outlook.com ###\n ### versao 1.0.0 - 2014 ###\n
    ### ###\n ##################################\n\n");
    
    printf(" Digite o codigo para descobrir qual HASH ele pertence: \n\n");
    printf("CODE: ");
    gets(code);
    total = strlen(code);

    switch(total) {

    case 32:
        printf("\n HASH corresponde as possiveis:\n\n 1- MD5 (128 bits)\n 2- MD4\n 3- MD2\n 4- SHARK-32 (para ser
        essa, necessita haver somente letras maiusculas e numeros)\n 5- ZUNE-32\n\n");
        break;

    case 13:
        printf("\n HASH corresponde a DES Crypt\n\n");
        break;

    case 40:
        printf("\n HASH corresponde as possiveis:\n\n 1- SHA-1\n 2- RIPE MD\n\n");
        break;

    case 64:
        printf("\n HASH corresponde a SHA-256\n\n");
        break;

    case 127:
        printf("\n HASH corresponde a SHA-512\n\n");
        break;

    case 128:
        printf("\n HASH corresponde a SHA-512\n\n");
        break;

    case 10:
        printf("\n HASH corresponde as possiveis:\n\n 1- CRC32\n 2- HUST-10 D (para ser essa, necessita somente
        haver numeros)\n\n");
        break;

    case 25:
        printf("\n HASH corresponde as possiveis:\n\n 1- HIX25\n 2- AMID-97C\n 3- GELOC-8 (para ser essa, todas as
        letras necessitam ser maiusculas)\n\n");
        break;

    case 26:
        printf("\n HASH corresponde a GUGON-26\n\n");
        break;

    case 30:
        printf("\n HASH corresponde as possiveis:\n\n 1- ESTYA-6\n 2-YARRO-30S\n\n");
        break;

    case 24:
        printf("\n HASH corresponde a MIHO-78\n\n");
        break;

    case 18:
        printf("\n HASH corresponde a LEPAD-18\n\n");
        break;

    case 15:
        printf("\n HASH corresponde a TRAN 15X\n\n");
        break;
        
    default:
        printf(" Nenhum HASH especifico foi encontrado. Tente novamente\n\n");
        main();
        break;
    }


    system("pause");
    return 0;

}
