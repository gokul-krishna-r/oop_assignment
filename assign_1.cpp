/*Write a program to display octal and hexadecimal equivalent of the decimal numbers 100 to 200.*/
#include<iostream>
using namespace std;

class Conv{
    int number;
    int oct[20];
    char hex[20];
    public:
        Conv(){
            number=0;
        }
        Conv(int decimal){
            number=decimal;
        }

        void toOct(){
            int temp=number;
            int i = 0;
            while (temp > 0) {
                oct[i] = temp % 8;
                temp/=8;
                i++;
            }
            cout<<"The Octal value of "<<number<<" is :";
            for (int j = i - 1; j >=0; j--){
                cout<<oct[j];
            }
            cout<<endl;

        }


        void toHex(){
            int i=0;
            int temp=number;
            int digit=0;
            while(temp>0){
                
                digit=temp%16;
                
                if(digit<10){
                    hex[i] = digit + 48;
                    
                }else{
                   hex[i]=digit+55;
                    
                }
                i++;
                temp/=16;
                
            }

            cout<<"The Hex value of "<<number<<" is : ";
            for (int j = i - 1; j >=0; j--){
                cout<<hex[j];
            }
            cout<<endl;
           

        }
};
int main(){
    Conv c1(100),c2(200);
    int i=0;
    Conv c[100];
    for(int j=100;j<=200;j++,i++){
        c[i]=j;
        c[i].toHex();
        c[i].toOct();
    }

    

    return 0;
}