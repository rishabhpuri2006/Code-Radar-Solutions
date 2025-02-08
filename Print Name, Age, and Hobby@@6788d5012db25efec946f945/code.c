#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;

    // Taking user input
    scanf("%s", name);  // Read the name
    scanf("%d", &age);  // Read the age
    scanf("%s", hobby);  // Read the hobby

    // Printing the details in order
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);

    return 0;
}
