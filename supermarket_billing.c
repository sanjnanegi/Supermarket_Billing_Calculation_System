#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *productName[] = {
    "sugar", "milk", "vegetable masala", "washing powder", "salt", "poha",
    "oil", "tooth paste", "hair conditionar", "wheat flour", "red chilli",
    "maida", "coffee", "tea", "butter", "milk powder", "turmeric powder",
    "hair oil", "ghee", "face powder"};

char product_name[20][20];
int product_quantity[20];
int count1 = 0, total_bill = 0, total_bill1 = 0, discount;

int sugar_p = 50, milk_p = 50, vegetable_masala_p = 50, washing_powder_p = 100, salt_p = 20,
    poha_p = 50, oil_p = 200, tooth_paste_p = 40, hair_conditionar_p = 120, wheat_flour_p = 50,
    red_chilli_p = 40, maida_p = 45, coffee_p = 200, tea_p = 100, butter_p = 100, milk_powder_p = 150,
    turmeric_powder_p = 200, hair_oil_p = 60, ghee_p = 300, face_powder_p = 70;

void generate_bill()
{
    printf("\n\t ** OUR GROCERY STORE BILL **\n");
    printf("|--------------------------------------------------------\n");
    printf("| Product\t\tQuantity\t\tPrice |\n");
    printf("|--------------------------------------------------------\n");

    for (int i = 0; i < count1; i++)
    {
        int price = 0;
        if (!strcmp("sugar", product_name[i]))
            price = sugar_p * product_quantity[i];
        else if (!strcmp("milk", product_name[i]))
            price = milk_p * product_quantity[i];
        else if (!strcmp("vegetable masala", product_name[i]))
            price = vegetable_masala_p * product_quantity[i];
        else if (!strcmp("washing powder", product_name[i]))
            price = washing_powder_p * product_quantity[i];
        else if (!strcmp("salt", product_name[i]))
            price = salt_p * product_quantity[i];
        else if (!strcmp("poha", product_name[i]))
            price = poha_p * product_quantity[i];
        else if (!strcmp("oil", product_name[i]))
            price = oil_p * product_quantity[i];
        else if (!strcmp("tooth paste", product_name[i]))
            price = tooth_paste_p * product_quantity[i];
        else if (!strcmp("hair conditionar", product_name[i]))
            price = hair_conditionar_p * product_quantity[i];
        else if (!strcmp("wheat flour", product_name[i]))
            price = wheat_flour_p * product_quantity[i];
        else if (!strcmp("red chilli", product_name[i]))
            price = red_chilli_p * product_quantity[i];
        else if (!strcmp("maida", product_name[i]))
            price = maida_p * product_quantity[i];
        else if (!strcmp("coffee", product_name[i]))
            price = coffee_p * product_quantity[i];
        else if (!strcmp("tea", product_name[i]))
            price = tea_p * product_quantity[i];
        else if (!strcmp("butter", product_name[i]))
            price = butter_p * product_quantity[i];
        else if (!strcmp("milk powder", product_name[i]))
            price = milk_powder_p * product_quantity[i];
        else if (!strcmp("turmeric powder", product_name[i]))
            price = turmeric_powder_p * product_quantity[i];
        else if (!strcmp("hair oil", product_name[i]))
            price = hair_oil_p * product_quantity[i];
        else if (!strcmp("ghee", product_name[i]))
            price = ghee_p * product_quantity[i];
        else if (!strcmp("face powder", product_name[i]))
            price = face_powder_p * product_quantity[i];

        printf("| %s \t%d\t\t%d\n", product_name[i], product_quantity[i], price);
        printf("|--------------------------------------------------------\n");
    }

    printf("| Total products: %d\t\tTotal amount: %d\n", count1, total_bill1);
    printf("|--------------------------------------------------------\n");
    printf("| Discount: %d\n", discount);
    printf("|--------------------------------------------------------\n");
    printf("| Payable amount: %d\n", total_bill);
    printf("|--------------------------------------------------------\n");
}

void calculate_bill()
{
    total_bill = 0;
    for (int i = 0; i < count1; i++)
    {
        if (!strcmp("sugar", product_name[i]))
            total_bill += sugar_p * product_quantity[i];
        else if (!strcmp("milk", product_name[i]))
            total_bill += milk_p * product_quantity[i];
        else if (!strcmp("vegetable masala", product_name[i]))
            total_bill += vegetable_masala_p * product_quantity[i];
        else if (!strcmp("washing powder", product_name[i]))
            total_bill += washing_powder_p * product_quantity[i];
        else if (!strcmp("salt", product_name[i]))
            total_bill += salt_p * product_quantity[i];
        else if (!strcmp("poha", product_name[i]))
            total_bill += poha_p * product_quantity[i];
        else if (!strcmp("oil", product_name[i]))
            total_bill += oil_p * product_quantity[i];
        else if (!strcmp("tooth paste", product_name[i]))
            total_bill += tooth_paste_p * product_quantity[i];
        else if (!strcmp("hair conditionar", product_name[i]))
            total_bill += hair_conditionar_p * product_quantity[i];
        else if (!strcmp("wheat flour", product_name[i]))
            total_bill += wheat_flour_p * product_quantity[i];
        else if (!strcmp("red chilli", product_name[i]))
            total_bill += red_chilli_p * product_quantity[i];
        else if (!strcmp("maida", product_name[i]))
            total_bill += maida_p * product_quantity[i];
        else if (!strcmp("coffee", product_name[i]))
            total_bill += coffee_p * product_quantity[i];
        else if (!strcmp("tea", product_name[i]))
            total_bill += tea_p * product_quantity[i];
        else if (!strcmp("butter", product_name[i]))
            total_bill += butter_p * product_quantity[i];
        else if (!strcmp("milk powder", product_name[i]))
            total_bill += milk_powder_p * product_quantity[i];
        else if (!strcmp("turmeric powder", product_name[i]))
            total_bill += turmeric_powder_p * product_quantity[i];
        else if (!strcmp("hair oil", product_name[i]))
            total_bill += hair_oil_p * product_quantity[i];
        else if (!strcmp("ghee", product_name[i]))
            total_bill += ghee_p * product_quantity[i];
        else if (!strcmp("face powder", product_name[i]))
            total_bill += face_powder_p * product_quantity[i];
    }

    total_bill1 = total_bill;

    if (total_bill >= 15000)
        discount = (15 * total_bill) / 100;
    else if (total_bill >= 10000)
        discount = (10 * total_bill) / 100;
    else if (total_bill >= 5000)
        discount = (5 * total_bill) / 100;
    else
        discount = 0;

    total_bill -= discount;
    generate_bill();
}

int main()
{
    char ch, temp_str[20];
    int check;

    printf("\n\n **WELCOME TO OUR GROCERY STORE**\n\n");
    printf(" Here are our store discount rates:\n");
    printf("| Less than 5000: 0%% discount |\n");
    printf("| Greater than 5000: 5%% discount |\n");
    printf("| Greater than 10000: 10%% discount |\n");
    printf("| Greater than 15000: 15%% discount |\n");

    while (1)
    {
        int valid = 0;

        printf("\nEnter product name: ");
        fgets(temp_str, sizeof(temp_str), stdin);
        temp_str[strcspn(temp_str, "\n")] = 0;

        for (int j = 0; j < 20; j++)
        {
            if (strcmp(temp_str, productName[j]) == 0)
            {
                valid = 1;
                strcpy(product_name[count1], temp_str);
                break;
            }
        }

        if (!valid)
        {
            printf("Invalid product name. Try again.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &product_quantity[count1]);
        while (getchar() != '\n'); // Clear input buffer

        count1++;

        printf("Do you want to add more products? (Y/N): ");
        scanf(" %c", &ch);
        while (getchar() != '\n'); // Clear input buffer

        if (ch == 'N' || ch == 'n')
            break;
    }

    calculate_bill();
    return 0;
}
