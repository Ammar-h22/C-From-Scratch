#include <stdio.h>
void display();           // Fuction prototype
int main()
{
    int a;
    printf("Initializing display function\n");
    display();                // Fuction call
    printf("Display fuction finished its work\n");
    return 0;
}

void display()              // Function definiton
{
    printf("This is display\n");
}
