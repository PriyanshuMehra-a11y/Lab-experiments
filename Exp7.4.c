#include <stdio.h>
#include <string.h>

union Address {
    char name[10];
    char home_address[10];
    char hostel_address[10];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;

    strcpy(addr.hostel_address, "Room 305, Block B, IIT Hostel");

    printf("Present Address: %s\n", addr.hostel_address);

    return 0;
}