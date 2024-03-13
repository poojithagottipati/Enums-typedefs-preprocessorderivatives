#include <stdio.h>
#include<string.h>
typedef struct {
    char name[50];
    int age;
    float height;
} Pr;

int main() {
    Pr person1;

    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 175.5;

    printf("Person's name: %s\n", person1.name);
    printf("Person's age: %d\n", person1.age);
    printf("Person's height: %.2f\n", person1.height);

    return 0;
}
/*
Person's name: John
Person's age: 30
Person's height: 175.50
*/
