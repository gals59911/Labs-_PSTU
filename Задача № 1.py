import itertools
print('Введите трехзначное число')
chislo=int(input())
a=0
b=0
c=0
F=0
while (chislo<100) or (chislo>999)==1:
    print('Введите новое трехзначное число:')
    chislo=int(input())
else:
    a=chislo%10
    chislo=chislo//10
    b=chislo%10
    c=chislo//10
    while F==0:
        if (a==b) or (b==c) or (a==c)==1:
            print('Введите новое трехзначное число:')
            chislo=int(input())
            a=chislo%10
            chislo=chislo//10
            b=chislo%10
            c=chislo//10  
        else:
            spisok=[a,b,c]
            spisok.sort(reverse=True)
            print('Максимальная комбинация:',spisok)
            com=itertools.permutations(spisok)
            for coms in com:
                print('Комбинация:',coms)
            break

            
    
  
            
        
        
        
        
            
            
                
    
            
    
    
    
    
     

    
