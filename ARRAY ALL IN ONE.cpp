(#include<bits/stdc++.h>
using namespace std;
int main () {
int n,i,sum=1;
cin >> n;
int arry[n];
for (int i=0;i<n;i++) {
    cin >> arry[i];
}
//Max & Min element in an array
int maxi=arry[0];
int mini=arry[0];
for (int i=0;i<n;i++) {
    if (arry[i]<mini)
        mini=arry[i];
    if (arry[i]>maxi)
        maxi=arry[i];
}
cout << "Min = " <<  mini << endl;
cout << "Max = " << maxi << endl;
//Array reverse
cout << "Reversed Array : " ;
for (int i=n-1;i>=0;i--) {
   cout  << arry[i] << " ";
}
cout << endl;
//Array sorting in ascending order
for (int i=0;i<n-1;i++) {
    for (int j=i+1;j<n;j++) {
        if (arry[j] < arry[i]) {
            int temp=arry[j];
            arry[j]=arry[i];
            arry[i]=temp;
        }
    }
}
cout << "Sorted Array in Ascending Order : ";
for (int i=0;i<n;i++) {
    cout<< arry[i] << " ";
}
cout << endl;
//Array sum
for (int i=0;i<n;i++) {
    sum=sum*arry[i];
}
cout << "Sum = " << sum << endl;

return 0;
}
