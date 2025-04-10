#include<stdio.h>
#include<stdlib.h>
char tables[4][8]={0};
int choice;
char choice2;
void viewfoodprices();
void placeorder();
void booktable();
char pizza[10];
char pasta[10];
char cake[10];
char burger[10];
float pizzaprice;
float pastaprice;
float cakeprice;
float burgerprice;
int row_number,column_number;
int row_number1,column_number1;
int main(){
    while(1){
        printf("1.view food price\n");
         printf("2.Place an order/View final bill\n");
          printf("3.Book table\n");
           printf("4.Exit\n");
           printf("ENTER YOUR CHOICE:\n");
           scanf("%d",&choice);
           switch(choice){
       case 1:
        viewfoodprices();
        break;
        case 2:
            placeorder();
            break;
        case 3:
            booktable();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("something went wrong bruh!Try again\n");
            break;


           }}
    return 0;
    }
void viewfoodprices(){
    printf("FOOD ITEM\t\tPRICE\n");
    FILE*fr;
    fr=fopen("foods.txt","r");
    fscanf(fr,"%s",pizza);
    fscanf(fr,"%f",&pizzaprice);
    fscanf(fr,"%s",pasta);
    fscanf(fr,"%f",&pastaprice);
    fscanf(fr,"%s",cake);
    fscanf(fr,"%f",&cakeprice);
    fscanf(fr,"%s",burger);
    fscanf(fr,"%f",&burgerprice);
    fclose(fr);

    printf("%s\t\t",pizza);
    printf("%f\n",pizzaprice);
     printf("%s\t\t",pasta);
    printf("%f\n",pastaprice);
     printf("%s\t\t",cake);
    printf("%f\n",cakeprice);
     printf("%s\t\t",burger);
    printf("%f\n",burgerprice);
};
void placeorder(){



};
void booktable(){
    printf("====AVAILAABLE TABLES OF THE RESTURENT===\n\n");
    for(int x=0;x<4;x++){
        for(int y=0;y<8;y++){
        printf("%d\t",tables[x][y]);
        }printf("\n");

    }
    printf("Available Tables-0\n");
    printf("Not Available seats-X\n\n");
    printf(">>>>>>Would you like to select a table?\n");
    printf("Here Enter the row number of your table:\n");
    scanf("%d",&row_number);
    printf("Here Enter the column number of your table:\n");
    scanf("%d",&column_number);
    printf("====Selected Table of the Resturent====\n");
    for(int p=0;p<4;p++){
        for(int q=0;q<8;q++){
            if(row_number==p && column_number==q){
                printf("x\t",tables[p][q]);
            }else{
            printf("%d\t",tables[p][q]);
            }
        }printf("\n");
    }
    printf("Do you want a select another table?[Y/N]\n ");
    scanf("%c",&choice2);
    if(choice2=='N' && choice2=='n'){
        printf("Thank you for contacting us. We ensure that you will have good quality service and precious meals.Your seat will be waiting for you!\n");
    }else if(choice2=='Y' && choice2=='y'){
        printf("Here Enter the row number of your table:\n");
    scanf("%d",&row_number1);
    printf("Here Enter the column number of your table:\n");
    scanf("%d",&column_number1);
    printf("====Selected Table of the Resturent====\n");
    for(int e=0;e<4;e++){
        for(int f=0;f<8;f++){
            if(row_number1==e && column_number1==f){
                if(row_number1==row_number && column_number1==column_number){
                    printf("You already have selected this table\n");
                }else{
                printf("x\t",tables[e][f]);
                }
            }else{
            printf("%d\t",tables[e][f]);
            }
        }printf("\n");
    }


    }
    }
