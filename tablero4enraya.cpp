 #include <iostream>

using namespace std;

int main(){
char c = 'A';
for(int i = 0; i<6; i++){
    cout<<" ";
    for(int j = 0; j<3; j++){
        if(j == 1){
          cout<<c;
          c++;
        }else{
            cout<<" ";
            
        }
    }
}
cout<<endl;
for(int i = 1; i<=12; i++){
    for(int j = 0; j<7; j++){
        cout<<"|";
        if(i%2==0 && i>1 && j<6 ){
            for(int jj = 0; jj<3; jj++){
                cout<<"-";
            }
        }else{
            for(int jj = 0; jj<3; jj++){
                cout<<" ";
            }
        }
    }
    cout<<endl;
}
    
return 0;
}
