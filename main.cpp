#include "vin_check_sum.h"
using namespace std;
int main() {
    cout<<"Enter VIN-code!"<<endl;
    char*str = new char[100];
    cin>>str;
    cout<<"Your VIN-code: \n"<<str<<endl;
    if(checkVin(str)){
        vector<int>v = getReplace(str);
        cout<<"Replace vector:"<<endl;
        for(int i=0;i<VIN_LENGTH;i++){
            cout<<v[i];
        }
        cout<<endl;
        int check = getCheckSum(v);
        cout<<"Checksum is "<<check<<endl;
        if(v[8]==check){
            cout<<"Correct VIN!"<<endl;
        }
        else{
            cout<<"Incorrect VIN!"<<endl;
        }
    }
    else{
        cout<<"Error! It is not correct 17 character VIN!"<<endl;
    }
    return 0;
}
