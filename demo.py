import pyajplib

ajp = pyajplib.ajp("Apple", 0.79)
print("0x{:02X}".format(ajp.get_id()))

print("Counter = {}, price = {}".format(ajp.get_counter(), ajp.get_price()))

ajp.set_counter(5)
print("Counter = {}, price = {}".format(ajp.get_counter(), ajp.get_price()))

ajp.inc_counter()
print("Counter = {}, price = {}".format(ajp.get_counter(), ajp.get_price()))
