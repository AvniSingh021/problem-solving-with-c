#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("vowel");
        break;
    case 'I':
        printf("vowel");
        break;
    case 'O':
        printf("vowel");
        break;
    case 'U':
        printf("vowel");
        break;
        default :
        printf("consonant");
    }
    return 0;
}
