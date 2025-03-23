#include "ft_printf.h"


int main(void)
{
    // Test %c: Character output
    ft_printf("Test char: %c\n", 'A');
    printf("Test char: %c\n", 'A');

    // Test %s: String output
    ft_printf("Test string: %s\n", "Hello, world!");
    printf("Test string: %s\n", "Hello, world!");

    // Test %p: Pointer output
    int var = 42;
    ft_printf("Test pointer: %p\n", &var);
    printf("Test pointer: %p\n", &var);

    // Test %p with NULL (Ensure ft_printf handles this correctly)
    ft_printf("Test null pointer: %p\n", NULL);
    printf("Test null pointer: %p\n", NULL);

    // Test %d and %i: Signed decimal integer
    ft_printf("Test decimal (%%d): %d\n", -123);
    printf("Test decimal (%%d): %d\n", -123);

    ft_printf("Test integer (%%i): %i\n", -456);
    printf("Test integer (%%i): %i\n", -456);

    // Test %u: Unsigned decimal integer
    ft_printf("Test unsigned decimal: %u\n", (unsigned int)123456789);
    printf("Test unsigned decimal: %u\n", (unsigned int)123456789);

    // Test %u with max value
    ft_printf("Test unsigned max: %u\n", (unsigned int)4294967295);
    printf("Test unsigned max: %u\n", (unsigned int)4294967295);

    // Test %x: Hexadecimal lowercase
    ft_printf("Test hexadecimal lowercase: %x\n", 255);
    printf("Test hexadecimal lowercase: %x\n", 255);

    // Test %X: Hexadecimal uppercase
    ft_printf("Test hexadecimal uppercase: %X\n", 255);
    printf("Test hexadecimal uppercase: %X\n", 255);

    // Test %%: Printing the percent symbol
    ft_printf("Test percent symbol: %%\n");
    printf("Test percent symbol: %%\n");

    // **More combinations**
    ft_printf("\n--- Mixed format specifiers ---\n");
    printf("\n--- Mixed format specifiers ---\n");
    
    ft_printf("Char: %c, String: %s, Pointer: %p\n", 'Z', "42 Network", &var);
    printf("Char: %c, String: %s, Pointer: %p\n", 'Z', "42 Network", &var);
    
    ft_printf("Decimal: %d, Integer: %i, Unsigned: %u\n", -789, 1024, (unsigned int)4294967295);
    printf("Decimal: %d, Integer: %i, Unsigned: %u\n", -789, 1024, (unsigned int)4294967295);

    ft_printf("Hex Lower: %x, Hex Upper: %X, Percent: %%\n", (unsigned int)3735928559, (unsigned int)3735928559);
    printf("Hex Lower: %x, Hex Upper: %X, Percent: %%\n", (unsigned int)3735928559, (unsigned int)3735928559);

    char *null_str = NULL;
    ft_printf("Null string: %s\n", null_str);
    printf("Null string: %s\n", null_str);
}