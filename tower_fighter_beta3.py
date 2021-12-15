from datetime import datetime
now = datetime.now()
current_time = now.strftime("%H:%M:%S")
print("Current time =", current_time)

fist_damage = "2"
monstera = "unknown"
player_health = "100"

import random
s = random.randrange(3, 0, -1)
if s == 1:
    monstera = str("troll")
if s == 2:
    monstera = str("golem")
if s == 3:
    monstera = str("lihzahrd")
monster1 = random.randrange(s)

print("As you stand before it, you feel the essence of its menacing residents. You ready yourself to fight. ")
print(" The Tower of the Cosmics ")
print("           Enter?         ")
print("         ( y / n )        ")
n = input("             ")
if n == "y":
    print("You walk in the tower and ascend a set of stairs")
    floor = "1"
    print("You step away from the staircase and are immediately attacked by a " + str(monstera))
