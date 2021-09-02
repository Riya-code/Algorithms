
//Longest size of contiguous substring containing only ‘1’
//NOTE: Anagram ALgo : Sorting
#include<bits/stdc++.h>

int maxlength( string a)
{
// your code here
int n=a.length(),i,max=INT_MIN,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        c++;
        
        if(c>max)
        max=c;
        
        else if(a[i]=='0')
        c=0;
    }
    return max;
}