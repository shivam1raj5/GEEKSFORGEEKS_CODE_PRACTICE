//{ Driver Code Starts
//Initial Template for Java

import java.io.*;


class Number_of_Subarrays_of_0{
	public static void main(String [] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int test = Integer.parseInt(br.readLine());
		while(test-- > 0) {
			int N = Integer.parseInt(br.readLine());
			int [] arr = new int[N];
			String [] str = br.readLine().trim().split(" ");
			for(int i= 0; i < N; i++)
				arr[i] = Integer.parseInt(str[i]);
			Solution obj = new Solution();
			System.out.println(obj.no_of_subarrays(N, arr));
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution{
	long no_of_subarrays(int n, int [] arr) {
		//Write your code here
		long d=0,a=0;
		for(int i=0;i<n;i++){
		    if(arr[i]==0){
		        d++;
		    }
		    else{
		        long y=(d*(d+1))/2;
		        a+=y;
		        d=0;
		    }
		}
		if(d!=0){
		   long y=(d*(d+1))/2;
		        a+=y; 
		}
		return a;
	}
}
