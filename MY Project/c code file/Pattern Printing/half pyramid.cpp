#include<iostream>
#include<conio.h>
using namespace std;
class pyrpattern{
    public:
    void halfpyrR(int n);
    void halfpyrRD(int n);
    void halfpyrL(int n);
    void halfpyrLD(int n);
    void symmetrypyr1(int n);
    void symmetrypyr2(int n);
    void symmetrypyr1D(int n);
    void symmetrypyr2D(int n);

};
class pyramid :public pyrpattern
{
public:
    int i,j,k,l,m,n;
//half right pyramid
    void halfpyrR(int n)
    {
        for(i=n;i>0;i--)
        {
           for(j=1;j<n+1;j++)
            {
                if(j>=i)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    getch();
    }
//left half pyramid
void halfpyrL(int n)
{
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    getch();
}

//half pyramid right Downside
void halfpyrRD(int n)
{
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }

       cout<<endl;
    }

    getch();
}
//left down half pyramid
void halfpyrLD(int n)
{
    for(i=n;i>0;i--)
    {
        for(j=1;j<n+1;j++)
        {
            if(j<=i)
            cout<<"*";
            else
            cout<<" ";
        }
       cout<<endl;
    }
        getch();
}
//full pyramid symmetric 1
void symmetrypyr1(int n)
{

    k=n;
    for(i=n;i>0;i--)
    {
        for(j=2*n-1;j>0;j--)
        {
            if(j>=i&&j<=k)
                cout<<"*";
            else
                cout<<" ";
        }
        k++;
        cout<<endl;
    }
    getch();
}

//full pyramid symmetric 1
void symmetrypyr2(int n)
{
    l=n;m=n;k=l;
    for(i=n;i>0;i--)
    {//k=2;
        for(j=2*n-1;j>0;j--)
        {
            if(j==l||j==m)
                cout<<"*";
            else if(j==k&&j<=m)
                cout<<"*";
            else
                {cout<<" ";k=k+j+2;}
        }
        l--;m++;k=l;
        cout<<endl;
    }
    getch();
}

void symmetrypyr3(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {//k=2;
        for(j=1;j<=n-1;j++)
            {cout<<" ";}

        for(j=1;j<=i;j++)
            {cout<<"* ";}

    cout<<endl;
    }
    getch();
}
};

int main()
{
    int n;
    cout<<"Enter value of N to print\n";
    cin>>n;
    pyramid obj;
    //obj.halfpyrR(n);
    //obj.halfpyrRD(n);
    //obj.halfpyrL(n);
    //obj.halfpyrLD(n);
    //obj.symmetrypyr1(n);
    obj.symmetrypyr3(n);
    //obj.symmetrypyr1D(n);
    //obj.symmetrypyr2D(n);

    return 0;
}
