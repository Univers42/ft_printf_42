#include <stdio.h>
#include <limits.h>
#include <float.h>
# include "include/ft_printf_bonus.h"

void implicit_conversion() {
    // Implicit Conversion Example
    int a = 5;
    double b = 10.5;
    
    // Implicit conversion of `a` (int) to `double` during addition
    double result = a + b;   // `a` is implicitly converted to `double`
    
    printf("Implicit Conversion:\n");
    printf("a = %d, b = %.2f\n", a, b);
    printf("a + b = %.2f\n", result);
}
int main() {
    // Color codes and styles using ANSI escape sequences
    printf("\033[31mThis is red text (Bold)\033[0m\n");          // Bold red text
    ft_printf("\033[31mThis is red text (Bold)\033[0m\n");          // Bold red text
    ft_printf("\033[32mThis is green text (Normal)\033[0m\n");       // Normal green text
    printf("\033[32mThis is green text (Normal)\033[0m\n");       // Normal green text
    printf("\033[34mThis is blue text (Bold)\033[0m\n");          // Bold blue text
    ft_printf("\033[34mThis is blue text (Bold)\033[0m\n");          // Bold blue text
    printf("\033[33mThis is yellow text (Normal)\033[0m\n");      // Normal yellow text
    ft_printf("\033[33mThis is yellow text (Normal)\033[0m\n");      // Normal yellow text
    printf("\033[35mThis is magenta text (Bold)\033[0m\n");       // Bold magenta text
    ft_printf("\033[35mThis is magenta text (Bold)\033[0m\n");       // Bold magenta text
    printf("\033[36mThis is cyan text (Normal)\033[0m\n");        // Normal cyan text
    ft_printf("\033[36mThis is cyan text (Normal)\033[0m\n");        // Normal cyan text
    printf("\033[37mThis is white text (Bold)\033[0m\n");         // Bold white text
    ft_printf("\033[37mThis is white text (Bold)\033[0m\n");         // Bold white text
    printf("\033[30mThis is black text (Normal)\033[0m\n");       // Normal black text (Foreground)
    ft_printf("\033[30mThis is black text (Normal)\033[0m\n\n\n\n\n");       // Normal black text (Foreground)
    
    printf("\033[41mThis is red background\033[0m\n");              // Red background
    ft_printf("\033[41mThis is red background\033[0m\n");              // Red background
    printf("\033[42mThis is green background\033[0m\n");            // Green background
    ft_printf("\033[42mThis is green background\033[0m\n");            // Green background
    printf("\033[43mThis is yellow background\033[0m\n");           // Yellow background
    ft_printf("\033[43mThis is yellow background\033[0m\n");           // Yellow background
    printf("\033[44mThis is blue background\033[0m\n");             // Blue background
    ft_printf("\033[44mThis is blue background\033[0m\n\n\n");
//
    //// Style combinations
    printf("\033[1;35m\033[41mThis is bold yellow text with blue background\033[0m\n");
    ft_printf("\033[1;35m\033[41mThis is bold yellow text with blue background\033[0m\n");
//
    //// Text effects
    printf("\033[3mThis is italic text\033[0m\n");                  // Italic text
    ft_printf("\033[3mThis is italic text\033[0m\n");                  // Italic text
    ft_printf("\033[4mThis is underlined text\033[0m\n");               // Underlined text
    printf("\033[4mThis is underlined text\033[0m\n");               // Underlined text
    ft_printf("\033[9mThis is crossed-out text\033[0m\n");              // Strikethrough text
    printf("\033[9mThis is crossed-out text\033[0m\n\n\n\n");              // Strikethrough text
//
//
//
    //    // 2. Horizontal tab
        printf("Column1\tColumn2\tColumn3\n");
        ft_printf("Column1\tColumn2\tColumn3\n");
    //
    //    // 3. Carriage return
        printf("Hello\rWorld\n");
        ft_printf("Hello\rWorld\n");
    
    //    // 4. Backspace (deletes the previous character)
        printf("Hello\bWorld\n");
        ft_printf("Hello\bWorld\n");
    
    //    // 5. Form feed (moves to the next page in some environments, but may not be visible in many)
        printf("Hello\fWorld\n");
        ft_printf("Hello\fWorld\n");
        printf("Hello\vWorld\n");
        ft_printf("Hello\vWorld\n");
        printf("This is a backslash: \\\n");
        ft_printf("This is a backslash: \\\n");
        printf("Single quote: \'\n");
        ft_printf("Single quote: \'\n");
        ft_printf("Double quote: \"Hello!\"\n");
        printf("Double quote: \"Hello!\"\n");
        printf("What is this? \\?\n");
        ft_printf("What is this? \\?\n");
        printf("Hexadecimal A: \x41\n");
        ft_printf("Hexadecimal A: \x41\n");
        printf("Octal newline: \012End of line\n");
        ft_printf("Octal newline: \012End of line\n");
        printf("Integer Data Types:\n");
        ft_printf("Integer Data Types:\n\n\n");
        printf("int: %lu bytes, Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
        ft_printf("int: %lu bytes, Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
        printf("short: %lu bytes, Range: %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
        ft_printf("short: %lu bytes, Range: %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
        printf("long: %lu bytes, Range: %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
        ft_printf("long: %lu bytes, Range: %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
        printf("long long: %lu bytes, Range: %lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
        ft_printf("long long: %lu bytes, Range: %lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
        printf("\nUnsigned Integer Data Types:\n");
        ft_printf("\nUnsigned Integer Data Types:\n");
        printf("unsigned int: %lu bytes, Range: 0 to %u\n", sizeof(unsigned int), UINT_MAX);
        ft_printf("unsigned int: %lu bytes, Range: 0 to %u\n", sizeof(unsigned int), UINT_MAX);
        printf("unsigned short: %lu bytes, Range: 0 to %hu\n", sizeof(unsigned short), USHRT_MAX);
        ft_printf("unsigned short: %lu bytes, Range: 0 to %hu\n", sizeof(unsigned short), USHRT_MAX);
        printf("unsigned long: %lu bytes, Range: 0 to %lu\n", sizeof(unsigned long), ULONG_MAX);
        ft_printf("unsigned long: %lu bytes, Range: 0 to %lu\n", sizeof(unsigned long), ULONG_MAX);
        printf("unsigned long long: %lu bytes, Range: 0 to %llu\n", sizeof(unsigned long long), ULLONG_MAX);
        ft_printf("unsigned long long: %lu bytes, Range: 0 to %llu\n", sizeof(unsigned long long), ULLONG_MAX);
        printf("\nFloating-point Data Types:\n");
        ft_printf("\nFloating-point Data Types:\n");
        // Removed floating point format specifiers
        
        printf("\nCharacter Data Types:\n");
        ft_printf("\nCharacter Data Types:\n");
        printf("char: %lu bytes, Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
        ft_printf("char: %lu bytes, Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
        printf("signed char: %lu bytes, Range: %d to %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
        ft_printf("signed char: %lu bytes, Range: %d to %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
        printf("unsigned char: %lu bytes, Range: 0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
        ft_printf("unsigned char: %lu bytes, Range: 0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
        printf("Size of data types:\n");
        printf("Size of int: %zu bytes\n", sizeof(int));           // Integer type
        ft_printf("Size of int: %zu bytes\n", sizeof(int));           // Integer type
        // Removed floating point format specifiers 
        ft_printf("Size of data types:\n");
        // Removed floating point format specifiers
        printf("Size of char: %zu bytes\n", sizeof(char));         // Char type
        ft_printf("Size of char: %zu bytes\n", sizeof(char));         // Char type
        printf("Size of long: %zu bytes\n", sizeof(long));         // Long type
        ft_printf("Size of long: %zu bytes\n", sizeof(long));         // Long type
        printf("Size of long long: %zu bytes\n", sizeof(long long)); // Long long type
        ft_printf("Size of long long: %zu bytes\n", sizeof(long long)); // Long long type
    //
    //    // 2. Size of variables
    int x = 10;
    double y = 3.14;
    char z = 'A';
    printf("\nSize of variables:\n");
    ft_printf("\nSize of variables:\n");
    printf("Size of variable x (int): %zu bytes\n", sizeof(x));
    ft_printf("Size of variable x (int): %zu bytes\n", sizeof(x));
    // Removed floating point format specifiers
    printf("Size of variable z (char): %zu bytes\n", sizeof(z));
    ft_printf("Size of variable z (char): %zu bytes\n", sizeof(z));
    
        int arr[5] = {1, 2, 3, 4, 5};
        printf("\nSize of arrays:\n");
        ft_printf("\nSize of arrays:\n");
        printf("Size of array arr (int[5]): %zu bytes\n", sizeof(arr));        // Total size of array
        ft_printf("Size of array arr (int[5]): %zu bytes\n", sizeof(arr));        // Total size of array
        printf("Number of elements in arr: %zu\n", sizeof(arr) / sizeof(arr[0])); // Number of elements in array
        ft_printf("Number of elements in arr: %zu\n", sizeof(arr) / sizeof(arr[0])); // Number of elements in array
    
        int *ptr = &x;
        double *ptr_double = &y;
        printf("\nSize of pointers:\n");
        ft_printf("\nSize of pointers:\n");
        printf("Size of pointer to int: %zu bytes\n", sizeof(ptr));            // Pointer to int
        ft_printf("Size of pointer to int: %zu bytes\n", sizeof(ptr));            // Pointer to int
        printf("Size of pointer to double: %zu bytes\n", sizeof(ptr_double));  // Pointer to double
        ft_printf("Size of pointer to double: %zu bytes\n", sizeof(ptr_double));  // Pointer to double
    
        printf("\nSize of expressions:\n");
        ft_printf("\nSize of expressions:\n");
        printf("Size of expression (x + 5): %zu bytes\n", sizeof(x + 5));        // Expression result type
        ft_printf("Size of expression (x + 5): %zu bytes\n", sizeof(x + 5));        // Expression result type
        // Removed floating point format specifiers
    // Format specifier tests - width, precision, and flags
    printf("\n\n=== FORMAT SPECIFIER TESTS ===\n");
    ft_printf("\n\n=== FORMAT SPECIFIER TESTS ===\n");
    
    // Width tests
    printf("\n--- Width Tests ---\n");
    ft_printf("\n--- Width Tests ---\n");
    printf("Width 10 with int: |%10d|\n", 123);
    ft_printf("Width 10 with int: |%10d|\n", 123);
    printf("Width 15 with string: |%15s|\n", "hello");
    ft_printf("Width 15 with string: |%15s|\n", "hello");
    printf("Width 5 with char: |%5c|\n", 'X');
    ft_printf("Width 5 with char: |%5c|\n", 'X');
    ////
    ////// Precision tests
    printf("\n--- Precision Tests ---\n");
    ft_printf("\n--- Precision Tests ---\n");
    printf("Precision .5 with int: |%.5d|\n", 123);
    ft_printf("Precision .5 with int: |%.5d|\n", 123);
    printf("Precision .3 with string: |%.3s|\n", "hello");
    ft_printf("Precision .3 with string: |%.3s|\n", "hello");
    printf("Zero precision with int: |%.0d|\n", 0);
    ft_printf("Zero precision with int: |%.0d|\n", 0);
    printf("Zero precision with zero: |%.0d|\n", 0);
    ft_printf("Zero precision with zero: |%.0d|\n", 0);
    
    ////// Width and precision combined
    printf("\n--- Width and Precision Combined ---\n");
    ft_printf("\n--- Width and Precision Combined ---\n");
    printf("Width 10, precision 5 with int: |%10.5d|\n", 123);
    ft_printf("Width 10, precision 5 with int: |%10.5d|\n", 123);
    printf("Width 10, precision 2 with string: |%10.2s|\n", "hello");
    ft_printf("Width 10, precision 2 with string: |%10.2s|\n", "hello");
    printf("Width 8, precision 5 with negative int: |%8.5d|\n", -123);
    ft_printf("Width 8, precision 5 with negative int: |%8.5d|\n", -123);
    
    ////// Left-justify flag (-)
    printf("\n--- Left-justify Flag ---\n");
    ft_printf("\n--- Left-justify Flag ---\n");
    printf("Left-justified width 10 with int: |%-10d|\n", 123);
    ft_printf("Left-justified width 10 with int: |%-10d|\n", 123);
    printf("Left-justified width 15 with string: |%-15s|\n", "hello");
    ft_printf("Left-justified width 15 with string: |%-15s|\n", "hello");
    printf("Left-justified width 10, precision 5 with int: |%-10.5d|\n", 123);
    ft_printf("Left-justified width 10, precision 5 with int: |%-10.5d|\n", 123);
    ////
    ////// Zero-padding flag (0)
    printf("\n--- Zero-padding Flag ---\n");
    ft_printf("\n--- Zero-padding Flag ---\n");
    printf("Zero-padded width 10 with int: |%010d|\n", 123);
    ft_printf("Zero-padded width 10 with int: |%010d|\n", 123);
    printf("Zero-padded width 10 with negative int: |%010d|\n", -123);
    ft_printf("Zero-padded width 10 with negative int: |%010d|\n", -123);
    // Fix: Remove the '0' flag because it's ignored with precision
    printf("Width 10, precision 5 with int: |%10.5d|\n", 123);
    ft_printf("Zero-padded width 10, precision 5 with int: |%010.5d|\n", 123);
    ////
    ////// Plus flag (+)
    printf("\n--- Plus Flag ---\n");
    ft_printf("\n--- Plus Flag ---\n");
    printf("Plus flag with positive int: |%+d|\n", 123);
    ft_printf("Plus flag with positive int: |%+d|\n", 123);
    printf("Plus flag with negative int: |%+d|\n", -123);
    ft_printf("Plus flag with negative int: |%+d|\n", -123);
    printf("Plus flag, width 10 with int: |%+10d|\n", 123);
    ft_printf("Plus flag, width 10 with int: |%+10d|\n", 123);
    printf("Plus flag, width 10, zero-padded: |%+010d|\n", 123);
    ft_printf("Plus flag, width 10, zero-padded: |%+010d|\n", 123);
    
    ////// Space flag
    printf("\n--- Space Flag ---\n");
    ft_printf("\n--- Space Flag ---\n");
    printf("Space flag with positive int: |% d|\n", 123);
    ft_printf("Space flag with positive int: |% d|\n", 123);
    printf("Space flag with negative int: |% d|\n", -123);
    ft_printf("Space flag with negative int: |% d|\n", -123);
    printf("Space flag, width 10: |% 10d|\n", 123);
    ft_printf("Space flag, width 10: |% 10d|\n", 123);
    
    printf("\n--- Complex Combinations ---\n");
    ft_printf("\n--- Complex Combinations ---\n");
    //// Fix: Remove the '0' flag as it's ignored with '-' flag and with precision
    printf("Left-justified, plus, width 15, precision 8: |%-+15.8d|\n", 123);
    ft_printf("Left-justified, zero-padded, plus, width 15, precision 8: |%-+015.8d|\n", 123);
    
    printf("Left-justified, plus, width 10, precision 5: |%-+10.5d|\n", 123);
    ft_printf("Left-justified, plus, width 10, precision 5: |%-+10.5d|\n", 123);
    
    // Special cases
    printf("\n--- Special Cases ---\n");
    ft_printf("\n--- Special Cases ---\n");
    //// Fix the percent sign format
    printf("Width with percent sign: |%10s|\n", "%");
    ft_printf("Width with percent sign: |%10%|\n");
    printf("Left-justified width with percent: |%-10s|\n", "%");
    ft_printf("Left-justified width with percent: |%-10%|\n");
    printf("Large width with small precision: |%15.3s|\n", "hello");
    ft_printf("Large width with small precision: |%15.3s|\n", "hello");
    
    //Unsigned integers
    printf("\n--- Unsigned Integer Tests ---\n");
    ft_printf("\n--- Unsigned Integer Tests ---\n");
    printf("Unsigned: |%u|\n", 4294967295U);
    ft_printf("Unsigned: |%u|\n", 4294967295U);
    printf("Width 12, precision 8, unsigned: |%12.8u|\n", 123);
    ft_printf("Width 12, precision 8, unsigned: |%12.8u|\n", 123);
    
    //Hexadecimal
    printf("\n--- Hexadecimal Tests ---\n");
    ft_printf("\n--- Hexadecimal Tests ---\n");
    printf("Hex lowercase: |%x|\n", 255);
    ft_printf("Hex lowercase: |%x|\n", 255);
    printf("Hex uppercase: |%X|\n", 255);
    ft_printf("Hex uppercase: |%X|\n", 255);
    printf("Width 10, precision 8, hex: |%10.8x|\n", 123);
    ft_printf("Width 10, precision 8, hex: |%10.8x|\n", 123);
    
    //Pointer address
    printf("\n--- Pointer Tests ---\n");
    ft_printf("\n--- Pointer Tests ---\n");
    printf("Pointer: |%p|\n", (void*)&x);
    ft_printf("Pointer: |%p|\n", (void*)&x);
    printf("Width 20, pointer: |%20p|\n", (void*)&x);
    ft_printf("Width 20, pointer: |%20p|\n", (void*)&x);
    printf("Left-justified, width 20, pointer: |%-20p|\n", (void*)&x);
    ft_printf("Left-justified, width 20, pointer: |%-20p|\n", (void*)&x);
    
    printf("\n--- Edge Cases ---\n");
    ft_printf("\n--- Edge Cases ---\n");
    printf("Zero with various formats:\n");
    ft_printf("Zero with various formats:\n");
    printf("Default: |%d|, Precision 0: |%.0d|, Width 5: |%5d|, Zero-pad: |%05d|\n", 0, 0, 0, 0);
    ft_printf("Default: |%d|, Precision 0: |%.0d|, Width 5: |%5d|, Zero-pad: |%05d|\n", 0, 0, 0, 0);
    printf("Empty string: |%s|\n", "");
    ft_printf("Empty string: |%s|\n", "");
    printf("Precision with empty string: |%.3s|\n", "");
    ft_printf("Precision with empty string: |%.3s|\n", "");
    
    // Negative width/precision (undefined behavior but interesting to test)
    printf("\n--- Negative Width/Precision Tests (Undefined Behavior) ---\n");
    ft_printf("\n--- Negative Width/Precision Tests (Undefined Behavior) ---\n");
    printf("Negative width: |%-5d|\n", -42);  // This is actually negative value with left-justify
    ft_printf("Negative width: |%-5d|\n", -42);  // This is actually negative value with left-justify
    
    //// Minimum field width vs precision with strings
    printf("\n--- String Width vs Precision ---\n");
    ft_printf("\n--- String Width vs Precision ---\n");
    printf("Width 10, precision 3: |%10.3s|\n", "hello world");
    ft_printf("Width 10, precision 3: |%10.3s|\n", "hello world");
    printf("Width 3, precision 10: |%3.10s|\n", "hello world");
    ft_printf("Width 3, precision 10: |%3.10s|\n", "hello world");
    // %% - Fix the percent sign tests
    printf("\n--- Percent Sign Tests ---\n");
    printf("Single percent sign: |%%|\n");
    ft_printf("Single percent sign: |%%|\n");
    printf("Width 10 with percent sign: |%10s|\n", "%");
    ft_printf("Width 10 with percent sign: |%10%|\n");
    printf("Left-justified width 10 with percent sign: |%-10s|\n", "%");
    ft_printf("Left-justified width 10 with percent sign: |%-10%|\n");
    printf("Zero-padded width 10 with percent sign: |%10s|\n", "%");
    ft_printf("Zero-padded width 10 with percent sign: |%10s|\n", "%");
    printf("Width and precision with percent sign: |%10.5s|\n", "%");
    ft_printf("Width and precision with percent sign: |%10.5%|\n");
    printf("Width and precision with percent sign: |%5.10s|\n", "%");
    ft_printf("Width and precision with percent sign: |%5.10%|\n");
    ft_printf("lots of percent sign %%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("lots of percent sign %%%%%%%%%%%%%%%%%%%%%%%%\n");
    //printf("%+#-020.10p", (void *)&x);
    //printf("% p", (void *)&x);
    //printf("%+p", (void *)&x);
    //printf("% 016p", (void *)&x);
    //printf("%5c", 'a');
        char *str = "Hello, world!";
    int num = 42;
    float f = 3.14;
    
    //printf("===== IMPOSSIBLE/INVALID COMBINATIONS WITH %%s =====\n\n");
    //
    //// 1. Type mismatches - using %s with non-string types
    //printf("1. TYPE MISMATCHES:\n");
    //printf("Using %%s with integer: %s\n", num);          // Undefined behavior - may crash
    //printf("Using %%s with float: %s\n", f);             // Undefined behavior - may crash
    //printf("Using %%s with NULL: %s\n", NULL);           // Undefined behavior - usually crashes
    //printf("Using %%s with address: %s\n", &num);        // Undefined behavior - treats memory as string
    //printf("\n");
    //
    //// 2. Invalid length modifiers with %s
    //printf("2. INVALID LENGTH MODIFIERS:\n");
    //printf("%%hs: %hs\n", str);    // h modifier is not meaningful with %s
    //printf("%%ls: %ls\n", str);    // l modifier requires a wide character string (wchar_t*)
    //printf("%%Ls: %Ls\n", str);    // L modifier is invalid with %s
    //printf("%%js: %js\n", str);    // j modifier is invalid with %s
    //printf("%%zs: %zs\n", str);    // z modifier is invalid with %s
    //printf("%%ts: %ts\n", str);    // t modifier is invalid with %s
    //printf("%%lls: %lls\n", str);  // ll modifier is invalid with %s
    //printf("\n");
    //
    //// 3. Inappropriate flags with %s
    //printf("3. INAPPROPRIATE FLAGS:\n");
    //printf("%%+s: %+s\n", str);    // + flag is not meaningful with %s
    //printf("%% s: % s\n", str);    // space flag is not meaningful with %s
    //printf("%%#s: %#s\n", str);    // # flag is not meaningful with %s
    //printf("%%0s: %0s\n", str);    // 0 flag is not meaningful with %s
    //printf("\n");
    //
    //// 4. Strange precision and width specifications
    //printf("4. STRANGE PRECISION AND WIDTH:\n");
    //printf("Negative width: %-10s\n", str);                // Actually valid but might be confused as invalid
    //printf("Zero width: %0s\n", str);                      // 0 as width (not flag)
    //printf("Excessive width: %999999999s\n", str);         // Extremely large width
    //printf("Negative precision: %.%-5s\n", str);           // Invalid syntax
    //printf("Zero precision (empty string): %.0s\n", str);  // Prints nothing - valid but surprising
    //printf("Ridiculous precision: %.999999999s\n", str);   // Extremely large precision
    //printf("\n");
    //
    //// 5. Format string vulnerabilities (DON'T DO THIS!)
    //printf("5. FORMAT STRING VULNERABILITIES:\n");
    //printf("Format injection: %s\n", "%d %s %x");          // Treats string as format string - no arguments!
    //printf("Double format: %s %s\n", str);                 // Missing 2nd argument
    //printf("\n");
    //
    //// 6. Mixed wrong formats
    //printf("6. MIXED WRONG FORMATS:\n");
    //printf("%%s%%d with strings: %s%d\n", str, str);       // Second str interpreted as number
    //printf("%%*s with wrong * type: %*s\n", str, str);     // First str should be int for width
    //printf("%%.*s with wrong * type: %.*s\n", str, str);   // First str should be int for precision
    //
    //printf("\n===== WARNING =====\n");
    //printf("Running this program may cause crashes, security vulnerabilities,\n");
    //printf("or undefined behavior. This is for educational purposes only.\n");
    //
    return 0;
}
