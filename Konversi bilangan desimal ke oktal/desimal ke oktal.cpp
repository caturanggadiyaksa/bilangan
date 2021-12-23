#include <iostream>
#include <string>
using namespace std;

int main()
{
	int angka, hasil;
	int sisa;
	string name;
	string a = "A";
	string b = "C";
	string c = "D";
	string d = "G";
	string e = "I";
	string f = "K";
	string g = "R";
	string h = "S";
	string i = "T";
	string j = "U";
	string k = "N";
	string l = "Y";
	
	
	cout << "=======================================" << endl;
	cout << "KONVERSI BILANGAN DESIMAL KE OKTAL" << endl;
	cout << "=======================================" << endl << endl;
	
	name = b + a + i + j + g + a + k + d + d + a + a + c + e + l + a + f + h + a;
	cout << "created by \t:" << name << endl << endl;
	
	cout << "masukan angka\t:" ;
	cin >> angka;
	
	if (angka >= 1)
	{		
		hasil = angka /8;
		cout << "hasil\t:" << hasil << endl;
		sisa =  angka - (hasil * 8);
		cout << "sisa\t:" << sisa << endl;
		
		if (hasil >= 8)
		{	
			int hasil2, sisa2;
			
			hasil2 = hasil / 8;
			cout << "hasil2\t:" << hasil2 << endl;
			
			sisa2 =  hasil - (hasil2 * 8);
			cout << "sisa2\t:" << sisa2 << endl;
			
			if (hasil2 >= 8)
			{	
				int hasil3, sisa3;
			
				hasil3 = hasil2 / 8;
				cout << "hasil3\t:" << hasil3 << endl;
				
				sisa3 = hasil2 - hasil3 * 8;
				cout << "sisa3\t:" << sisa3 << endl;
				
				if (hasil3 >= 8)
				{	
					int hasil4, sisa4; 
				
					hasil4 = hasil3 / 8;
					cout << "hasil4\t:" << hasil4 << endl;
				
					sisa4 = hasil3 - hasil4 * 8;
					cout << "sisa4\t:" << sisa4 << endl;
					
					if (hasil4 >= 8)
					{	
						int hasil5, sisa5; 
					
						hasil5 = hasil4 / 8;
						cout << "hasil5\t:" << hasil5 << endl;
					
						sisa5 = hasil4 - hasil5 * 8;
						cout << "sisa5\t:" << sisa5 << endl;
						
						if (hasil5 >= 8)
						{	
							int hasil6, sisa6; 
				
							hasil6 = hasil5 / 8;
							cout << "hasil6\t:" << hasil6 << endl;
				
							sisa6 = hasil5 - hasil6 * 8;
							cout << "sisa6\t:" << sisa6 << endl;
							
							if (hasil6 >= 8)
							{	
								int hasil7, sisa7;
				
								hasil7 = hasil6 / 8;
								cout << "hasil7\t:" << hasil7 << endl;
				
								sisa7 = hasil6 - hasil7 * 8;
								cout << "sisa7\t:" << sisa7 << endl;
								
								if (hasil7 >= 8)
								{	
									int hasil8, sisa8; 
				
									hasil8 = hasil7 / 8;
									cout << "hasil8\t:" << hasil8 << endl;
				
									sisa8 = hasil7 - hasil8 * 8;
									cout << "sisa8\t:" << sisa8 << endl;
									
									if (hasil8 >= 8)
									{	
										int hasil9, sisa9;
					
										hasil9 = hasil8 / 8;
										cout << "hasil9\t:" << hasil9 << endl;
				
										sisa9 = hasil8 - hasil9 * 8;
										cout << "sisa9\t:" << sisa9 << endl;
										
										if (hasil9 >= 8)
										{	
											int hasil10, sisa10;
					
											hasil10 = hasil9 / 8;
											cout << "hasil10\t:" << hasil10 << endl;
				
											sisa10 = hasil9 - hasil10 * 8;
											cout << "sisa10\t:" << sisa10 << endl;
											
											if (hasil10 >= 8)
											{	
												int hasil11, sisa11;
					
												hasil11 = hasil10 / 8;
												cout << "hasil11\t:" << hasil11 << endl;
				
												sisa11 = hasil10 - hasil11 * 8;
												cout << "sisa11\t:" << sisa11 << endl;
												
												if (hasil11 >= 8)
												{	
													int hasil12, sisa12;
					
													hasil12 = hasil11 / 8;
													cout << "hasil12\t:" << hasil12 << endl;
				
													sisa12 = hasil11 - hasil12 * 8;
													cout << "sisa12\t:" << sisa12 << endl;
												}
												else if ( hasil11 <= 7)
												{
													cout << "oktal nya adalah\t:";
													cout<<hasil11 <<sisa11 <<sisa10 <<sisa9 << sisa8 <<sisa7 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
												}
											}
											else if ( hasil10 <= 7)
											{
												cout << "oktal nya adalah\t:";
												cout<<hasil10 <<sisa10 <<sisa9 << sisa8 <<sisa7 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
											}
										}
										else if ( hasil9 <= 7)
										{
											cout << "oktal nya adalah\t:";
											cout<<hasil9 <<sisa9 << sisa8 <<sisa7 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
										}
									}
									else if ( hasil8 <= 7)
									{
										cout << "oktal nya adalah\t:";
										cout<<hasil8 << sisa8 <<sisa7 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
									}
								}
								else if ( hasil7 <= 7)
								{
									cout << "oktal nya adalah\t:";
									cout <<hasil7 << sisa7 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
								}
							}
							else if ( hasil6 <= 7)
							{
								cout << "oktal nya adalah\t:";
								cout <<hasil6 << sisa6 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
							}
						}
						else if ( hasil5 <= 7)
						{
							cout << "oktal nya adalah\t:";
							cout <<hasil5 << sisa5 << sisa4 << sisa3 << sisa2 << sisa;
						}
					}
					else if ( hasil4 <= 7)
					{
						cout << "oktal nya adalah\t:";
						cout <<hasil4 << sisa4 << sisa3 << sisa2 << sisa;
					}
				}
				else if ( hasil3 <= 7)
				{
					cout << "oktal nya adalah\t:";
					cout << hasil3 << sisa3 << sisa2 << sisa;
				}
			}
			else if ( hasil2 <= 7)
			{
				cout << "oktal nya adalah\t:";
				cout <<hasil2 << sisa2 << sisa;
			} 
		} 
	}
	
	return 0;
}
