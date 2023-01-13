#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void SetColor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

// to do: implementare fish , e spesa custom

void asciiart(){
    system("color b");
    printf("                    .__          __    __          \n"
           "_______  ____  __ __|  |   _____/  |__/  |_  ____  \n"
           "\\_  __ \\/  _ \\|  |  \\  | _/ __ \\   __\\   __\\/ __ \\ \n"
           " |  | \\(  <_> )  |  /  |_\\  ___/|  |  |  | \\  ___/ \n"
           " |__|   \\____/|____/|____/\\___  >__|  |__|  \\___  >\n"
           "                              \\/                \\/ \n");
    printf("                                      by DoK&Null \n");

}


void game() {
    int credito;
    int colore = 0;
    int sceltagenerale = 0;
    int sceltacolore = 0;
    int sceltanumero = 0;
    int sceltanumero2 = 0;
    int switchbello = 0;
    int sceltapari = 0;

    start:
    system("cls");
    asciiart();
    printf("\nCosa vuoi scegliere: \n");
    printf("\n[1] colore");
    printf("\n[2] numero ");
    printf("\n[3] numeri pari o dispari");
    printf("\n[4] 1/3 dei numeri\n");
    printf("\n\nRisposta -> ");



    scanf("%d", &sceltagenerale);

    // controlla se il numero è maggiore di dieci e se è anche minore di 0
    if(sceltagenerale > 4 || sceltagenerale <1) {
        printf("\n[ Errore ] Il numero non previsto!\n");
        system("pause");
        goto start;
    }
    switch (sceltagenerale) {

        //opzione per prima opzione
        case 1:
        started:
            system("cls");
            asciiart();
            printf("\nScegli un colore:\n");
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
            system("ping localhost -n 3.0 >nul ");

            break;

            // impostazione per seconda opzione
        case 2:
        numero:
            system("cls");
            asciiart();
            printf("\nScegli un numero [da 1 a 36]\n");
            printf("\nRisposta -> ");
            scanf("%d", &sceltanumero);
            printf("Hai scelto il numero %d" , sceltanumero);
            if (sceltanumero > 36 ||sceltanumero < 1) {
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto numero;
            }
            system("ping localhost -n 3.0 >nul ");
            break;


        case 3:
        numeripariedispari:
            system("cls");
            asciiart();
            printf("\nScegli un numero: \n");
            printf("\n[1] Numeri pari" );
            printf("\n[2] Numeri dispari\n");
            printf("\nRisposta -> ");

            scanf("%d", &sceltapari);
            if (sceltapari == 1){
                printf("\nHai selezionato numeri PARI");
            } else if (sceltapari == 2){
                printf("\nHai selezionato numeri DISPARI");
            } else if (sceltapari > 2 || sceltacolore < 1){
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto numeripariedispari;
            }
            system("ping localhost -n 3.0 >nul ");
            break;

        case 4:
        colore2:
            system("cls");
            asciiart();
            printf("\nscegli un numero: \n");
            printf("\n[1] da 1 a 12");
            printf("\n[2] da 13 a 24");
            printf("\n[3] da 25 a 36\n");
            printf("\nRisposta -> ");

            scanf("%d", &sceltanumero2);
            if (sceltanumero2 == 1){
                printf("\nHai selezionato la prima opzione");
            } else if (sceltanumero2 == 2){
                printf("\nHai selezionato la seconda opzione");
            } else if (sceltanumero2 == 3){
                printf("\nHai selezionato la terza opzione");
            }else if (sceltanumero2 > 3 || sceltacolore < 1){
                printf("\n[ Errore ] Il numero non previsto!");
                system("pause");
                goto colore2;
            }
            system("ping localhost -n 3.0 >nul ");
            break;
    }

    bellazio:
    system("cls");
    asciiart();
    printf("\nVuoi scommettere anche su altro? \n");
    printf("\n[1] Si");
    printf("\n[2] No\n");
    printf("\nRisposta -> ");
    scanf("%d", &switchbello);
    if (switchbello == 1) {
        goto start;
    } else if ( switchbello == 2){

        // generazione random

        time_t t;

        srand((unsigned) time(&t));

        int numerorandom = rand() % 36;

        //print del numero
        printf("\n\nEsito numero : %d" , numerorandom);

        if (numerorandom == 2 || numerorandom == 4 || numerorandom == 6 || numerorandom == 8 || numerorandom == 10 || numerorandom == 12 || numerorandom == 14 || numerorandom == 16 || numerorandom == 18 || numerorandom == 20 || numerorandom == 22 ||numerorandom == 24 || numerorandom == 26 || numerorandom == 28 || numerorandom == 30 || numerorandom == 32 || numerorandom == 34 || numerorandom == 36){
            printf("\nEsito colore: NERO");
        } else {
            printf("\nEsito colore : ROSSO");
        }
        printf("\n\n\nEsito delle tue decisioni a breve");
        system("ping localhost -n 3.0 >nul ");

        system("cls");
        asciiart();
        if (sceltacolore != 0){
            if(sceltacolore == 2 && numerorandom == 2 || numerorandom == 4 || numerorandom == 6 || numerorandom == 8 || numerorandom == 10 || numerorandom == 12 || numerorandom == 14 || numerorandom == 16 || numerorandom == 18 || numerorandom == 20 || numerorandom == 22 ||numerorandom == 24 || numerorandom == 26 || numerorandom == 28 || numerorandom == 30 || numerorandom == 32 || numerorandom == 34 || numerorandom == 36 ){
                SetColor(2);
                printf("\n[ Colore ] Hai indovinato!\n");
            } else{
                SetColor(4);
                printf("\n[ Colore ] Hai perso! \n");
            }
        }

        if (sceltanumero != 0) {
            if ( sceltanumero == numerorandom) {
                SetColor(2);
                printf("\n[ Numero ] Hai invodinato! \n");
            }else  {
                SetColor(4);
                printf("\n[ Numero ] Hai perso! \n");
            }
        }

        if (sceltanumero != 0) {
            if(sceltapari == 1 && numerorandom == 2 || numerorandom == 4 || numerorandom == 6 || numerorandom == 8 || numerorandom == 10 || numerorandom == 12 || numerorandom == 14 || numerorandom == 16 || numerorandom == 18 || numerorandom == 20 || numerorandom == 22 ||numerorandom == 24 || numerorandom == 26 || numerorandom == 28 || numerorandom == 30 || numerorandom == 32 || numerorandom == 34 || numerorandom == 36){
                SetColor(2);
                printf("\n[ Pari - Dispari ] Hai invodinato! \n");
            } else {
                SetColor(4);
                printf("\n[ Pari - Dispari ] Hai perso! \n");
            }
        }

        if (sceltanumero2 != 0) {
            if (numerorandom >= 1 && numerorandom <= 12 ) {
                if (sceltanumero2 == 1) {
                    SetColor(2);
                    printf("\n[ 1/3 numeri ] Hai vinto! \n");
                } else {
                    SetColor(4);
                    printf("\n[ 1/3 numeri ] Hai perso! \n");
                }
            }

            if (numerorandom >= 13 && numerorandom <= 24) {
                if (sceltanumero2 == 2) {
                    SetColor(2);
                    printf("\n[ 1/3 numeri ] Hai vinto! \n");
                } else {
                    SetColor(4);
                    printf("\n[ 1/3 numeri ] Hai perso! \n");
                }
            }

            if (numerorandom >= 25 && numerorandom <= 36){
                if (sceltanumero2 == 3) {
                    SetColor(2);
                    printf("\n[ 1/3 numeri ] Hai vinto! \n");
                } else {
                    SetColor(4);
                    printf("\n[ 1/3 numeri ] Hai perso! \n");
                }
            }
        }
    } else if(switchbello >= 3 || switchbello < 1){
        goto bellazio;
    }


    else if (switchbello <1 ) {
        printf("\n[ Errore! ] Il numero non previsto!\n\n");
        system("pause");
        goto bellazio;
    }


    // per il momento - chiude alla fine
    printf("\n\n\n\n");
    system("pause");


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
        game();
    }
}


int main() {

    system("title Roulette - 1.0");
    loading();
    game();
}
