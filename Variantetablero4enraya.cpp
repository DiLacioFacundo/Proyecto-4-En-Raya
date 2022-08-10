 #include <iostream>

using namespace std;

int main(){
char c = 'A';
char b = '1';
for(int i = 0; i<7; i++){
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
	if(i==1 || i==3 || i==5 || i==7 || i==9 || i==11) {
		cout<<b;
       	b++;
		
}
else {
	cout<<" ";
}
	    
    for(int j = 0; j<8; j++){
    	
        cout<<"|";
        
        if(i%2==0 && i>1 && j<7 ){

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
