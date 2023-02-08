#include<stdio.h>
#include<stdlib.h>

struct employee { //structer type (employee)
    char *name;
    int age;
    int salary;
};

int manager(){

    struct employee manager1;

    manager1.age = 27;

    if(manager1.age < 30)
    {
        manager1.salary = 55000;
    }

    if(manager1.age > 30)
    {
        manager1.salary = 65000;
    }

    return manager1.salary;

}

int main(){

    struct employee emp1;
    struct employee emp2;

    printf("Enter employee1 salary: ");
    scanf("%d", &emp1.salary);
    printf("Enter employee2 salary: ");
    scanf("%d", &emp2.salary);

    printf("Employee1 salary is: %d\n", emp1.salary);
    printf("Employee2 salary is: %d\n", emp2.salary);
    printf("Manager salary is: %d\n", manager());

    return 0;
}
