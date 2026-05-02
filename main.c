#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vigenereDecrypt(char *ciphertext, char *key) {
    int i, j;
    int msgLen = strlen(ciphertext);
    int keyLen = strlen(key);
    char ch;
    for (i = 0, j = 0; i < msgLen; i++) {
        ch = ciphertext[i];
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            int k = tolower(key[j % keyLen]) - 'a';
            int p = (ch - offset - k + 26) % 26;
            ciphertext[i] = p + offset;

            j++;
        }
    }
}

int main() {
    char message[] = "rey txs qb xztwxgnvotB rciS"; //Pesan Enkripsi
    char *key = "tempkey";                


    printf("Encypted Text : %s\n", ciphertext);
    vigenereDecrypt(ciphertext, key);
    printf("Deciphered : %s\n", ciphertext);

    return 0;
}
