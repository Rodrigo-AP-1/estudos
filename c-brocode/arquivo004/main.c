#include <stdio.h>
#include <stdbool.h>

int main () {
    int level = 47;
    int kills = 17;
    int deaths = 4;
    float kd = (float)kills/deaths;
    double pi = 3.141592653589793238;
    bool isGood = true;

    char exclamacao = '!';
    char nick[] = "rodrigoha";

    printf("Meu nick no Call of Duty eh: %s, to no level %d, com %d kills e %d mortes, que faz eu ter um kd de: %.2f, e o valor de pi eh: %.10lf%c\n", nick, level, kills, deaths, kd, pi, exclamacao);

    if (isGood) {
        printf("Voce eh bom, parabens");
    }
        else {
            printf("Voce nao eh bom.");
        }
    return 0;

}