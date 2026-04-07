#include<iostream>
using namespace std;
int binarytodec(int binnum){
    int ans = 0, pow = 1;
    while (binnum > 0)
    {
        int rem = binnum % 10;
        ans += (rem * pow);
        binnum /= 10;
        pow *= 2;
    }
    return ans;
    
}
int main(){
    cout<<"Decimal no. = "<<binarytodec(10000)<<endl;
    return 0;

}