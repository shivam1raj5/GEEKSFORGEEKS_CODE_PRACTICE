//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class First_non_repeating_character_in_a_stream
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String A = br.readLine().trim();
            Solution ob = new Solution();
            String ans = ob.FirstNonRepeating(A);
            out.println(ans);
        }
        out.close();
    }
}

// } Driver Code Ends


class Solution
{
    public String FirstNonRepeating(String a)
    {
        // code here
         int freq[] = new int[26];
        Queue<Character>q = new LinkedList();
        StringBuilder s = new StringBuilder();
        for(char c:a.toCharArray()){
            if(freq[c-'a']==1) q.remove(c);
            else{
                freq[c-'a']=1;
                q.add(c);
            }
            s.append(q.peek()==null?'#':q.peek());
        }
        return s.toString();
    }
}