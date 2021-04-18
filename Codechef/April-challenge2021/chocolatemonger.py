for _ in range(int(input())):
  n,x = list(map(int,input().split()))
  arr = list(map(int,input().split()))
  u = len(set(arr))
  r = n-u
  x-=r
  if x>0:
    u-=x
  print(u)# cook your dish here

