    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    void solve() 
    {
      int n, i, j;
     
      scanf("%d", &n);
     
      int m[n][n];
     
      for (i = 0; i < n; i++ ) {
        for (j = 0; j < n; j++) {
          scanf("%d", &m[i][j]);
        }
      }
      j = n - 1;
      for (i = 0; i < n; i++) {
        printf("%d", m[i][j]);
        j--;
        printf("\n");
      }
    }
     
    int main()
    {
      int t = 1;
      //scanf("%d", &t);
      while(t--) 
      {
        solve();
      }
      return 0;
    }