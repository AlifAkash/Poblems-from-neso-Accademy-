#include<stdio.h>
#include<stdlib.h>

typedef struct employee { //structer type (employee)
    char *name;
    int age;
    int salary;
}emp; //emp == struct employee;

int manager(){

    emp manager1;

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

    emp e1;
    emp e2;

    printf("Enter employee1 salary: ");
    scanf("%d", &e1.salary);
    printf("Enter employee2 salary: ");
    scanf("%d", &e2.salary);

    printf("Employee1 salary is: %d\n", e1.salary);
    printf("Employee2 salary is: %d\n", e2.salary);
    printf("Manager salary is: %d\n", manager());

    return 0;
}
