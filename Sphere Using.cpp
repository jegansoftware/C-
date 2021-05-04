#include<iostream>
#include<cmath>
using namespace std;

class spherearea
{
	private:
	 float radius,volume,area;
	
	public:
		
		float value(float r)
		{
		 	radius=r;
			volume=4*22/7*pow(r,3)/3;
			area=4*22/7*pow(r,2);
		}
		
				
		

};

int main()
{
spherearea love;
int r;
r=sand()%10+1;

love.value(r);
}

