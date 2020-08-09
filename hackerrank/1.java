class hello{

public static void main(String args[]){
int a[]={1,2,2,1,1,1};
BalancedPartition b=new BalancedPartition();
System.out.println(b.findBalancePartition(a));
}

}

/**
 * Created by sangar on 25.11.18.
 */ class BalancedPartition {
    public int findBalancePartition(int[] a){
 
        // Calculate sum of all the elements in set 
        int S = 0;
        for (int i=0; i<a.length; i++)
            S += a[i];
 
        boolean T[][] = new boolean[a.length + 1][S + 1];
 
        /* Initialize the first column as true. 
            0 sum is possible with all elements. 
        */
        for (int i=0; i<=a.length; i++)
            T[i][0] = true;
 
        /*  Initialize top row, except dp[0][0], 
            as false. With 0 elements, no other 
            sum except 0 is possible
        */
        for (int i=1; i<=S; i++)
            T[0][i] = false;
 
         
        for (int i = 1; i <= a.length; i++) {
            for (int j = 1; j <= S; j++) {
                // If ith element is excluded 
                T[i][j] = T[i - 1][j];
 
                // If ith element is included 
                if (a[i - 1] <= j)
                    T[i][j] |= T[i - 1][j - a[i - 1]];
            }
        }
 
        // Initialize difference of two sums. 
        int diff = Integer.MAX_VALUE;
 
        for (int j = S/2; j >= 0; j--) {
            // Find the 
            if (T[a.length][j] == true)
            {
                diff = S - 2 * j;
                break;
            }
        }
        return diff;
    }
}