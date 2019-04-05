
#include <stdio.h>

float dis_cl_today;

float dis_cl_1day;


float  ftg_fct;



void dis_Cl_today(void)
{

	if(dis_cl_today - dis_cl_1day * ftg_fct / 100 > 0)
	{
		dis_cl_today = dis_cl_today - dis_cl_1day * ftg_fct / 100.0;
	}
	else dis_cl_today = 0;

}

int main()
{
	float hight;
	float cl_down;

	while(1)
	{
		scanf("%f %f %f %f", &hight, &dis_cl_1day, &cl_down, &ftg_fct);
		if(hight == 0) break;

		float lst_p ;

		unsigned short count_day = 0;

		dis_cl_today = dis_cl_1day;
		lst_p = 0;
		do
		{
			count_day++;




			if ( lst_p + dis_cl_today <= hight)
			{
				lst_p = lst_p + dis_cl_today - cl_down;
			}
			else lst_p = lst_p + dis_cl_today;
			dis_Cl_today( );
		}
		while(lst_p >= 0 && lst_p <= hight );


		if(lst_p <= 0) printf("failure on day %hu", count_day);
		else printf("success on day %hu", count_day);
		printf("%c", '\n');
	}
	return 0;
}
