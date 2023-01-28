// C++ program to illustrate the
// traversal of string
#include "iostream"
using namespace std;

// Function to illustrate traversal
// in string
void traverseString(char str[])
{
	int i = 0;

	// Iterate till we found '\0'
	while (str[i] != '\0') {
		printf("%c ", str[i]);
		i++;
	}
}

// Driver Code
int main()
{

	// Given string
	char str[] = "GeekforGeeks";
    int n=sizeof(str)/sizeof(str[0]);
    
    for(int i=0;i<n-1;i++){
    cout<<str[i]<<"--";
}

	// Function call
	// traverseString(str);

	return 0;
}
