#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    int program_access();
    const char licence_key[] = "69X-LE3-010";
    char licence_user_saisie[50];
    while(1) {
    system("color 9");
    printf("Licence key test confirmation\n");
    printf("Enter licence key (licence = 69X-LE3-010):\n");
    printf("--------------------------------------\n");
    printf(">> ");

    scanf("%49s", licence_user_saisie);

    if(strcmp(licence_user_saisie, licence_key) == 0) {
        system("color a");
        printf("Correct!\n");
        printf("DEBUG: good licence_key\n");
        program_access();
    } else {
        system("color 4");
        printf("Incorrect!!\n");
        printf("DEBUG: incorrect licence_key\n");
        system("cls");
    }
}
    return 0;
}

int program_access()
{
    system("cls");
    system("color 1");
    printf("correct licence key nice! ->>> enter int program_access !!!\n");
    system("color 2");
    system("cls");
}
