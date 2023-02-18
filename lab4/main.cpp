#include "Person.h"
#include "person.cpp"

int main(){
    Person saifa;
    saifa.name = "saifa";
    saifa.age = 18;
    saifa.height =160;
    saifa.showPersonInfo();
    cout << "\n";
    Student got;
    got.name = "got";
    got.age = 20;
    got.height = 180;
    got.id = 101010;
    got.grade = 4;
    got.showStudenInfo();
    cout << "\n";
    Teacher hi;
    hi.name = "hi";
    hi.age = 30;
    hi.height = 200;
    hi.setSubject("Pro");
    hi.showTeacherInfo();
    cout << "\n";

    return 0;
}
