#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void asciiart(){
    printf("\n\n"
           "                                                                         _____                                                          _____   \n"
           "___________             ____   ______   _____   _____               _____\\    \\   ________    ________    ________    ________     _____\\    \\  \n"
           "\\          \\        ____\\_  \\__\\     \\  \\    \\ |\\    \\             /    / |    | /        \\  /        \\  /        \\  /        \\   /    / |    | \n"
           " \\    /\\    \\      /     /     \\\\    |  |    |  \\\\    \\           /    /  /___/||\\         \\/         /||\\         \\/         /| /    /  /___/| \n"
           "  |   \\_\\    |    /     /\\      ||   |  |    |   \\\\    \\         |    |__ |___|/| \\            /\\____/ || \\            /\\____/ ||    |__ |___|/ \n"
           "  |      ___/    |     |  |     ||    \\_/   /|    \\|    | ______ |       \\      |  \\______/\\   \\     | ||  \\______/\\   \\     | ||       \\       \n"
           "  |      \\  ____ |     |  |     ||\\         \\|     |    |/      \\|     __/ __    \\ |      | \\   \\____|/  \\ |      | \\   \\____|/ |     __/ __    \n"
           " /     /\\ \\/    \\|     | /     /|| \\         \\__   /            ||\\    \\  /  \\    \\|______|  \\   \\        \\|______|  \\   \\      |\\    \\  /  \\   \n"
           "/_____/ |\\______||\\     \\_____/ | \\ \\_____/\\    \\ /_____/\\_____/|| \\____\\/    |            \\  \\___\\                \\  \\___\\     | \\____\\/    |  \n"
           "|     | | |     || \\_____\\   | /   \\ |    |/___/||      | |    ||| |    |____/|             \\ |   |                 \\ |   |     | |    |____/|  \n"
           "|_____|/ \\|_____| \\ |    |___|/     \\|____|   | ||______|/|____|/ \\|____|   | |              \\|___|                  \\|___|      \\|____|   | |  \n"
           "                   \\|____|                |___|/                        |___|/                                                         |___|/   \n\n");
    printf("                                                                                                                                      by DoK&Null ");






}

void loading() {
    for ( int i = 0; i<2 ; i++) {
        system("cls");
        system("echo la Roulette si sta avviando");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la Roulette si sta avviando.");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la Roulette si sta avviando..");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la Roulette si sta avviando...");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
    }
}
void game() {
    int credito;
    int a;
    int colore;
    int sceltagenerale;
    int sceltacolore;
    int sceltanumero;
    int sceltanumero2;
    int switchbello;
    int sceltapari;

    start:
    printf("\nCosa vuoi scegliere: ");
    printf("\n[1] colore");
    printf("\n[2] numero ");
    printf("\n[3] meta' dei numeri ");
    printf("\n[4] numeri pari\n");
    printf("\nRisposta -> ");



    scanf("%d", &sceltagenerale);
    switch (sceltagenerale) {

        //opzione per prima opzione
        case 1:
        started:
            printf("\nScegli un colore:");
            printf("\n[1] Rosso");
            printf("\n[2] Nero\n");
            printf("\nRisposta -> ");
            scanf("%d" , &sceltacolore);
            if(sceltacolore == 1) {
                printf("\nHai scelto il colore ROSSO");
            } else if (sceltacolore == 2) {
                printf("\nHai scelto il colore NERO");
            } else if (sceltacolore > 2 || sceltacolore < 1){
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto started;
            }

            break;

            // impostazione per seconda opzione
        case 2:
        numero:
            printf("\nScegli un numero [da 1 a 36]\n");
            printf("\nRisposta -> ");
            scanf("%d", &sceltanumero);
            if (sceltanumero > 36 ||sceltanumero < 1) {
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto numero;
            }
            break;

            // impostazione per terza opzione
        case 3:
        colore2:
            printf("\nscegli un numero ");
            printf("\n[1] da 1 a 18");
            printf("\n[2] da 19 a 36\n");
            printf("\nRisposta -> ");

            scanf("%d", &sceltanumero2);
            if (sceltanumero2 == 1){
                printf("\nHai selezionato la prima opzione");
            } else if (sceltanumero2 == 2){
                printf("\nHai selezionato la seconda opzione");
            } else if (sceltanumero2 > 2 || sceltacolore < 1){
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto colore2;
            }
            break;

        case 4:
        numeripariedispari:
            printf("\nscegli un numero: ");
            printf("\n[1] Numeri pari" );
            printf("\n[2] Numeri dispari\n");
            printf("\nRisposta -> ");

            scanf("%d", &sceltapari);
            if (sceltanumero2 == 1){
                printf("\nHai selezionato numeri PARI");
            } else if (sceltanumero2 == 2){
                printf("\nHai selezionato numeri DISPARI");
            } else if (sceltanumero2 > 2 || sceltacolore < 1){
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto numeripariedispari;
            }
            break;

        bellazio:
            printf("\n\n Vuoi scommettere anche su altro? ");
            printf("\n[1] Si");
            printf("\n[2] No\n");
            printf("\nRisposta -> ");
            switch (switchbello) {
                case 1:
                    goto start;
                    break;
                case 2:
                    break;
                default:
                    printf("\n[ Errore! ] Il numero non previsto!");
                    system("pause");
                    goto bellazio;

            }

    }

    // controlla se il numero è maggiore di dieci e se è anche minore di 0 eheh
    if(sceltagenerale > 3 || sceltagenerale <1) {
        printf("\n[ Errore ] Il numero non previsto!\n");
        system("pause");
        goto start;
    }


}

int main() {
    loading();
    game();
}
