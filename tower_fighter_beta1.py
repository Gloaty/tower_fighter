from datetime import datetime
now = datetime.now()
current_time = now.strftime("%H:%M:%S")
print("Current time =", current_time)

s = str(range("troll", "golem", "lizahrd"))
from numpy import random
monster1 = random.randrange(s)

fist_damage = "1"
print("As you stand before it, you feel the essence of its menacing residents. You ready to fight. ")
print(" The Tower of the Cosmics ")
print("           Enter?         ")
print("         ( y / n )        ")
n = input("             ")
if n == "y":
    print("You walk in the tower and ascend a set of stairs")
    floor = "1"
    print("You step away from the staircase and are immediately attacked by a " + monster1)