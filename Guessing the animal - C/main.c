#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a1[3], a2[3], a3[3], a4[3], a5[3], a6[3], a7[3], a8[3], a9[3], a10[3], a11[3], a12[3], a13[3], a14[3], a15[3], a16[3], a17[3], a18[3];

    printf("Below I will give you a list of some animals. Choose one and I will try to find out which one you chose. \n");
    printf("----------------- \n");
    printf("|  - Lion       | \n");
    printf("|  - Horse      | \n");
    printf("|  - Human      | \n");
    printf("|  - Monkey     | \n");
    printf("|  - Bat        | \n");
    printf("|  - Whale      | \n");
    printf("|  - Ostrich    | \n");
    printf("|  - Penguins   | \n");
    printf("|  - Duck       | \n");
    printf("|  - Eagle      | \n");
    printf("|  - Turtle     | \n");
    printf("|  - Crocodile  | \n");
    printf("|  - Snake      | \n");
    printf("----------------- \n");

    printf("\n");
    printf("Answer the following questions yes or no, all in lowercase: \n");

    printf("Is it a mammal? \n");
    gets(a1);
    printf("\n");

    if(strcmp(a1, "yes") == 0){
            printf("Is it a quadruped? \n");
            gets(a2);
            printf("\n");
            if(strcmp(a2, "yes") == 0){
                    printf("Is it a carnivore? \n");
                    gets(a6);
                    printf("\n");
                    if(strcmp(a6, "yes") == 0){
                            printf("So the chosen animal was the lion. \n");
                            printf("\n");
                            printf("End of program. \n");
                    }else{
                        if(strcmp(a6, "no")){
                                printf("Is it a herbivore? \n");
                                gets(a7);
                                printf("\n");
                                if(strcmp(a7, "yes") == 0);
                                printf("So the animal is a horse. \n");
                                printf("\n");
                                printf("End of program. \n");
                        }else{
                            if(strcmp(a7, "no") == 0);
                            printf("You're kidding me that I know. \n");
                            printf("\n");
                            printf("End of program. \n");
                        }
                    }
            }else{
                if(strcmp(a2, "no") == 0){
                        printf("Is it a biped? \n");
                        gets(a3);
                        printf("\n");
                        if(strcmp(a3, "yes") == 0){
                                printf("Is it an omnivore? \n");
                                gets(a8);
                                printf("\n");
                                if(strcmp(a8, "yes") == 0){
                                        printf("So the animal is a human. \n");
                                        printf("\n");
                                        printf("End of program. \n");
                                }else{
                                    if(strcmp(a8, "no") == 0){
                                        printf("Is it a fruitful one? \n");
                                        gets(a9);
                                        printf("\n");
                                        if(strcmp(a9, "yes") == 0){
                                                printf("So the animal is a monkey. \n");
                                                printf("\n");
                                                printf("End of program. \n");
                                        }else{
                                            if(strcmp(a9, "no") == 0){
                                                printf("You're kidding me that I know. \n");
                                                printf("\n");
                                                printf("End of program. \n");
                                            }
                                        }
                                    }
                                }
                        }else{
                            if(strcmp(a3, "no") == 0){
                                    printf("Is it a flying animal? \n");
                                    gets(a4);
                                    printf("\n");
                                    if(strcmp(a4, "yes") == 0){
                                            printf("So the animal is a bat. \n");
                                            printf("\n");
                                            printf("End of program. \n");
                                    }else{
                                        if(strcmp(a4, "no") == 0){
                                                printf("Is it an aquatic animal? \n");
                                                gets(a5);
                                                printf("\n");
                                                if(strcmp(a5, "yes") == 0){
                                                        printf("So the animal is a whale. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(a5, "no") == 0){
                                                        printf("You're kidding me that I know. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                    }
                                                }
                                        }
                                    }
                            }
                        }
                }
            }
    }else{
        if(strcmp(a1, "no") == 0){
                printf("Is it a bird? \n");
                gets(a18);
                printf("\n");
                if(strcmp(a18, "yes") == 0){
                        printf("Is it a bird that doesn't fly? \n");
                        gets(a10);
                        printf("\n");
                        if(strcmp(a10, "yes") == 0){
                                printf("Is it a tropical bird? \n");
                                gets(a13);
                                printf("\n");
                                if(strcmp(a13, "yes") == 0){
                                        printf("So the animal is an ostrich. \n");
                                        printf("\n");
                                        printf("End of program. \n");
                                }else{
                                    if(strcmp(a13, "no") == 0){
                                             printf("Is it a polar bird? \n");
                                             gets(a14);
                                             printf("\n");
                                             if(strcmp(a14, "yes") == 0){
                                                    printf("So the animal is a penguin. \n");
                                                    printf("\n");
                                                    printf("End of program. \n");
                                             }else{
                                                 if(strcmp(a14, "no") == 0){
                                                         printf("You're kidding me that I know. \n");
                                                         printf("\n");
                                                         printf("End of program. \n");
                                                 }
                                             }
                                    }
                                }
                        }else{
                            if(strcmp(a10, "no") == 0){
                                    printf("Is it a swimming animal? \n");
                                    gets(a11);
                                    printf("\n");
                                    if(strcmp(a11, "yes") == 0){
                                            printf("So the animal is a duck. \n");
                                            printf("\n");
                                            printf("End of program. \n");
                                    }else{
                                        if(strcmp(a11, "no") == 0){
                                                printf("Is it a bird of prey? \n");
                                                gets(a12);
                                                printf("\n");
                                                if(strcmp(a12, "yes") == 0){
                                                        printf("So the animal is an eagle. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(a12, "no") == 0){
                                                            printf("You're kidding me that I know. \n");
                                                            printf("\n");
                                                            printf("End of program. \n");
                                                    }
                                                }
                                        }
                                    }
                            }
                        }
                }else{
                    if(strcmp(a18, "no") == 0){
                        printf("So it's a reptile. \n");
                        printf("Does he have hooves? \n");
                        gets(a15);
                        printf("\n");
                        if(strcmp(a15, "yes") == 0){
                                printf("So the animal is a turtle. \n");
                                printf("\n");
                                printf("End of program. \n");
                        }else{
                            if(strcmp(a15, "no") == 0){
                                    printf("Is it a carnivore? \n");
                                    gets(a16);
                                    printf("\n");
                                    if(strcmp(a16,"yes")  == 0){
                                            printf("Is it a pawless animal? \n");
                                            gets(a17);
                                            printf("\n");
                                            if(strcmp(a17,"yes") == 0){
                                                        printf("So the animal is a snake. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(a17, "no") == 0){
                                                       printf("So the animal is a crocodile. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                    }
                                        }
                                    }
                            }
                        }
                    }
                }
        }
    }
    system("pause");
    return 0;
}