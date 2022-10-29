#include<iostream>
using namespace std;

void print(int num)
{
    for(int i=9;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
void check(int num,int n)
{
    if(num&(1<<n))
        cout<<"Bit is set "<<endl;
    else{
        cout<<"Bit is not set "<<endl;
    }    
}
void set(int num,int pos)
{
    print(num|(1<<pos));
}
void unset(int num,int pos)
{
    print(num&~(1<<pos));
}
void toggle(int num,int pos)
{
    print(num^(1<<pos));
}
void count(int num)
{
    int ct=0;
    for(int i=9;i>=0;i--)
    {
        if((num>>i)&1)
           ct++;
    }
    cout<<ct<<endl;
}
void check_o_e(int num)
{
    if(num&1)
       cout<<"Number is odd "<<endl;
    else  
       cout<<"Number is even "<<endl;   
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    print(n);  //printing binary number;
    check(n,3);  //bit is set or not;
    set(n,5);   //set a bit at ith position;
    unset(n,5);  //unset a bit at ith position;
    toggle(n,5);  //toggling(1->0,0->1) a bit at ith position;
    count(n);  //count no. of set bits; or use _biultin_popcount(n);
    check_o_e(n);   //checking odd or even;
    print(n>>1);   //divide by 2;
    print(n<<1);   //multiply by 2;
    char a='a';   
    print(a);                           
    
}
