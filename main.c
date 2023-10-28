#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <windows.h>
int main(int argc, char* argv[])
{
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);

    puts("Rozmiary (w bajtach) typów całkowitych, C17, x64)");
    printf("char\t\t%d\n", sizeof(char));
    printf("short\t\t%d\n", sizeof(short));
    printf("int\t\t%d\n", sizeof(int));
    printf("unsigned int\t%d\n", sizeof(unsigned int));
    printf("long\t\t%d\n", sizeof(long));
    printf("long long\t%llu\n", sizeof(long long));
    printf("unsigned long long\t%llu\n\n", sizeof(unsigned long long));

    puts("\nZakresy wybranych typów całkowitych, C17, x64)");
    puts("\nuwaga na specyfikatory formatu!\n");
    printf("short int\t%hd\t%hd\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int\t%hu\t%hu\n", 0, USHRT_MAX);
    printf("int\t\t%d\t%d\n", INT_MIN, INT_MAX);
    printf("unsigned int\t%d\t%u\n", 0, UINT_MAX);
    printf("long int\t%ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int\t%lu\t%lu\n", 0, ULONG_MAX);
    printf("long long int\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int\t%llu\t%llu\n\n", 0, ULLONG_MAX);

    system("pause");
    return 0;
}
