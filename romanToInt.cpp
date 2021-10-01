class Solution{
    public: 
        int romanToInt(string s){
            int I=0, V=0, X=0, L=0, C=0, D=0, M=0, IV=0, IX=0, XL=0, XC=0, CD=0, CM=0;
            int ans;
            for(int i=0; i<s.size(); i++){
                switch(s[i]) {
                    case 'I':
                        if (s[i+1]=='V') {
                            IV++;
                        } else if (s[i+1]=='X') {
                            IX++;
                        } else {
                            I++;
                        }
                        break;
                    case 'V':
                        V++;
                        break;
                    case 'X':
                        if (s[i+1]=='L') {
                            XL++;
                        } else if (s[i+1]=='C') {
                            XC++;
                        } else {
                            X++;
                        }
                        break;
                    case 'L':
                        L++;
                        break;
                    case 'C':
                        if (s[i+1]=='D') {
                            CD++;
                        } else if (s[i+1]=='M') {
                            CM++;
                        } else {
                            C++;
                        }
                        break;
                    case 'D':
                        D++;
                        break;
                    case 'M':
                        M++;
                        break;
                }
            }
            ans = I*1+V*5+X*10+L*50+C*100+D*500+M*1000-1*IV-1*IX-10*XL-10*XC-100*CD-100*CM;
            return ans;
        }
};
