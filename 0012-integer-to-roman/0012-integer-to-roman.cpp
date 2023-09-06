class Solution {
public:
    string intToRoman(int num) {
        int i[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string n[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string numeral;
        for(int x=0;x<13;x++){
            while(num>=i[x]){
                num-=i[x];
                numeral.append(n[x]);
            }
        }
        return numeral;
    }
};