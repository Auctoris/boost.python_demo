import pyajplib

ajp = pyajplib.ajp("Apple", 0.79)
print("Item name: {}, id = 0x{:02X}, unit cost = {:.2f}".format(ajp.get_name(), ajp.get_id(), ajp.get_cost()))

print("Counter = {}, price = {:.2f}".format(ajp.get_counter(), ajp.get_price()))

ajp.set_counter(5)
print("Counter = {}, price = {:.2f}".format(ajp.get_counter(), ajp.get_price()))

ajp.inc_counter()
print("Counter = {}, price = {:.2f}".format(ajp.get_counter(), ajp.get_price()))

ajp2 = pyajplib.xyz("Orange", 0.79, 0.15)
print("Item name: {}, id = 0x{:02X}, unit cost = {:.2f}, discount = {:.0f}%"
    .format(ajp2.get_name(), ajp2.get_id(), ajp2.get_cost(), ajp2.get_discount() * 100))

print("Counter = {}, price = {:.2f}".format(ajp2.get_counter(), ajp2.get_price()))

ajp2.set_counter(5)
print("Counter = {}, price = {:.2f}".format(ajp2.get_counter(), ajp2.get_price()))

ajp2.inc_counter()
print("Counter = {}, price = {:.2f}".format(ajp2.get_counter(), ajp2.get_price()))
