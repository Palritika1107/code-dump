int Solution::solve(int A, int B, int C, int D) {
    
    // vector<int> P2={C};
    int count = 0;
    int i,t;
    for(i = C;A+i<B;i++)
    {
        if(i%D == 0)
        {
            // P2.push_back(i);
            // count++;
            t=i;
            break;
        }
    }
    while(t+A <= B)
    {
      count++; 
      t = t+D;
        
    }
    // count++;
    return count;
}
