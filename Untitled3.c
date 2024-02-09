#include <stdio.h>

int main()
{
    // Declare an array of integers to store the ASCII codes
    int ascii_codes[] = {97, 108, 105, 114, 101, 122, 97, 32, 97, 104, 109, 97, 100, 105, 122, 97, 100, 101};

    // Declare a variable to store the length of the array
    int length = sizeof(ascii_codes) / sizeof(int);

    // Loop through the array and print each character corresponding to the ASCII code
    for (int i = 0; i < length; i++)
    {
        printf("%c", ascii_codes[i]);
    }

    // Print a new line at the end
    printf("\n");

    return 0;
}
