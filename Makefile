# location of the Python header files
 
PYTHON_VERSION = 3.6
PYTHON_INCLUDE = /usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/include/python3.6m/
PYTHON_LIB = /usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/lib/python3.6/config-3.6m-darwin

# location of the Boost Python include files and library
BOOST_INC =/usr/local/include/boost
BOOST_LIB =/usr/local/Cellar/boost-python/1.65.1/lib/ 
 
TARGET = pyajplib
 
$(TARGET).so: $(TARGET).o
	g++ -shared -Wl $(TARGET).o -L$(BOOST_LIB) -lboost_python3 -L$(PYTHON_LIB) -lpython$(PYTHON_VERSION) -o $(TARGET).so
 
$(TARGET).o: $(TARGET).C
	g++ -I$(PYTHON_INCLUDE) -I$(BOOST_INC) -fPIC -c $(TARGET).C
