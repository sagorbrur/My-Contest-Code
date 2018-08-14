//comparing two word for anagram

#include <stdio.h>
#include <ctype.h>

#define CH_LEN 15
#define N 26

int main(void) {
    char track_letters[N] = {0};
    char first_word[CH_LEN];
    char sec_word[CH_LEN];
        printf("Enter first word: ");
    int i;
    for(i = 0; i < CH_LEN; i++) {
        first_word[i] = getchar();
        if(first_word[i] == '\n')
            break;
        if(!isalpha(first_word[i]))
            --i;

        track_letters[(tolower(first_word[i]) - 'a')]++;


    }
    printf("Enter second word: ");
    for(i = 0; i < CH_LEN; i++) {
        sec_word[i] = getchar();
        if(sec_word[i] == '\n')
            break;
        if(!isalpha(sec_word[i]))
            --i;
        track_letters[(tolower(sec_word[i]) - 'a')]--;

    }
    for(i = 0; i < CH_LEN; i++) {
        if(track_letters[i] != 0) {
            printf("The words are not anagrams");
            return 0;
        }
    }
    printf("The words are anagrams");
    return 0;
}
