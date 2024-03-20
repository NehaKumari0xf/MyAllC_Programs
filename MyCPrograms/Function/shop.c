#include<stdio.h>
#define TOTAL_PRODUCT 16
char ProductName[TOTAL_PRODUCT][15]=
{
    "Flair Black Glitter Pen",
    "Flair Red Glitter Pen",
    "Flair Blue Glitter Pen",
    "Glitter Pen All Colour Pack ",
    "Plastic Cover Roll",
    "Text Highlighter",
    "Sprial Copy A4 size",
    "Plastic Cover File",
    "Doms Wax Color",
    "Doms Pencil Color",
    "Doms Water Color",
    "Kores White Ink Correction Pen (7ml)",
    "Natraj Instrument Box",
    "Doms. Instrument Box",
    "Calculator",   
};

float ProductPrice[TOTAL_PRODUCT]=
{
    10.0,
    10.0,
    10.0,
    99.0,
    49.0,
    25.0,
    59.0,
    30.0,
    49.0,
    49.0,
    79.0,
    39.0,
    79.0,
    69.0,
    149.0,
};

int purchasedProduct[TOTAL_PRODUCT][2]={0};
char customerName[25],contactNo[10];
int totalOrderedProduct=0;

void acceptProductFromUser();
void prepareAndprintBill();
int main ()
{
    acceptProductFromUser();
    prepareAndprintBill();
    printf("\n");
    system("pause");
    return 0;
}

void acceptProductFromUser()
{
    char choice;
    int ProdId,qty,i;
    float total;
    totalOrderedProduct=0;
    system("cls");

    printf("Enter Customer Name:");
    gets(customerName);
    printf("Enter Contact no:");
    gets(contactNo);
    while(totalOrderedProduct<16)
    {
        system("cls");
//print all ordered product
        printf("\n********* Ordered Products: *********");
        printf("\n------------------------------------------------------------");
        printf("\n%5s %30s %10s %5s %7s","Sr. no","Item Name","Quantity","Rate","Total");
        printf("\n------------------------------------------------------------");
        total=0;

        for (i = 0; i < totalOrderedProduct; i++)
        {
            printf("\n%5d %30s %5d %5.2f %7.2f",i+1,ProductName[purchasedProduct[i][0]],purchasedProduct[i][1],ProductPrice[purchasedProduct[i][0]],ProductPrice[purchasedProduct[i][0]]*purchasedProduct[i][1]);
            total+=(ProductPrice[purchasedProduct[i][0]]*purchasedProduct[i][1]);
        }

        printf("\nTotal:%9.2f",total);
//accept product id from customer
         
         printf("Enter product id to pucrchase");
         scanf("&ProdId");
//validation of id

        if (ProdId<0||ProdId>=TOTAL_PRODUCT)
        {
            printf("Please enter a valid product id:");
            continue;
        }
//accept quantity of selected product

            printf("\nEnter the quantity of %s, %.2f per peace(0 to ignore):",ProductName[ProdId],ProductPrice[ProdId]);
            scanf("%d",&qty);

//check the given product is pre ordered if yes then add it to pre orderd product
//search iid in purchasedProducts

    
}