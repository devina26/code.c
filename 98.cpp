#include <stdio.h>
    int main()
    {
    	float bs,hra,da,cv,incentive,bonus,sale=110000,ts;
    		if (sale>=100000)
    		{
    			bs=3000;
    			hra=20*bs/100;
    			da=110*bs/100;
    			cv=500;
    			incentive=sale*10/100;
    			bonus=500;
			}
			else{
				bs=3000;
    			hra=20*bs/100;
    			da=110*bs/100;
    			cv=500;
    			incentive=sale*5/100;
    			bonus=500;
			}
			ts=bs+hra+da+cv+incentive+bonus;
			printf("\n %.2f",ts);
			return 0;
    }
