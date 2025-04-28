#include <iostream>
using namespace std;
// keval right and down ja skte h.
// total ways calculate krne h destination tak pahuchne k.
void PrintMaze(int row,int col,string s){ 
    if(row<1 || col<1){
        return ;
    }
    if(row==1 && col==1){
       cout<<s<<endl;
       return;
    }
    PrintMaze(row,col-1,s+'R');
    PrintMaze(row-1,col,s+'D');
    
 
}

int main(){
    PrintMaze(3,3,"");
}