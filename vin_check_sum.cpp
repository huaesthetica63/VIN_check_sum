#include "vin_check_sum.h"
using namespace std;
bool checkVin(char*str){
    if(strlen(str)!=VIN_LENGTH)//сначала проверяем длину строки
        return false;
    for(int i=0;i<VIN_LENGTH;i++){//проверяем, все ли символы есть в ассоциативном массиве замены
        if(replaceMap.find(str[i])==replaceMap.end())
            return false;
    }
    if(str[8]=='X'||(str[8]>='0'&&str[8]<='9'))
        return true;//на месте контрольной суммы цифра или Х (если сумма равна 10)
    return false;
}
vector<int> getReplace(char*str){
    vector<int>replace(VIN_LENGTH);
    for(int i=0;i<VIN_LENGTH;i++){
        replace[i] = replaceMap.at(str[i]);
    }
    return replace;
}
int getCheckSum(std::vector<int>v){
    int sum=0;
    for(int i=0;i<VIN_LENGTH;i++){
        sum+=v[i]*multiplyVec[i];
    }
    return sum%11;//контрольная сумма делится по модулю на 11, чтобы число умещалось в одну цифру (для 10 будет символ Х)
}
