#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choix;
    float R,L,Vo,J,I,H,G,F,E,D,C,A,B;
    char rep;
    printf("\t Bienvenue dans le programme...\n\n");

    do{
    printf("***Variations des grandeurs dans un circuit***\n");
    printf("1-Variation des grandeur  dans un circuit RLC serie \n");
    printf("2-Variation des grandeur lors de la charge d'un condensateur circuit RC serie \n");
    printf("3-Variation des grandeur lors  de la decharge d'un condensateur circuit RC serie \n");
    printf("4-Variation des grandeur lors de l'etablissement du courant circuit RL serie  \n");
    printf("5-Variation des grandeur  lors de la rupture du courant circuit RL serie \n");

    printf("Faites votre choix :\n");
    scanf("%i",&choix);

    if(choix==1){
        printf("Votre choix est : \n");
        printf("Variation des grandeur  dans un circuit RLC serie \n");
        printf("Entrer la valeur de la Resistance :  ");
        scanf("%f",&R);
        printf("Entrer la valeur de de l'Inductance :  ");
        scanf("%f",&L);
        printf("Entrer la valeur de la Capacite maximal :  ");
        scanf("%f",&C);
        printf("Entrer la valeur  de la tension maximal Vo :  ");
        scanf("%f",&Vo);
        H =C*Vo;
        I =((R*R*C)-4*L)/(L*L*C);
        J = R/(2*L);
        printf("\n\nCapacite : q\(t)\= %f.2\(%fExp\(%f )t + %fExp\(%f)t\)\  \n\n",H/(2*sqrt(I)),((-J)+sqrt(I)),(-J)-sqrt(I),((J)+sqrt(I)),(-J)+sqrt(I));
        printf("Intensite : i\(t)\= %f\(Exp\(%f)t - Exp\(%f)\)t  \n\n",Vo/(2*L*sqrt(I)),(-J)+sqrt(I),(-J)-sqrt(I));
        printf("Tension : u\(t)\= %f\(%fExp\(%f )t + %fExp\(%f)t\)\   \n\n",Vo/(2*sqrt(I)),((-J)+sqrt(I)),(-J)+sqrt(I),((J)+sqrt(I)),(-J)-sqrt(I));

        printf("\n\nVoulez vous faire une autre operation ? \(0)ui\ ou \(N)on\ \n\n");
        scanf("%c",&rep);

    }
     else if(choix==2){
        printf("Votre choix est : \n");
        printf("Variation des grandeur lors de la charge d'un condensateur circuit RC serie \n");
        printf("Entrer la valeur de la Resistance :  ");
        scanf("%f",&R);
        printf("Entrer la valeur de la Capacite maximal :  ");
        scanf("%f",&C);
        printf("Entrer la valeur  de la tension maximal Vo :  ");
        scanf("%f",&Vo);
        G = 1/(R*C);

        printf("\nCapacite :q\(t)\= %f\(1-Exp\(%f t)\)\  \n\n",C*Vo,-G);
        printf("Intensite : i\(t)\= %fExp\(%f t)\  \n\n",Vo/R,-G);
        printf("Tension :u\(t)\=%f\(1-Exp\(%f t)\)\   \n",Vo,-G);

        printf("\n\nVoulez vous faire une autre operation ? \(0)ui\ ou \(N)on\ \n\n");
        scanf("%c",&rep);

     }
     else if(choix==3){
        printf("Votre choix est : \n");
        printf("Variation des grandeur lors  de la decharge d'un condensateur circuit RC serie \n");
        printf("Entrer la valeur de la Resistance :  ");
        scanf("%f",&R);
        printf("Entrer la valeur de la Capacite maximal :  ");
        scanf("%f",&C);
        printf("Entrer la valeur  de la tension maximal Vo :  ");
        scanf("%f",&Vo);
        F = 1/(R*C);

        printf("\nCapacite : q\(t)\=%fExp\(%f t)\  \n\n",C*Vo,-F);
        printf("Intensite : i\(t)\= %fExp\(%f t)\ \n\n",Vo/R,-F);
        printf("Tension : u\(t)\= %fExp\(%f t)\  \n",Vo,-F);

        printf("\n\nVoulez vous faire une autre operation ? \(0)ui\ ou \(N)on\ \n\n");
        scanf("%c",&rep);

     }
     else if(choix==4){
        printf("Votre choix est : \n");
        printf("Variation des grandeur lors de l'etablissement du courant circuit RL serie  \n");
        printf("Entrer la valeur de la Resistance :  ");
        scanf("%f",&R);
        printf("Entrer la valeur de de l'Inductance :  ");
        scanf("%f",&L);
        printf("Entrer la valeur  de la tension maximal Vo :  ");
        scanf("%f",&Vo);
        E = Vo/R;
        D = R/L;
        printf("\nIntensite : i\(t)\=%f\(1-Exp\(%f t)\)\ \n\n",E,-D);
        printf("Tension : u\(t)\=%fExp\(%f t)\ \n",Vo,-D);

        printf("\n\nVoulez vous faire une autre operation ? \(0)ui\ ou \(N)on\ \n\n");
        scanf("%c",&rep);

     }
     else if(choix==5){
        printf("Votre choix est : \n");
        printf("Variation des grandeur  lors de la rupture du courant circuit RL serie \n");
        printf("Entrer la valeur de la Resistance :  ");
        scanf("%f",&R);
        printf("Entrer la valeur de de l'Inductance :  ");
        scanf("%f",&L);
        printf("Entrer la valeur  de la tension maximal Vo :  ");
        scanf("%f",&Vo);
        A = Vo/R;
        B = R/L;

        printf("\nIntensite : i\(t)\= %fExp\(%f t)\  \n\n",A,-B);
        printf("Tension : u\(t)\= %f(1-Exp(%f t) ) \n",Vo,-B);

        printf("\n\nVoulez vous faire une autre operation ? \(0)ui\ ou \(N)on\ \n\n");
        scanf("%c",&rep);

     }
     else{
        printf("Votre choix est incorrect !!! \n ");
     }


     }while(rep=='N' || rep=='Non');

     printf("Fin du programme...\n");

    return 0;
}
