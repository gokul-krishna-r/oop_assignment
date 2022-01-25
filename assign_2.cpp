/*2.Write a program to receive the item code,quantity,price and calculate the amount. Display the data in
the following format.*/

#include<iostream>
#include<iomanip>
using namespace std;

class Items{
    int item_code,quantity;
    double price,amount;

    public:
        void setItemData(){
            cout<<"Enter item code: ";
            cin>>item_code;
            cout<<"Enter item quantity: ";
            cin>>quantity;
            cout<<"Enter price: ";
            cin>>price;
            amount=price*quantity;
        }
        double getAmount(){
            return amount;
        }
        void displayItem(){
            cout<<"\t"<<item_code<<"\t\t"<<quantity<<"\t\t"<<price<<"\t"<<amount;

        }
};
int main(){
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    double total_amt=0;
    Items t[20];
    for(int i=0;i<n;i++){
        cout<<"\t\t------Enter Item "<<i+1<<" Details------"<<endl;
        t[i].setItemData();
    }
    cout<<"Sl.No\t"<<"Item Code"<<"\t"<<"Quantity"<<'\t'<<"Price"<<'\t'<<"Amount";
    for(int i=0;i<n;i++){
        cout<<endl;
        total_amt+=t[i].getAmount();
        cout<<i+1;
        t[i].displayItem();
    }
    cout<<endl<<"-----------------------------------------------------"<<endl;
    cout<<"\t\t\t\t Total Amount: "<<std::setprecision(3)<<std::fixed<<total_amt<<endl;


    return 0;
}