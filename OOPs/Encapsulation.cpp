#include<bits/stdc++.h>
using namespace std;

class house{
    int sugar;
    public:
    void setter(int n){
        this ->sugar=n;

    }
    int get(){
        return sugar;
    }

};

int main(){

house *sanjay=new house();
sanjay->setter(20);
int ans=sanjay->get();
cout<<ans;


 return 0;
}