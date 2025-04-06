// A Day at the Market
#include <stdio.h>

/*
Parameters:
Bill's amount of money = money
Will's amount of inventory space = inventory_space
Item's price = item_price
Item's size = item_size
*/
void who_wins_tonight(int money, int inventory_space, int item_price, int item_size)
{
    int bill_can_buy = money / item_price;
    int will_can_store = inventory_space / item_size;
    if (bill_can_buy > will_can_store)
        printf("bill");
    else if (will_can_store > bill_can_buy)
        printf("will");
    else
        printf("tie");
}

int main()
{
    int money = 3, inventory_space = 7, item_price = 2, item_size = 5;
    who_wins_tonight(money, inventory_space, item_price, item_size);
}