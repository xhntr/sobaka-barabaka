#include <stdio.h>
#define ANZAHL_PERIODEN 5
#define ANZAHL_TAGE 13

//0
int main() {
    double kurswerte[ANZAHL_TAGE] = { 5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0 };
    double gleitender_mittelwert[ANZAHL_TAGE] = { -1.0 };
    
    //0.5
    for (int aktueller_tag = 0; aktueller_tag < ANZAHL_TAGE; aktueller_tag++) {
        printf("===> aktueller_tag = %d\n", aktueller_tag);
        
        //1
        if (aktueller_tag < ANZAHL_PERIODEN  -1 ) {
            gleitender_mittelwert[aktueller_tag] = -1.0;
            printf("gleitenden Mittelwert wurde mit -1 initialisiert\n");
            printf("====================================\n");
            continue;
        }

        //1.5
        double summe_kurswerte = 0;
        for (int vorherige_tage = 0; vorherige_tage < ANZAHL_PERIODEN; vorherige_tage++) {
            summe_kurswerte += kurswerte[aktueller_tag - vorherige_tage];
            printf("bisher summe_kurswerte = %3.2f\taktueller_tag = %d\tvorherige_tage = %d\n",
                summe_kurswerte, aktueller_tag, vorherige_tage);
        }

        //2
        gleitender_mittelwert[aktueller_tag] = summe_kurswerte / ANZAHL_PERIODEN;
        printf("gleitender_mittelwert[%d] = %3.2f\n", aktueller_tag, gleitender_mittelwert[aktueller_tag]);
        printf("====================================\n");
    }

    //3

    printf("\n--- Zusammenfassung ---\n");
    for (int i = 0; i < ANZAHL_TAGE; i++) {
        printf("kurswert[%d] = %3.2f\tgleitender Mittelwert[%d] = %3.2f\n",
            i, kurswerte[i], i, gleitender_mittelwert[i]);
    }

    return 0;
}
