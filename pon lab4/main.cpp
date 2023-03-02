#include "Person.h"
#include "person.cpp"

int main(){
    Person pon;
    pon.name = "pon";
    pon.height = 180;
    pon.age = 19;
    pon.showPersonInfo();

    Student saifa;
    saifa.name = "saifa";
    saifa.height = 200;
    saifa.age = 20;
    saifa.id = 123456789;
    saifa.grade = 4.00;
    saifa.showStudenInfo();

    Teacher pnay;
    pnay.name = "nay";
    pnay.height = 300;
    pnay.age = 22;
    pnay.showTeacherInfo();
    pnay.setSubject("program");
    pnay.getSubject();
    pnay.showTeacherInfo();

    return 0;
}
