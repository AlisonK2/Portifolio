#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char r1[3], r2[3], r3[3], r4[3], r5[3], r6[3], r7[3], r8[3], r9[3], r10[3], r11[3], r12[3], r13[3], r14[3], r15[3], r16[3], r17[3], r18[3];

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
    gets(r1);
    printf("\n");

    if(strcmp(r1, "yes") == 0){
            printf("Is it a quadruped? \n");
            gets(r2);
            printf("\n");
            if(strcmp(r2, "yes") == 0){
                    printf("Is it a carnivore? \n");
                    gets(r6);
                    printf("\n");
                    if(strcmp(r6, "yes") == 0){
                            printf("So the chosen animal was the lion. \n");
                            printf("\n");
                            printf("End of program. \n");
                    }else{
                        if(strcmp(r6, "no")){
                                printf("Is it a herbivore? \n");
                                gets(r7);
                                printf("\n");
                                if(strcmp(r7, "yes") == 0);
                                printf("So the animal is a horse. \n");
                                printf("\n");
                                printf("End of program. \n");
                        }else{
                            if(strcmp(r7, "no") == 0);
                            printf("You're kidding me that I know. \n");
                            printf("\n");
                            printf("End of program. \n");
                        }
                    }
            }else{
                if(strcmp(r2, "no") == 0){
                        printf("Is it a biped? \n");
                        gets(r3);
                        printf("\n");
                        if(strcmp(r3, "yes") == 0){
                                printf("Is it an omnivore? \n");
                                gets(r8);
                                printf("\n");
                                if(strcmp(r8, "yes") == 0){
                                        printf("So the animal is a human. \n");
                                        printf("\n");
                                        printf("End of program. \n");
                                }else{
                                    if(strcmp(r8, "no") == 0){
                                        printf("Is it a fruitful one? \n");
                                        gets(r9);
                                        printf("\n");
                                        if(strcmp(r9, "yes") == 0){
                                                printf("So the animal is a monkey. \n");
                                                printf("\n");
                                                printf("End of program. \n");
                                        }else{
                                            if(strcmp(r9, "no") == 0){
                                                printf("You're kidding me that I know. \n");
                                                printf("\n");
                                                printf("End of program. \n");
                                            }
                                        }
                                    }
                                }
                        }else{
                            if(strcmp(r3, "no") == 0){
                                    printf("Is it a flying animal? \n");
                                    gets(r4);
                                    printf("\n");
                                    if(strcmp(r4, "yes") == 0){
                                            printf("So the animal is a bat. \n");
                                            printf("\n");
                                            printf("End of program. \n");
                                    }else{
                                        if(strcmp(r4, "no") == 0){
                                                printf("Is it an aquatic animal? \n");
                                                gets(r5);
                                                printf("\n");
                                                if(strcmp(r5, "yes") == 0){
                                                        printf("So the animal is a whale. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(r5, "no") == 0){
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
        if(strcmp(r1, "no") == 0){
                printf("Is it a bird? \n");
                gets(r18);
                printf("\n");
                if(strcmp(r18, "yes") == 0){
                        printf("Is it a bird that doesn't fly? \n");
                        gets(r10);
                        printf("\n");
                        if(strcmp(r10, "yes") == 0){
                                printf("Is it a tropical bird? \n");
                                gets(r13);
                                printf("\n");
                                if(strcmp(r13, "yes") == 0){
                                        printf("So the animal is an ostrich. \n");
                                        printf("\n");
                                        printf("End of program. \n");
                                }else{
                                    if(strcmp(r13, "no") == 0){
                                             printf("Is it a polar bird? \n");
                                             gets(r14);
                                             printf("\n");
                                             if(strcmp(r14, "yes") == 0){
                                                    printf("So the animal is a penguin. \n");
                                                    printf("\n");
                                                    printf("End of program. \n");
                                             }else{
                                                 if(strcmp(r14, "no") == 0){
                                                         printf("You're kidding me that I know. \n");
                                                         printf("\n");
                                                         printf("End of program. \n");
                                                 }
                                             }
                                    }
                                }
                        }else{
                            if(strcmp(r10, "no") == 0){
                                    printf("Is it a swimming animal? \n");
                                    gets(r11);
                                    printf("\n");
                                    if(strcmp(r11, "yes") == 0){
                                            printf("So the animal is a duck. \n");
                                            printf("\n");
                                            printf("End of program. \n");
                                    }else{
                                        if(strcmp(r11, "no") == 0){
                                                printf("Is it a bird of prey? \n");
                                                gets(r12);
                                                printf("\n");
                                                if(strcmp(r12, "yes") == 0){
                                                        printf("So the animal is an eagle. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(r12, "no") == 0){
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
                    if(strcmp(r18, "no") == 0){
                        printf("So it's a reptile. \n");
                        printf("Does he have hooves? \n");
                        gets(r15);
                        printf("\n");
                        if(strcmp(r15, "yes") == 0){
                                printf("So the animal is a turtle. \n");
                                printf("\n");
                                printf("End of program. \n");
                        }else{
                            if(strcmp(r15, "no") == 0){
                                    printf("Is it a carnivore? \n");
                                    gets(r16);
                                    printf("\n");
                                    if(strcmp(r16,"yes")  == 0){
                                            printf("Is it a pawless animal? \n");
                                            gets(r17);
                                            printf("\n");
                                            if(strcmp(r17,"yes") == 0){
                                                        printf("So the animal is a snake. \n");
                                                        printf("\n");
                                                        printf("End of program. \n");
                                                }else{
                                                    if(strcmp(r17, "no") == 0){
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