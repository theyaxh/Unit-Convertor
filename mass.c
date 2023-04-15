void kilogram();
void gram();
void milligram();
void pound();
void tonne();

void mass()
{
	char inval;
	printf("     #==========================================================#");
	printf("\n     #                  Choose the input unit:                  #");	
	printf("\n     #                      1. Kilogram                         #");
	printf("\n     #                      2. Gram                             #");
	printf("\n     #                      3. Milligram                        #");
	printf("\n     #                      4. Pound                            #");
	printf("\n     #                      5. Tonne                            #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &inval);
	} while (inval != '1' && inval != '2' && inval != '3' && inval != '4' && inval != '5');
	system("color 90");
	switch(inval)
	{
		case '1':
		{
			kilogram();
			break;
		}
		case '2':
		{
			gram();
			break;
		}
		case '3':
		{
			milligram();
			break;
		}
		case '4':
		{
			pound();
			break;
		}
		case '5':
		{
			tonne();
			break;
		}
	}
}
void kilogram()
{
	char outval;
	float kg, gm, mg, pou, ton;
	do
    {
		printf("     #==========================================================#");
        printf("\n            Enter the mass in kilograms from 1 to 1000: ");		
        kg=getInput();			
		printf("\n");
    }while(kg<1.000 || kg>1000.000);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");	
	printf("\n     #                      1. Gram                             #");
	printf("\n     #                      2. MIlligram                        #");
	printf("\n     #                      3. Pound                            #");
	printf("\n     #                      4. Tonne                            #");
	printf("\n     #                      5. All                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &outval);
	} while (outval != '1' && outval != '2' && outval != '3' && outval != '4' && outval != '5');
	
	switch(outval)
	{
		case '1':
		{
			gm=kg*1000;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Kilograms is %.3f in Grams|", kg, gm);
			end();
			break;
		}
		case '2':
		{
			mg=kg*1000000;
			printf("     #**********************************************************#");
			printf("\n         |%.3f Kilograms is %.3f in Milligrams|", kg, mg);
			end();
			break;
		}
		case '3':
		{
			pou=kg*2.20462;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Kilograms is %.3f in Pounds|", kg, pou);
			end();
			break;
		}
		case '4':
		{
			ton=kg/1000;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Kilograms is %.3f in Tonne|", kg, ton);
			end();
			break;
		}
		case '5':
		{
			gm=kg*1000;
			mg=kg*1000000;
			pou=kg*2.20462;
			ton=kg/1000;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Kilograms is %.3f in Grams|", kg, gm);
			printf("\n    |%.3f Kilograms is %.3f in Milligrams|", kg, mg);
			printf("\n    |%.3f Kilograms is %.3f.3 in Pounds|", kg, pou);
			printf("\n    |%.3f Kilograms is %.3f in Tonne|", kg, ton);
			end();
			break;
		}
	}
}
void gram()
{
	char outval;
	float kg, gm, mg, pou, ton;
	do
    {
		printf("     #==========================================================#");
        printf("\n            Enter the mass in grams from 1000 to 100000: ");		
        gm=getInput();
		printf("\n");			
    }while(gm<1000.000 || gm>100000.000);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");	
	printf("\n     #                      1. Kilogram                         #");
	printf("\n     #                      2. Milligram                        #");
	printf("\n     #                      3. Pound                            #");
	printf("\n     #                      4. Tonne                            #");
	printf("\n     #                      5. All                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &outval);
	} while (outval != '1' && outval != '2' && outval != '3' && outval != '4' && outval != '5');

	switch(outval)
	{
		case '1':
		{
			kg=gm/1000;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Grams is %.3f in Kilograms|", gm, kg);
			end();
			break;
		}
		case '2':
		{
			mg=gm*1000;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Grams is %.3f in Milligrams|", gm, mg);
			end();
			break;
		}
		case '3':
		{
			pou=gm/453.6;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Grams is %.3f in Pounds|", gm, pou);
			end();
			break;
		}
		case '4':
		{
			ton=gm/1000000;
			printf("     #**********************************************************#");
			printf("\n                |%.3f Grams is %.4f in Tonne|", gm, ton);
			end();
			break;
		}
		case '5':
		{
			kg=gm/1000;
			mg=gm*1000;
			pou=gm/453.6;
			ton=gm/1000000;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Grams is %.3f in Kilograms|", gm, kg);
			printf("\n    |%.3f Grams is %.3f in Milligrams|", gm, mg);
			printf("\n    |%.3f Grams is %.3f in Pounds|", gm, pou);
			printf("\n    |%.3f Grams is %.4f in Tonne|", gm, ton);
			end();
			break;
		}
	}
}
void milligram()
{
	char outval;
	float kg, gm, mg, pou, ton;
	do
    {
		printf("     #==========================================================#");
        printf("\n       Enter the mass in milligrams from 100000 to 10000000: ");		
        mg=getInput();			
		printf("\n");
    }while(mg<100000.000 || mg>10000000.000);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");	
	printf("\n     #                      1. Kilogram                         #");
	printf("\n     #                      2. Gram                             #");
	printf("\n     #                      3. Pound                            #");
	printf("\n     #                      4. Tonne                            #");
	printf("\n     #                      5. All                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &outval);
	} while (outval != '1' && outval != '2' && outval != '3' && outval != '4' && outval != '5');

	switch(outval)
	{
		case '1':
		{
			kg=mg/1000000;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Milligrams is %.3f in Kilograms|", mg, kg);
			end();
			break;
		}
		case '2':
		{
			gm=mg/1000;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Milligrams is %.3f in Grams|", mg, gm);
			end();
			break;
		}
		case '3':
		{
			pou=mg/453600;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Milligrams is %.3f in Pounds|", mg, pou);
			end();
			break;
		}
		case '4':
		{
			ton=mg/1000000000;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Milligrams is %.4f in Tonne|", mg, ton);
			end();
			break;
		}
		case '5':
		{
			kg=mg/1000000;
			gm=mg/1000;
			pou=mg/453600;
			ton=mg/1000000000;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Milligrams is %.3f in Kilograms|", mg, kg);
			printf("\n    |%.3f Milligrams is %.3f in Grams|", mg, gm);
			printf("\n    |%.3f Milligrams is %.3f in Pounds|", mg, pou);
			printf("\n    |%.3f Milligrams is %.4f in Tonne|", mg, ton);
			end();
			break;
		}
	}
}
void pound()
{
	char outval;
	float kg, gm, mg, pou, ton;
	do
    {
		printf("     #==========================================================#");
        printf("\n             Enter the mass in pounds from 10 to 1000: ");		
        pou=getInput();
		printf("\n");			
    }while(pou<10.000 || pou>1000.000);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");	
	printf("\n     #                      1. Kilogram                         #");
	printf("\n     #                      2. Gram                             #");
	printf("\n     #                      3. Milligram                        #");
	printf("\n     #                      4. Tonne                            #");
	printf("\n     #                      5. All                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &outval);
	} while (outval != '1' && outval != '2' && outval != '3' && outval != '4' && outval != '5');

	switch(outval)
	{
		case '1':
		{
			kg=pou/2.205;
			printf("     #**********************************************************#");
			printf("\n                |%.3f Pounds is %.3f in Kilograms|", pou, kg);
			end();
			break;
		}
		case '2':
		{
			gm=pou*453.6;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Pounds is %.3f Grams|", pou, gm);
			end();
			break;
		}
		case '3':
		{
			mg=pou*453600;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Pounds is %.3f in Milligrams|", pou, mg);
			end();
			break;
		}
		case '4':
		{
			ton=pou/2205;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Pounds is %.3f in Tonne|", pou, ton);
			end();
			break;
		}
		case '5':
		{
			kg=pou/2.205;
			gm=pou*453.6;
			mg=pou*453600;
			ton=pou/2205;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Pounds is %.3f in Kilograms|", pou, kg);
			printf("\n    |%.3f Pounds is %.3f Grams|", pou, gm);
			printf("\n    |%.3f Pounds is %.3f in Milligrams|", pou, mg);
			printf("\n    |%.3f Pounds is %.3f in Tonne|", pou, ton);
			end();
			break;
		}
	}
}
void tonne()
{
	char outval;
	float kg, gm, mg, pou, ton;
	do
    {
		printf("     #==========================================================#");
        printf("\n              Enter the mass in tonnes from 1 to 100: ");		
        ton=getInput();
		printf("\n");			
    }while(ton<1.000 || ton>100.000);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");	
	printf("\n     #                      1. Kilogram                         #");
	printf("\n     #                      2. Gram                             #");
	printf("\n     #                      3. Milligram                        #");
	printf("\n     #                      4. Pound                            #");
	printf("\n     #                      5. All                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 5: ");
		scanf("%s", &outval);
	} while (outval != '1' && outval != '2' && outval != '3' && outval != '4' && outval != '5');

	switch(outval)
	{
		case '1':
		{
			kg=ton*1000;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Tonnes is %.3f in Kilograms|",	ton, kg);
			end();
			break;
		}
		case '2':
		{
			gm=ton*1000000;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Tonnes is %.3f in Grams|", ton, gm);
			end();
			break;
		}
		case '3':
		{
			mg=ton*1000000000;
			printf("     #**********************************************************#");
			printf("\n         |%.3f Tonnes is %.3f in Milligrams|", ton, mg);
			end();
			break;
		}
		case '4':
		{
			pou=ton*2205;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Tonnes is %.3f in Pounds|", ton, pou);
			end();
			break;
		}
		case '5':
		{
			kg=ton*1000;
			gm=ton*1000000;
			mg=ton*1000000000;
			pou=ton*2205;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Tonnes is %.3f in Kilograms|",	ton, kg);
			printf("\n    |%.3f Tonnes is %.3f in Grams|", ton, gm);
			printf("\n    |%.3f Tonnes is %.3f in Milligrams|", ton, mg);
			printf("\n    |%.3f Tonnes is %.3f in Pounds|", ton, pou);
			end();
			break;
		}
	}
}