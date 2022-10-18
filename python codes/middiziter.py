print("Enter a 4-digit Number: ")
num = int(input())
t = num
numLen = 0

while t>0:
  numLen = numLen+1
  t = int(t/10)
chk = 0
if numLen==4:
  while num>0:
    rem = num%10
    if chk==1:
      midOne = rem
    elif chk==2:
      midTwo = rem
    num = int(num/10)
    chk = chk+1
  prod = midOne*midTwo
  print("\nProduct of Mid digits: ", prod)
else:
  print("\nIt's not a 4-digit number!")