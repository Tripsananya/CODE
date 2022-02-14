#include <iostream>
using namespace std;
int main()
{
int i,j;
for (i=1;i<=9;i++)
{
for(j=1;j<=9-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"* ";
}
cout<<endl;
}
return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
int i,j;
for (i=1;i<=9;i++)
{
for(j=1;j<=9-i;j++)
{
cout<<" ";
}
for(j=1;j<=i*2-1;j++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
int n, s, i, j;
cout << "Enter number of rows: ";
cin >> n;
for(i = n; i >= 1; i--)
{
for(s = i; s < n; s++)
cout << " ";

for(j = 1; j <= (2 * i - 1); j++)
cout << "*";

cout << "\n";
}
return 0;
}*/