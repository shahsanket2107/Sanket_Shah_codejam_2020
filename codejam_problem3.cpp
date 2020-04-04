#include<bits/stdc++.h>
#define int long long int
#define rdj ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

signed main()
{
    rdj
    int t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        int n;
        cin>>n;
        int a[n][2],p,q,cnt=0,temp=-1,flag=0,f,b[n][2]={0},c1=0,c2=0,k1=0,k2=0,s[n][2];
        char c[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            c[i]='@';
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }

        c[0]='C';
        q=a[0][1];
        p=a[0][0];
        b[c1++][0]=p;
        b[c2++][1]=q;
        for(i=1;i<n;i++)
        {
            f=0;
            for(j=0;j<c1;j++)
            {
               if(a[i][0]>=b[j][1])
                {
                    f++;
                }
                else if(a[i][1]<=b[j][0])
                {
                    f++;
                }
            }

            if(f==c1)
                {
                    c[i]='C';
                    b[c1++][0]=a[i][0];
                    b[c2++][1]=a[i][1];
                }
        }

        /*for(i=0;i<n;i++)
        {
            cout<<i<<" "<<c[i]<<endl;
        }*/

        for(i=0;i<n;i++)
        {
           // cout<<i<<" "<<c[i];
            if(c[i]=='C')
            continue;
            else
            {
                temp=i;
                break;
            }
        }
        if(temp!=-1)
        {
            c[temp]='J';
            q=a[temp][1];
            p=a[temp][0];
            s[k1++][0]=p;
            s[k2++][1]=q;

            for(i=temp+1;i<n;i++)
            {
                f=0;
                if(c[i]=='C')
                    continue;

                for(j=0;j<k1;j++)
                {
                    if(a[i][0]>=s[j][1])
                    {
                        f++;
                    }
                    else if(a[i][1]<=s[j][0])
                    {
                        f++;
                    }
                }

                if(f==k1)
                    {
                    c[i]='J';
                    s[k1++][0]=a[i][0];
                    s[k2++][1]=a[i][1];
                    }
            }
        }

        for(i=0;i<n;i++)
        {
            if(c[i]=='C' || c[i]=='J')
                cnt++;
            //cout<<c[i];
        }
        //cout<<endl;
        if(cnt==n)
            flag=0;
        else
            flag=1;
        if(flag==1)
        cout<<"Case #"<<x<<": "<<"IMPOSSIBLE"<<endl;
        else
        {
            cout<<"Case #"<<x<<": ";
            for(i=0;i<n;i++)
            {
                cout<<c[i];
            }
            cout<<endl;
        }

    }
    return 0;
}
