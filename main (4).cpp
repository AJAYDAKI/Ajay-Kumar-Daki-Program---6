#include<iostream>
 using namespace std;

class STRING
{
    char arr1[20],arr2[20],result[20];
    int k,n;
public:
    void setstrings()//setter function
    {
        cout<<"Welcome to the Program!\n\n";
        cout<<"Enter the first string: ";
        cin>>arr1;
        cout<<"\nEnter the second string: ";
        cin>>arr2;
    }
    void storestrings()
    {
        cout<<"\nThe first string you entered is "<<arr1<<endl;
        cout<<"The second string you entered is: "<<arr2<<endl;
    }
    void addstrings()
    {
        char a1[20]="ajay";
        char a2[10]="daki";


         for(int i=0;i<9;i++)
            a1[i+9]=a2[i];
            a1[20]='\0';

        cout<<"The resultant string is "<<a1<<endl;
    }
    void equatestrings()
    {
        int found = 0;
        for(int p=0;p<10;p++)
        {
          if(arr1[p]==arr2[p])
             found+=1;
        }
          if(found!=10)
           cout<<"Both the strings are not equal"<<endl;
          else
            cout<<"The strings are equal"<<endl;

    }
};

main()
{
    STRING s;
    s.setstrings();
    s.storestrings();
    s.addstrings();
    s.equatestrings();

     return 0;
}
