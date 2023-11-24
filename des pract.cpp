#include <stdio.h>
#include <stdint.h>
void des_encrypt(uint64_t plainText, uint64_t key, uint64_t *cipherText);
int main() {
    uint64_t plainText, key, cipherText;
    printf("Enter the 64-bit plaintext: ");
    scanf("%llx", &plainText);
    printf("Enter the 64-bit encryption key: ");
    scanf("%llx", &key);
    des_encrypt(plainText, key, &cipherText);
    printf("Key: %llx\n", key);
    printf("Ciphertext: %llx\n", cipherText);
    return 0;
}


    
 
