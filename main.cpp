#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int x,y;
        char opt;
        scanf("%d%c%d",&x,&opt,&y);
        if(opt=='+')cout<<x+y<<endl;
        if(opt=='-')cout<<x-y<<endl;
        if(opt=='*')cout<<x*y<<endl;
        if(opt=='/')cout<<x/y<<endl;
        if(opt=='%')cout<<x%y<<endl;
    }
    return 0;
}