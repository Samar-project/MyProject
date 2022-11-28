#include <iostream>

using namespace std;

class isearch{
public:
int data[10],n,key;
void get();
void dis();
};

void isearch::get(){
    cout<<"------enter size of array------"<<endl;
    cin>>n;
	cout<<"-----enter your number----"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"---------enter number to be search---------"<<endl;
    cin>>key;
};
void isearch::dis()
{
    int flag=0;
    for(int j=0;j<n;j++)
    {
        if(key==data[j])
        { 
        cout<<"---your search value "<<key<<" is found on index "<<(j+1);
        flag=1;
        break;
        }
    }
    if (flag==0)
    cout<<"----your no is not found----";
};

int main(){
    isearch obj;
    obj.get();

    obj.dis();
   return 0;
}
