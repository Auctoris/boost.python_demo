#include "ajp2.h"

std::string multi_bob(int n)
{
   std::string name = "Bob";
   std::string r = "";
   for (int i=0;i<n;i++)
      r += name;
   return r;
}
