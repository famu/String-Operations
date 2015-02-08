
#include<iostream>


	using namespace std;



   class String {
       string str;
     public:
       String(string s){
    	   str = s;
       }
       int Length(){
    	   int length = 0;
    	   while(str[length] != '\0')
    		   ++length;
    	  	return length;
       }
       string subString(int length){
    	   if(this->Length()<length)
    		   return this->str;
    	   char subStr[length];
    	   int i;
    	   for(i=0;i<length;i++)
    		   subStr[i]= this->str[i];
    	   subStr[i] = '\0';
    	   return subStr;
       }

       string subString(int s, int e){
//    	   cout<<s<<" "<<e<<endl;


    	   if(s>e) return "";

    	   int thisLen = this->Length();
    	   if(e>thisLen){
    		   char subStr[thisLen-s];
    		   int i;
    		   for(i=s;i<thisLen;i++)
    			   subStr[i-s] = this->str[i];
    		   subStr[i-s] = '\0';
    		   return subStr;
    	   }

    	   char subStr[e-s];
    	   int i;
    	   for(i=s;i<=e;i++)
    	       subStr[i-s] = this->str[i];
    	   subStr[i-s] = '\0';
    	   return subStr;
//    	   return "";
       }

       bool compareTo(string str){
    	   if(this->str.length()!= str.length())
    		   return false;
    	   else{
    		   for(int i=0;i<str.length();i++)
    			   if ((char)this->str[i] != (char) str[i])
    				   return false;
    	   }
    	   return true;
       }
   };



	int main ()
		{
		String str("01");

		 cout << str.contains("01") << endl;

		 return 0;

		}
