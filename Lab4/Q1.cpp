#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int cards[4]{};
    int hands[4];
    double price[] = {2.8, 3.7, 5, 9};
    char direction[4]{'L', 82, 'U', 68};
    char title[] = "ChartGPT is an awesome tool.";
    cout << "sizeof(cards) = " << sizeof(cards) << ",sizeof of cards[0] = " << sizeof(cards[0]) << endl;
    cout << "sizeof(price) = " << sizeof(price) << ",sizeof of price[0] = " << sizeof(price[1]) << endl;
    cout << "sizeof(direction) = " << sizeof(direction) << ",length of direction = " << strlen(direction) << endl;
    cout << "sizeof(title) = " << sizeof(title) << ",length of title = " << strlen(title) << endl;
    // Print the value and address of each element in cards and hands respectively.

    int* b = cards;
    for(int i = 0;i<4;i++){
        printf("value of card[%d] = %d, address of card[%d] = %p\n",i,*b,i,b);
        b++;
    }

    int* c = hands;
    for(int i = 0;i<4;i++){
        printf("value of hand[%d] = %d, address of hand[%d] = %p\n",i,*c,i,c);
        c++;
    }
    return 0;
}
