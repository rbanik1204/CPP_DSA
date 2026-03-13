#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int* rowSum(int**, int, int);
int matrixMul(int**, int, int);
int main(void){
	int m,n;
	cout<<"Enter number of Rows & Columns:";
	cin>>m>>n;
	int **arr = new int*[m];
	for(int i=0;i<m;i++)
		*(arr+i) = new int[n];
	cout<<"Enter Matrix values row by row:"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>*(*(arr+i)+j);
		cout<<i+1<<"th row completed!"<<endl;
	}
	cout<<"Let's check the matrix:"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<*(*(arr+i)+j)<<" ";
		cout<<endl;
	}
	int *sumArr = rowSum(arr,m,n);
	cout<<"Sum of Each row integers is as follows:"<<endl;
	for(int i=0;i<m;i++)
		cout<<*(sumArr+i)<<' ';
	cout<<endl;
	matrixMul(arr,m,n);
}
int* rowSum(int**arr,int m, int n){
	int *sumArr = NULL;
	int sum;
//	int n = sizeof(*arr[0])/sizeof(arr[0][0]);// Size of first row / size of first Integer Data
//	int m = sizeof(arr)/sizeof(*arr);
	sumArr = new int[m];
	for(int i=0;i<m;i++){
		sum = 0;
		for(int j=0;j<n;j++){
			sum+= arr[i][j];
		}
		sumArr[i] = sum;
	}
	cout<<n<<endl;
	return sumArr;
}
int matrixMul(int** arr,int m,int n){
	int sum=0;
	int temp[m][n] = {0};
	for(int i=0;i<m;i++){
		for(int k=0;k<n;k++){
			sum=0;
			for(int j=0;j<n;j++){
				sum+= arr[k][j]*arr[j][k];
			}
			temp[i][k] = sum;
		}
	}
	cout<<"Self Multiplied matrix is as follows:"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<temp[i][j]<<' ';
		cout<<endl;
	}
}
