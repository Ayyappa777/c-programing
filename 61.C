#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int Age;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Age: ");
    scanf("%d", &s.Age);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Age: %d\n", s.Age);

    return 0;
}
