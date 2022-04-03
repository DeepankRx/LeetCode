class Solution {
    int sumOfDigits(int n)
    {
        int i=0,rem,sum=0;
        while(n)
        {
            rem = n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
public:
    int getLucky(string s, int k) {
        string str="";
        int i=0,sum=0;
        while(s[i]!='\0')
        {
            str+=to_string(int(s[i])-96);
            i++;
        }
        i=0;
        cout<<str<<endl;
          for(int i=0;i<str.length();i++){
                sum+=(int(str[i])-'0');
            }
        for(int i=0;i<k-1;i++)
        {
            sum = sumOfDigits(sum);
        }
      
        return sum;
    }
};