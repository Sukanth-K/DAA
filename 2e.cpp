#include<iostream>
#include<cmath>
using namespace std;
int main(){

double elements[100][3], x, y, ele;
int  i, j, n; 
double key;

cin>>n;
for(i=0; i<n; i++){
cin>>x;
cin>>y;
ele = sqrt((x*x)+(y*y));
elements[i][2] = x;
elements[i][1] = y;
elements[i][0] = ele;
}

cout<<"Before Sorting: \n";
for(i=0; i<n; i++){
cout<< "x: " << elements[i][2] << " ";
cout<< "y: " << elements[i][1] << " ";
cout<< "Distance: " << elements[i][0] <<"\n";
}

clock_t tStart = clock();

for(j=1; j<n; j++){
key = elements[j][0];
i = j-1;

while((i>=0) && (elements[i][0]>key)){
{
elements[i+1][0]=elements[i][0];

i=i-1;
}
elements[i+1][0] = key;
}}
double time1 = (double)(clock() - tStart)/CLOCKS_PER_SEC;
cout<<"After Sorting: \n";

for(i=0; i<n; i++){
cout<< "x: " << elements[i][2] << " ";
cout<< "y: " << elements[i][1] << " ";
cout<< "Distance: " << elements[i][0] <<"\n";
}
cout << "Time Taken for sorting: "<< time1<< endl;
}
