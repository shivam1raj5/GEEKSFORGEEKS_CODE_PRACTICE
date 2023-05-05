//{ Driver Code Starts
    import java.util.*;
    
    class Parenthesis_Checker
    {
        public static void main(String args[])
        {
            try (Scanner sc = new Scanner(System.in)) {
                //Reading total number of testcases
                int t= sc.nextInt();
                
                while(t-- >0)
                {
                    //reading the string
                    String st = sc.next();
                    
                    //calling ispar method of Paranthesis class 
                    //and printing "balanced" if it returns true
                    //else printing "not balanced"
                    if(new Solution().ispar(st) == true)
                        System.out.println("balanced");
                    else
                        System.out.println("not balanced");
                
                }
            }
        }
    }
    // } Driver Code Ends
    
    
    
    class Solution
    {
        //Function to check if brackets are balanced or not.
        boolean ispar(String s1)
        {
            // add your code here
            Stack<Character> s = new Stack<>();
            for(int i=0;i< s1.length();i++){
                char c = s1.charAt(i);
                if(c=='(' || c=='[' || c=='{'){
                    s.push(c);
                }
                else
                {
                    if(s.isEmpty()){
                        return false;
                    }
                    if((s.peek()=='(' && c==')')|| (s.peek()=='[' && c==']')||(s.peek()=='{' && c=='}')){
                        s.pop();
    
                    }
                    else{
                        return false;
                    }
                }
            }
            if(s.isEmpty()){
                return true;
            }
            else 
            return false;
        }
    }
    