//https://practice.geeksforgeeks.org/problems/good-or-bad-string1417/1/?category[]=Greedy&category[]=Greedy&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]GreedyproblemStatusunsolveddifficulty[]-1page1category[]Greedy

int isGoodorBad(string S) {
        // code here
        int i=0,countV=0,countC=0;
        while(S[i]!='\0'){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
                countV++,countC=0;
                
            
            else if(S[i]=='?')
            countV++,countC++;
            
            
            else
            countC++,countV=0;
            
            if(countV>5 || countC>3)
            return 0;
            
            i++;
        
    }
    return 1;
    }
};
