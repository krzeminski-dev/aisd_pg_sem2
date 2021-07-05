#include <iostream>

const int FEE_FOR_PACKING = 5,
          FEE_FOR_CAR = 20,
          MAX_AMOUNT_OF_ITEMS = 15,
          MAX_WEIGHT_WIHTOUT_FEE = 100;

struct item
{
    int value = 0;
    int weight = 0;
};

struct commission
{
    int profit = 0;
    int capacityOfCar = 0;
    int numberOfItems = 0;
    item *items;
};

int Pack(int checkedItems, int numberOfItems, int capacityOfCar, item *items)
{

    int result = 0;
    checkedItems++;

    if (checkedItems != numberOfItems + 1)
    {
        if (items[checkedItems].weight > capacityOfCar)
        {
            return Pack(checkedItems, numberOfItems, capacityOfCar, items);
        }
        else
        {
            int optimalWithout = Pack(checkedItems, numberOfItems, capacityOfCar, items);
            int optimalWith = items[checkedItems].value + Pack(checkedItems, numberOfItems, capacityOfCar - items[checkedItems].weight, items);
            optimalWith > optimalWithout ? result = optimalWith : result = optimalWithout;
            return result;
        }
    }
    else
        return result;
}

void LoadCommission(commission *commission)
{

    scanf("%d", &commission->numberOfItems);
    commission->items = new item[commission->numberOfItems + 1];

    for (int i = 1; i <= commission->numberOfItems; i++)
    {
        if (i == MAX_AMOUNT_OF_ITEMS + 1)
            break;
        scanf("%d", &commission->items[i].value);
    }

    for (int i = 1; i <= commission->numberOfItems; i++)
    {
        if (i == MAX_AMOUNT_OF_ITEMS + 1)
            break;
        scanf("%d", &commission->items[i].weight);
        if (commission->items[i].weight > MAX_WEIGHT_WIHTOUT_FEE)
        {
            commission->items[i].value -= FEE_FOR_PACKING;
        }
    }

    scanf("%u", &commission->capacityOfCar);
    commission->profit -= FEE_FOR_CAR;
    commission->profit += Pack(0, commission->numberOfItems, commission->capacityOfCar, commission->items);
}

int main()
{
    unsigned int tests;
    scanf("%u", &tests);

    commission *commissions = new commission[tests + 1];
    commission *tmp = nullptr;

    for (unsigned int i = 1; i <= tests; i++)
    {
        tmp = &commissions[i];
        LoadCommission(tmp);
    }

    for (unsigned int i = 1; i <= tests; i++)
    {
        tmp = &commissions[i];
        tmp->profit > 0 ? printf("%d\n", tmp->profit) : printf("%d\n", 0);
    }

    return 0;
}