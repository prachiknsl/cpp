#include <bits/stdc++.h>
using namespace std;

//Complexity : nlog(log n)
void sieveOfEratosthenes(int n){
    bool prime_table[n+1];
    memset(prime_table, true, sizeof(prime_table));
    
    for(int i=2;i*i<=n;i++)
    {
        if(prime_table[i]==true){
            for(int j=i*i;j<=n;j=j+i){
                prime_table[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime_table[i])
            std::cout << i << std::endl;
    }
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	
	//Find all prime no.s
	sieveOfEratosthenes(n);
	return 0;
}
