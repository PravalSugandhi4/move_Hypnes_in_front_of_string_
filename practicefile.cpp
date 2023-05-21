/*

Question:-Move hyphens in front from given string contains hyphens
example:- 
           input:-  jklm---pqr
          output:-  ---jklmpqr
             
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
  string str1,str2="",str3="";
  int count=0;
  
  cout<<"Enter the input string :-  ";
  cin>>str1;
  
  for(int i=0;i<str1.length();i++)
  {
    if(str1[i]=='-')
    {
    	str2=str2+'-';
	}
	else
	{
		str3=str3+str1[i];
	}
  }
  
	cout<<str2+str3;
}    



