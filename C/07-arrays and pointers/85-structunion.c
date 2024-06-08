#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stag
{
    char c;
    int i;
    float f;
};
union utag
{
    char c;
    int i;
    float f;
};

int main()
{
    union utag uvar;
    struct stag svar;
    printf("=========================================================================\n");
    printf("Size of svar %lu\n", sizeof(svar));
    printf("Address of svar ---------------> %p \n", &svar);
    printf("Address of member of svar -----> %p\t%p\t%p\n", &svar.c, &svar.i, &svar.f);
    printf("Size of uvar %lu\n", sizeof(uvar));
    printf("Address of uvar ---------------> %p \n", &uvar);
    printf("Address of member of uvar -----> %p\t%p\t%p\n", &uvar.c, &uvar.i, &uvar.f);
    printf("=========================================================================");
    return 0;
}