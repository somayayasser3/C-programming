#include <iostream>
using namespace std;

void print(int n,int m,char **boards);
bool iswining(int a, int b,int m,char ** boards);
int inserte(int b, char player,int n,int m,char **boards);





int main(){
    int m,n;
    cout<<"enter the no of rows which must be greater than 4"<<endl;
    cin>>m;
    cout<<"enter the no of columns which must be greater than 4"<<endl;
    cin>>n;
    while (n<4){
        cout<<"please enter the size of the columns again as its out of range"<<endl;
        cin>>n;
    }
    while (m<4){
        cout<<"please enter the size of the rows again as its out of range"<<endl;
        cin>>m;
    }
    while(n<4 || m<4){
        cout<<"please enter the size of the rows again as its out of range"<<endl;
        cin>>m;
        cout<<"please enter the size of the columns again as its out of range "<<endl;
        cin>>n;
    }
    char **boards=new char  *[m];
for (int i=0;i<m;i++){
    boards[i]=new char [n];
}

    for(int i =0;i < m; i++){

        for(int j= 0; j< n; j++)

            boards[i][j] = ' ';

    }

    print(n,m,boards);

    int hold;

    int hold2 = 0;

    int charsPlaced = 0;

    bool gamewon = false;

    char player = 'o';

    while(!gamewon){

        if(hold2 != -1){

            if(player == 'o'){
                cout<<"player 1 drop where?";

                player = 'x';

            }

            else{

                cout<<"player 2 drop where?";

                player = 'o';

            }

        }

        while(true){

            if(charsPlaced == m*n) break;

            cin>>hold;

            hold--;

            if(hold <n && hold>= 0) break;

            else cout<< "\nplease enter a value between 1 and 7 :";

            if (cin.fail())
            {
                cin.clear();
                char c;

                cin>>c;

            }



        }

        if(charsPlaced == m*n) break;

        hold2 = inserte(hold,player,n,m,boards);

        if(hold2 == -1) 
		cout<<"Column is full\nPlease enter another number between 1 and 7:";
        else{

            gamewon = iswining(hold2,hold,m,boards);

            charsPlaced ++;



            print(n,m,boards);

        }

    }



    if(charsPlaced == m*n){
        cout<<"No winner, Game was draw\n";


        return 0;

    }

    if(player == 'o')

        cout<<"gamewon by : player 2"<<endl;

    else cout<<"gamewon by : player 1"<<endl;

    for(int i=0;i<m;i++){
        delete [] boards[i];
    }
    delete [] boards;

    return 0;
}

void print(int n,int m,char**boards){
for (int z=1;z<=n;z++){
    cout<<" "<<z<<"  ";
}
cout<<endl;
    for(int a = 0; a< m; a++)

    {

        for(int b =0; b < n; b++) cout<<char(218)<<char(196)<<char(191)<<" ";

        cout<<'\n';

        for(int b =0; b < n; b++) cout<<char(179)<<boards[a][b]<<char(179)<<" ";

        cout<<'\n';

        for(int b =0; b < n; b++) cout<<char(192)<<char(196)<<char(217)<<" ";

        cout<<'\n';

    }

}

bool iswining(int a, int b,int m,char ** boards){
    int vertical = 1;
    int horizontal = 1;
    int diagonal1 = 1;
    int diagonal2 = 1;

    char player = boards[a][b];

    int i;

    int ii;


    for(i = a +1;boards[i][b] == player && i <m;i++,vertical++);//Check down

    for(i = a -1;boards[i][b] == player && i >= 0;i--,vertical++);//Check up

    if(vertical >= 4)return true;

    //check for horizontal(-)

    for(ii = b -1;boards[a][ii] == player && ii >= 0;ii--,horizontal++);//Check left

    for(ii = b +1;boards[a][ii] == player && ii < m;ii++,horizontal++);//Check right
    if(horizontal >= 4) return true;

    //check for diagonal 1 (\)

    for(i = a -1, ii= b -1;boards[i][ii] == player && i>=0 && ii >=0; diagonal1 ++, i --, ii --);//up and left

    for(i = a +1, ii = b+1;boards[i][ii] == player && i<=m && ii <m;diagonal1 ++, i ++, ii ++);//down and right

    if(diagonal1 >= 4) return true;

    //check for diagonal 2(/)

    for(i = a -1, ii= b +1;boards[i][ii] == player && i>=0 && ii <m; diagonal2 ++, i --, ii ++);//up and right
    for(i = a +1, ii= b -1;boards[i][ii] == player && i<=m && ii >=0; diagonal2 ++, i ++, ii --);//up and left

    if(diagonal2 >= 4) return true;

    return false;

}

int inserte(int b, char player,int n,int m,char ** boards){

    if(b >=0 && b<n)

    {

        if(boards[0][b] == ' '){

            int i;

            for(i = 0;boards[i][b] == ' ';i++)

                if(i == m-1){boards[i][b] = player;

            return i;}

            i--;
            return i;



        }

        else{

            return -1;
        }



    }

    else{

        return -1;

    }

}
