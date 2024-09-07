n=int(input())
for i in range(1,n+1):
 for j in range(1,26*n+1):
  if j<=i:
   print(j,end=" ")
  elif j>=2*n+1-i:
   print(2*n-j+1,end=" ")
  else: print("  ",end="")
 print("")