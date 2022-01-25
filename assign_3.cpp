/*Write a program to accept a string using get() function.Display the string using write().*/

#include<iostream>
#include<string.h>
using namespace std;

class Str{
    char str[100];
    int n;
    public:
        void get(){
            cout<<"Enter string: ";
            cin.get(str,100 ,'\n');
        }
        void write(){
            cout<<"The entered string is: ";
            cout.write(str,strlen(str));
        }
};
int main(){

    Str str;
    str.get();
    str.write();

    return 0;
}