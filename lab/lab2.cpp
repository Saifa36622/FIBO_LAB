// #include <iostream>
// 
// int main()
// {
//     using namespace std;
//     int x;
//     float z;
//     cin >> x;
//     cout << " hi" << x;
//     for (int i = 1; i <= 10 ;i++){
//         cout << i;
//     }
//     while
//     //for i in range(1,10)

// }

// #include <iostream>
// using namespace std;
// #include<tuple>

// int main(){
//     int x = 10;
//     int *y;
//     y = &x;
//     cout <<y << endl;
//     cout << *y << endl;
//     *y = 20;
//     cout <<y << endl;
//     cout << *y << endl;
// }

#include <iostream>
using namespace std;
#include <tuple>
void hi(int &x)
{
    int *p = &x;
    *p = 20;

}
void swap(int *x, int *y)
{
    int load;
    load = *x; 
    *x = *y; 
    *y = load; 
}

void callByValue(int var){
    var = 100;
}

void callByReference(int *var){
    *var = 200;
}

tuple <int, int> callBytuple(int var1, int var2){
    return make_tuple(var2, var1);
}

void callmebyyourname(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void postlab(int *sum,int *a,int size)
{
    int *p = a;
    int s = 0;
    for (int i = 0; i < size;i++)
    {
        s += p[i];
    }
    *sum = s;

}
int main(){
    // for(int a=10;a>-1;a--){
    //     cout<<a;
    // }
    // string x[] = {"hi","pipi","wowow"};
    // cout << *(x+2);

    // exercercise 1
    // int x = 10;
    // cout << "before = " << x << " and = " << &x << endl;
    // // hi(x);
    // x = 20;
    // cout <<"after = " << x << " and = " << &x ;
    // exercercise 2
    // int x = 10;
    // int *p = &x;
    // cout << "before = " << x << " and = " << &x << endl;
    // // hi(x);
    // *p = 20;
    // cout <<"after = " << x << " and = " << &x ;
    // exercercise 3
    // int x1 = 1;
    // int y3 = 2;

    // callByValue(x1);

    // callByReference(&y3);
    // cout << "x1 = " << x1 << endl;
    // cout << "y3 = " << y3 << endl;
    // exercise 4
    // int hi,hello;
    // tie(hi,hello) = callBytuple(1,2);
    // cout << "hi = " << hi << " hello = " << hello;
    // exercise 5
    // int wow = 1,zaa = 2;
    // cout << "before = " << wow << " and " << zaa << endl;
    // callmebyyourname(&wow,&zaa);
    // cout << "after = " << wow << " and " << zaa;
    //postlab
    // int sum;
    // int a[] = {1,2,1,2,3};
    // int s = sizeof(a)/4;
    // cout << s << "\n";
    // postlab(&sum,a,s);

    // cout << sum;




}