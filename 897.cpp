#include <iostream>
#include <cmath>
#include <cstdio>



using namespace std;


int x = 1e7;

char prime[(int)1e7 + 1];

void seive()
{
	int i, j, limit;

	for( i = 2 ; i <= x ; i++) prime[i] = 1;/*let all array index be prime*/

	limit = sqrt(x);

	for( i = 2 ; i <= limit ; i++) /* finding for array index whether it is prime or not*/
	{
		if( prime[i] == 1 )

			for( j = i + i ; j <= x ; j += i) prime[j] = 0 ;
	}

}

int main()
{
//	freopen("in.txt", "r", stdin) ;		  /// file
//	freopen("out.txt", "w", stdout);
	seive();
	int num;
	while(true)
	{
		scanf("%d", &num);

		if(num==0) break;

		int temp, temp1;
		char str[8] = {0}, i = 0;
		int str_num = 0;

		bool flag = true;

		if( num < 1000)
		{
			if( num < 10 ) x = 10;
			else if ( num < 100 ) x = 100;
			else if (num < 1000) x = 1000;
			for( temp = num+1; temp <= x; temp++)
			{
				i = 0;
				temp1 = temp;
				while(temp1)
				{
					str[i] = temp1 % 10;
					temp1 /= 10;
					i++;
				}

//			printf("%d %d\n",temp, i);
				flag = true;

				if( i == 7)
				{
					for(int i0 = 0; i0 < 7 && flag; i0++)
					{
						for(int i1 = 0; i1 < 7 && flag; i1++)
						{
							if( i0 == i1) continue;
							for(int i2 = 0; i2 < 7 && flag; i2++)
							{
								if(i0==i2 || i1==i2) continue;
								for(int i3 = 0; i3 < 7 && flag; i3++)
								{
									if(i0 == i3 || i1==i3||i2==i3) continue;
									for(int i4 = 0; i4 < 7 && flag; i4++)
									{
										if(i0 == i4 || i1==i4||i2==i4|| i3 == i4) continue;
										for(int i5 = 0; i5 < 7 && flag; i5++)
										{
											if(i0 == i5 || i1==i5||i2==i5|| i3 ==i5|| i4==i5) continue;
											for(int i6 = 0; i6 < 7 && flag; i6++)
											{

												if(i0 == i6 || i1==i6||i2==i6|| i3 ==i6|| i4==i6 || i5 == i6) continue;

												str_num = 1000000*str[i0] +100000*str[i1]+10000*str[i2]+1000*str[i3]+100*str[i4]+10*str[i5]+str[i6];
												if(prime[str_num] == 0 ) flag = false;
											}
										}
									}
								}
							}
						}
					}
				}

				else if( i == 6)
				{
					for(int i0 = 0; i0 < 6 && flag; i0++)
					{
						for(int i1 = 0; i1 < 6 && flag; i1++)
						{
							if( i0 == i1) continue;
							for(int i2 = 0; i2 < 6 && flag; i2++)
							{
								if(i0==i2 || i1==i2) continue;
								for(int i3 = 0; i3 < 6 && flag; i3++)
								{
									if(i0 == i3 || i1==i3||i2==i3) continue;
									for(int i4 = 0; i4 < 6 && flag; i4++)
									{
										if(i0 == i4 || i1==i4||i2==i4|| i3 == i4) continue;
										for(int i5 = 0; i5 < 6 && flag; i5++)
										{
											if(i0 == i5 || i1==i5||i2==i5|| i3 ==i5|| i4==i5) continue;

											str_num = 100000*str[i0] +10000*str[i1]+1000*str[i2]+100*str[i3]+10*str[i4]+1*str[i5];
											if(prime[str_num] == 0 ) flag = false;

										}
									}
								}
							}
						}
					}
				}

				else if( i == 5)
				{
					for(int i0 = 0; i0 < 5 && flag; i0++)
					{
						for(int i1 = 0; i1 < 5 && flag; i1++)
						{
							if( i0 == i1) continue;
							for(int i2 = 0; i2 < 5 && flag; i2++)
							{
								if(i0==i2 || i1==i2) continue;
								for(int i3 = 0; i3 < 5 && flag; i3++)
								{
									if(i0 == i3 || i1==i3||i2==i3) continue;
									for(int i4 = 0; i4 < 5 && flag; i4++)
									{
										if(i0 == i4 || i1==i4||i2==i4|| i3 == i4) continue;

										str_num = 10000*str[i0] +1000*str[i1]+100*str[i2]+10*str[i3]+1*str[i4];
										if(prime[str_num] == 0 ) flag = false;

									}
								}
							}
						}
					}
				}

				else if( i == 4)
				{
					for(int i0 = 0; i0 < 4 && flag; i0++)
					{
						for(int i1 = 0; i1 < 4 && flag; i1++)
						{
							if( i0 == i1) continue;
							for(int i2 = 0; i2 < 4 && flag; i2++)
							{
								if(i0==i2 || i1==i2) continue;
								for(int i3 = 0; i3 < 4 && flag; i3++)
								{
									if(i0 == i3 || i1==i3||i2==i3) continue;

									str_num = 1000*str[i0] +100*str[i1]+10*str[i2]+1*str[i3];
									if(prime[str_num] == 0 ) flag = false;

								}
							}
						}
					}
				}

				else if( i == 3)
				{
					for(int i0 = 0; i0 < 3 && flag; i0++)
					{
						for(int i1 = 0; i1 < 3 && flag; i1++)
						{
							if( i0 == i1) continue;
							for(int i2 = 0; i2 < 3 && flag; i2++)
							{
								if(i0==i2 || i1==i2) continue;
								str_num = 100*str[i0] +10*str[i1]+1*str[i2];
								if(prime[str_num] == 0 ) flag = false;


							}
						}
					}
				}
				else if( i == 2)
				{
					for(int i0 = 0; i0 < 2 && flag; i0++)
					{
						for(int i1 = 0; i1 < 2 && flag; i1++)
						{
							if( i0 == i1) continue;
							str_num = 10*str[i0] +1*str[i1];
							if(prime[str_num] == 0 ) flag = false;


						}
					}
				}
				else
				{
					str_num = str[0];
					if(prime[str_num] == 0 ) flag = false;
				}
				if(flag == true ) break;
			}

		}

		else flag = false;

		if(flag) printf("%d\n", temp);
		else puts("0");

	}


	return 0;
}
