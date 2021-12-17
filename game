import random

def game(comp,you):
    if comp=='stone':
        if you=='stone':
            return None
        elif you=='paper':
            return True
        elif you=='scissor':
            return False
    if comp=='paper':
        if you=='stone':
            return False
        elif you=='paper':
            return None
        elif you=='scissor':
            return True
    if comp=='scissor':
        if you=='stone':
            return True
        elif you=='paper':
            return False
        elif you=='scissor':
            return None


print("COMPUTER TURN: ")
f=random.randint(1,3)
if f==1:
    g='stone'
elif f==2:
    g='paper'
elif f==3:
    g='scissor'
print("PLAYER'S TURN : \n STONE \n PAPER \n SCISSOR ")
s=int(input("ENTER THE CHOICE "))
if s==1:
    d='stone'
elif s==2:
    d='paper'
elif s==3:
    d='scissor'
    
h=game(f,d)

if h == None:
    print("tie the match")
elif h:
    print("YOU WON THE MATCH")
else:
    print("YOU LOOSE THE MATCH ")
    

print("COMPUTER SELECTED ",g)
print("YOU SELECTED ",d)
