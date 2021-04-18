for _ in range(int(input())):
  n,trpm = list(map(int,input().split()))
  a = list(map(int,input().split()))
  b = list(map(int,input().split()))
  ct,mt=b[0],b[0]
  for i in range(1,n):
    ct = ct - trpm*(a[i]-a[i-1])
    ct = max(ct,0)+b[i]
    mt = max(mt,ct)
  print(mt)
