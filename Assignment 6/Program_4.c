#include <stdio.h>

void vowel1()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

void vowel2(int ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

int vowel3()
{
    char ch = 'Z';

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 0;
    else
        return 1;
}

int vowel4(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 0;
    else
        return 1;
}

int main()
{
    int res;

    vowel1();       

    vowel2('A');   

    res = vowel3(); 

    if(res == 0)
        printf("Vowel\n");
    else
        printf("Consonant\n");

  
    
     res = vowel4('E'); 

    if(res == 0)
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
