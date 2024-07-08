vector<string> frameGenerator(int n) {
    vector<string>pat={};
    int count;
    int l=n;
    while(l!=0)
    {
        count=0;
        string st="";
        if(l==n || l==1)
        {
            for(int i=0;i<n;i++)
                st += "*";
        }
        else
        { 
            for(int i=0;i<n;i++)
            {
                if(count==0 || count==n-1)
                    st+="*";
                else
                    st+="";
                
                count++;
            }
        }
        pat.push_back(st);
        l--;
        
    }
    
 return pat;
}
