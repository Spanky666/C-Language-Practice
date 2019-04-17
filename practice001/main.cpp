#include <iostream>

using namespace std;


void TriFun(int inputNum);

int main()
{
    int inputNum[]={0,0,0};

    for(int i =0;i<=2;i++){
    cout << "Input"<<i+1<<":";
    cin  >> inputNum[i];

    }
    for(int i =0;i<=2;i++){
    cout<<"Result"<<i+1<<":";
    TriFun(inputNum[i]);
    cout<<endl;
    }
    return 0;
}


void TriFun(int inputNum){
    //供while迴圈做判斷用標旗
    bool flag = true;
    //將輸入值先假設給quotient供下面else做運算
    int quotient = inputNum;
    //存放計算完之三進制用陣列
    int arr[15] = {};
    //控制陣列位置的指標
    int pointer =  0;

    while(flag){
        //輸入為0，1，2時
        if(inputNum == 0) {cout<<"0";flag=false;}
        else if(inputNum == 1) {cout<<"1";flag=false;}
        else if(inputNum == 2) {cout<<"2";flag=false;}
        //輸入值大於3時
        else {
        // 將quotient取3餘數並儲存於陣列中
            arr[pointer] = quotient % 3;
        // 計算quotient除3以後之值供下一輪做計算
            quotient = quotient / 3;
        // 指標往下一格子移動
            pointer++;
        //餘數除至商為0，1，2時將其設置並跳出迴圈
            if(quotient == 0||quotient == 1||quotient == 2){
                arr[pointer]=quotient;
                flag = false;
            }
    }
    }

        //輸出
        if(quotient == 0 && inputNum != 0){
                flag =false;
                for(int i =pointer; i>=0;i--) cout<<arr[i];
            }
         if(quotient == 1 && inputNum != 1){
                flag =false;
                for(int i =pointer; i>=0;i--)cout<<arr[i];

            }
        if(quotient == 2 && inputNum != 2){
                flag =false;
                for(int i =pointer; i>=0;i--) cout<<arr[i];

        }
    }
