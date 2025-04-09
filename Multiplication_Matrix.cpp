#include <iostream>
using namespace std;
void input(int arr[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
}

void print(int ans[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n1,m1,n2,m2;
    cout<<"Rows and columns of first matrix: ";
    cin>>n1>>m1;
    cout<<"Rows and columns of second matrix: ";
    cin>>n2>>m2;

    if(m1!=n2) cout<<"Multiplication is not possible ";
    
    int arr[3][3];
    int arr1[3][3];
    int ans[3][3]={0};


    input(arr,n1,m1);
    input(arr1,n2,m2);

    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            for(int k=0; k<m1; k++){
                //Here k mantain the column of first & row of second.
                ans[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    print(ans,n1,m2);
}