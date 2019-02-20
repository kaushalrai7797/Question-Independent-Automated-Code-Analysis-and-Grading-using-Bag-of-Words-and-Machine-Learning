#include <stdio.h>
#include <math.h>

int main(){
    int T;
    double S, SG, FG, D, t, car_speed;
    scanf("%d", &T);

    while (T--){
        scanf("%lf %lf %lf %lf %lf", &S, &SG, &FG, &D, &t);
        car_speed = S + ((D * 50.0 * 18.0) / (t * 5.0));

        SG = SG - car_speed;
        FG = FG - car_speed;
        
        SG = (SG < 0) ? SG * -1 : SG;
        FG = (FG < 0) ? FG * -1 : FG;

        if (SG < FG)
            printf("SEBI\n");
        else if(SG > FG)
            printf("FATHER\n");
        else
            printf("DRAW\n");
    }
    return 0;
}
