#include <iostream>

using namespace std;

int main() {
    int a, b,t,n;
    int score_bob=0,score_alice=0,alice_die=1,bob_die=2;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a>>b;
            score_alice+=a;
            score_bob+=b;
            if(score_bob!=score_alice){
                alice_die=1;
                bob_die=2;
                break;
            }
            else{
                alice_die=2;
                bob_die=1;
            }
        }
        cout<<alice_die<<endl;
        score_bob=score_alice=0;
    }
    
    return 0;
}