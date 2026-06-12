#include <stdio.h>
#include <string.h>

int main () {

    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency[2] = "R$";
    float total = 0.0f;

    printf("What kind of item are u gonna buy, sir?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    printf("Whats is the price for each?\n");
    scanf("%f", &price);
    printf("How many would you like?:\n");
    scanf("%d", &quantity);


    total = (float)price*quantity;
    printf(" Valor total a pagar: %.2f%s", total, currency);

    return 0;
}