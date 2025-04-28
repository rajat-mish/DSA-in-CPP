#include <iostream>
using namespace std;
// keval right and down ja skte h.
// total ways calculate krne h destination tak pahuchne k.
int maze(int row,int col){
    if(row<1 || col<1){
        return 0;
    }
    if(row==1 && col==1){
        return 1;
    }
    int rightway=maze(row,col-1);
    int downway=maze(row-1,col);
    int totalway=rightway+downway;
    return totalway;
}

int main(){
    cout<<maze(3,3);
}