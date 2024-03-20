#include<stdio.h>
#include<process.h>
struct item
{
    int item_id;
    char item_name[50];
    float item_mrp;
    float item_purchase_price;
    float item_selling_price;

};

struct item inputItemFromKb()
{
    struct item itm;
    printf("enter id of item:");
    scanf("%d",&itm.item_id);
    printf("enter name of item:");
    fflush(stdin);
    gets(itm.item_name);
    printf("Enter MRP:");
    scanf("%f",&itm.item_mrp);
    printf("Enter item's purchase price:");
    scanf("%f",&itm.item_purchase_price);
    printf("Enter item's selling price:");
    scanf("%f",&itm.item_selling_price);
    return itm;
}

void printItem(struct item itm)
{
    printf("\n%4d. %50s %6.2f %6.2f %6.2f",itm.item_id,itm.item_name,itm.item_mrp,itm.item_purchase_price,itm.item_selling_price);
}

int main()
{
    FILE *fp;
    struct item itm;
    int i;
    int choice;
    do
    {
        printf("\n\t Menu\n=================\n1. Add New Item\n2. View All Item\n3. Exit\nEnter option:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            /* read an item from user and append it to file*/
            //1.open a file in append binary mode
            fp=fopen("data.dat","ab");
            if(!fp)
            {
                printf("Error in opening file.");            
                break;

            }
            //read new item from keyboard
            itm=inputItemFromKb();
            //write accepted dat to file
            fwrite(&itm,sizeof(struct item),1,fp);
            printf("\nItem added to file successfully.");
            //close file
            fclose(fp);
            break;
            case 2:
            //open file in read mode
            fp=fopen("data.dat","rb");
            if(!fp)
            {
                printf("\n File not found.");
                break;
            }
            //read data one by one from file and print on screen
            while(!feof(fp))
            {
                //read a record from file
                fread(&itm,sizeof(struct item),1,fp);
                //print data on screen
                printItem(itm);
            }
            printf("\n===End===");
            //close the file
            fclose(fp); 
            
            break;
            case 3:
            return 0;
            default:
            printf("\n OOPS! Not a valid choice.");
        
        }
    printf("\n")        ;
    system("pause");
        
    } while (1);
    
}