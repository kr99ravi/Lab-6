//different operation using string 
#include<iostream>
using namespace std;
class String{
    private:
    char store[90];
    int size;
  public:
void storestring(char *A,int n){
    for(int i=0;i<n;i++){
        cin>>A[i];
        store[i] =A[i];
    }
   /* for(int j=0;j<=n;j++){
        store[j] =A[j];
    } */
    cout<<"string store sucessfully: "<<store<<endl;
}
void addstring(char *B,int n){
    int count =0;
    for(int j=0;j<n;j++){
        cin>>B[j];
    }
        while(store[count] !='\0'){
           size= count++;
        }
        for(int i=0;i<sizeof(B);i++){
            store[size+i+1]=B[i];
        }

        cout<<"after add: "<<store<<endl;      
}
void equate(char *a,char *b){
   if(a==b){
       cout<<"yes they are equal"<<endl;
   }
   else{
       cout<<"no they are not equal";
   }
    
}
};
int  main()
{
    char b[90];
    char c[90];
    int n ;
    String a1;
    cout<<"size of string"<<endl;
    cin>>n;
cout<<"enter the string \n";
    a1.storestring(b,n);
     cout<<"enter second string you want to add \n";
    a1.addstring(c,n);
   a1.equate(b,c);
   
    return 0;
    
}
