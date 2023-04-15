void kilometer();           //defining functions with no return value and no parameters
void meter();
void centimeter();
void millimeter();
void feet();
void inch();
void mile();
void end();
float getInput();
float getValuesAfterDecimalplace()
{
    int ch, a, b;
    float num=0.00, num1;
    for(;;)
    {    
        ch=getch();
        if(ch>=48 && ch<=57)
        {
            printf("%c",ch);
            num=num*10+(ch-48);
        }
        if(ch==13)
            break;
    }
    a=num/10;
    b=num/100;
    if(a==0)
    {
        num1=num/10;
    }
    else if(b==0)
    {
        num1=num/100;
    }    
    else
    {
        num1=num/1000;
    } 
    return num1;
}

float getInput()
{
    float num=0.000, num1=0.000, finalnum;
    int ch;
    for(;;)
    {    
        ch=getch();
        if(ch>=48 && ch<=57)
        {

            printf("%c", ch);
            num=num*10+(ch-48);
        }
        if(ch==46)
        {
            printf("%c", ch);
            num1=getValuesAfterDecimalplace();
            break;
        }
        if(ch==13)
        {
            break;
        }
    }
    finalnum=num+num1;   
    return finalnum;
}

void length()
{
	char choice2;		//defining character variable to take choice input
	printf("     #==========================================================#");
	printf("\n     #                  Choose the input unit:                  #");		//printing choices of input
	printf("\n     #                      1. Kilometer                        #");
	printf("\n     #                      2. Meter                            #");
	printf("\n     #                      3. Centimeter                       #");
	printf("\n     #                      4. Millimeter                       #");
	printf("\n     #                      5. Feet                             #");
	printf("\n     #                      6. Inch                             #");
	printf("\n     #                      7. Mile                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice2);
	} while (choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != '4' && choice2 != '5' && choice2 != '6' && choice2 != '7');
	//function calling according to the entered input choice
	system("color 30");
	switch(choice2)
	{
		case '1':
		{
			kilometer();
			break;
		}
		case '2':
		{
			meter();
			break;
		}
		case '3':
		{
			centimeter();
			break;
		}
		case '4':
		{
			millimeter();
			break;
		}
		case '5':
		{
			feet();
			break;
		}
		case '6':
		{
			inch();
			break;
		}
		case '7':
		{
			mile();
			break;
		}
	}
}

void kilometer()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n           Enter the length in kilometers from 1 to 1000: ");		
        km=getInput();			//scanning the value in kilometers with validation by calling getinput function
		printf("\n");
    }while(km<1.000 || km>1000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Meter                           #");
	printf("\n     #                       2. Centieter                       #");
	printf("\n     #                       3. Millimeter                      #");
	printf("\n     #                       4. Feet                            #");
	printf("\n     #                       5. Inch                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			m=km*1000;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Kilometers is %.3f in Meters|", km, m);
			end();
			break;
		}
		case '2':
		{
			cm=km*100000;
			printf("     #**********************************************************#");
			printf("\n        |%.3f Kilometers is %.3f in Centimeters|", km, cm);
			end();
			break;
		}
		case '3':
		{
			mm=km*1000000;
			printf("     #**********************************************************#");
			printf("\n        |%.3f Kilometers is %.3f in Millimeters|", km, mm);
			end();
			break;
		}
		case '4':
		{
			ft=km*3280.84;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Kilometers is %.3f in Feet|", km, ft);
			end();
			break;
		}
		case '5':
		{
			in=km*39370.1;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Kilometers is %.3f in Inches|", km, in);
			end();
			break;
		}
		case '6':
		{
			mi=km*0.621371;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Kilometers is %.3f in Miles|", km, mi);
			end();
			break;
		}
		case '7':
		{
			
			m=km*1000;
			cm=km*100000;
			mm=km*1000000;
			ft=km*3280.84;
			in=km*39370.1;
			mi=km*0.621371;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Kilometers is %.3f in Meters|", km, m);
			printf("\n          |%.3f Kilometers is %.3f in Centimeters|", km, cm);
			printf("\n          |%.3f Kilometers is %.3f in Millimeters|", km, mm);
			printf("\n          |%.3f Kilometers is %.3f in Feet|", km, ft);
			printf("\n          |%.3f Kilometers is %.3f in Inches|", km, in);
			printf("\n          |%.3f Kilometers is %.3f in Miles|", km, mi);
			end();
			break;
		}
	}	
}

void meter()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n           Enter the length in meters from 100 to 10000: ");
        m=getInput();			//scanning the value in meters with validation by calling getinput function
		printf("\n");
    }while(m<100.000 || m>10000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilomter                        #");
	printf("\n     #                       2. Centieter                       #");
	printf("\n     #                       3. Millimeter                      #");
	printf("\n     #                       4. Feet                            #");
	printf("\n     #                       5. Inch                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=m/1000;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Meters is %.3f in Kilometers|", m, km);
			end();
			break;
		}
		case '2':
		{
			cm=m*100;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Meters is %.3f in Centimeters|", m, cm);
			end();
			break;
		}
		case '3':
		{
			mm=m*1000;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Meters is %.3f in Millimeters|", m, mm);
			end();
			break;
		}
		case '4':
		{
			ft=m*3.28084;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Meters is %.3f in Feet|", m, ft);
			end();
			break;
		}
		case '5':
		{
			in=m*39.3701;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Meters is %.3f in Inches|", m, in);
			end();
			break;
		}
		case '6':
		{
			mi=m/1609;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Meters is %.3f in Miles|", m, mi);
			end();
			break;
		}
		case '7':
		{
			km=m/1000;
			cm=m*100;
			mm=m*1000;
			ft=m*3.28084;
			in=m*39.3701;
			mi=m/1609;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Meters is %.3f in Kilometers|", m, km);
			printf("\n    |%.3f Meters is %.3f in Centimeters|", m, cm);
			printf("\n    |%.3f Meters is %.3f in Millimeters|", m, mm);
			printf("\n    |%.3f Meters is %.3f in Feet|", m, ft);
			printf("\n    |%.3f Meters is %.3f in Inches|", m, in);
			printf("\n    |%.3f Meters is %.3f in Miles|", m, mi);
			end();
			break;
		}
	}	
}

void centimeter()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n       Enter the length in centimeters from 1000 to 1000000: ");		
        cm=getInput();			//scanning the value in centimeters with validation by calling getinput function
		printf("\n");
    }while(cm<1000.000 || cm>1000000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilometer                       #");
	printf("\n     #                       2. Meter                           #");
	printf("\n     #                       3. Millimeter                      #");
	printf("\n     #                       4. Feet                            #");
	printf("\n     #                       5. Inch                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=cm/100000;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Centimeters is %.3f in Kilometers|", cm, km);
			end();
			break;
		}
		case '2':
		{
			m=cm/100;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Centimeters is %.3f in Meters|", cm, m);
			end();
			break;
		}
		case '3':
		{
			mm=cm*10;
			printf("     #**********************************************************#");
			printf("\n        |%.3f Centimeters is %.3f in Millimeters|", cm, mm);
			end();
			break;
		}
		case '4':
		{
			ft=cm*0.0328084;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Centimeters is %.3f in Feet|", cm, ft);
			end();
			break;
		}
		case '5':
		{
			in=cm*0.393701;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Centimeters is %.3f in Inches|", cm, in);
			end();
			break;
		}
		case '6':
		{
			mi=cm/160900;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Centimeters is %.3f in Miles|", cm, mi);
			end();
			break;
		}
		case '7':
		{
			printf("     #**********************************************************#");
			km=cm/100000;
			m=cm/100;
			mm=cm*10;
			ft=cm*0.0328084;
			in=cm*0.393701;
			mi=cm/160900;
			printf("\n  |%.3f Centimeters is %.3f in Kilometers|", cm, km);
			printf("\n  |%.3f Centimeters is %.3f in Meters|", cm, m);
			printf("\n  |%.3f Centimeters is %.3f in Millimeters|", cm, mm);
			printf("\n  |%.3f Centimeters is %.3f in Feet|", cm, ft);
			printf("\n  |%.3f Centimeters is %.3f in Inches|", cm, in);
			printf("\n  |%.3f Centimeters is %.3f in Miles|", cm, mi);
			end();
			break;
		}
	}
}

void millimeter()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n       Enter the length in millimeters from 10000 to 1000000: ");		
        mm=getInput();			//scanning the value in millimeters with validation by calling getinput function
		printf("\n");
    }while(mm<10000.000 || mm>1000000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilometer                       #");
	printf("\n     #                       2. Meter                           #");
	printf("\n     #                       3. Centimeter                      #");
	printf("\n     #                       4. Feet                            #");
	printf("\n     #                       5. Inch                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');	
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=mm/1000000;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Millimeters is %.3f in Kilometers|", mm, km);
			end();
			break;
		}
		case '2':
		{
			m=mm/1000;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Millimeters is %.3f in Meters|", mm, m);
			end();
			break;
		}
		case '3':
		{
			cm=mm/10;
			printf("     #**********************************************************#");
			printf("\n       |%.3f Millimeters is %.3f in Centimeters|", mm, cm);
			end();
			break;
		}
		case '4':
		{
			ft=mm*0.00328084;
			printf("     #**********************************************************#");
			printf("\n            |%.3f Millimeters is %.3f in Feet|", mm, ft);
			end();
			break;
		}
		case '5':
		{
			in=mm*0.0393701;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Millimeters is %.3f in Inches|", mm, in);
			end();
			break;
		}
		case '6':
		{
			mi=mm/1609344;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Millimeters is %.3f in Miles|", mm, mi);
			end();
			break;
		}
		case '7':
		{
			km=mm/1000000;
			m=mm/1000;
			cm=mm/10;
			ft=mm*0.00328084;
			in=mm*0.0393701;
			mi=mm/1609344;
			printf("     #**********************************************************#");
			printf("\n  |%.3f Millimeters is %.3f in Kilometers|", mm, km);
			printf("\n  |%.3f Millimeters is %.3f in Meters|", mm, m);
			printf("\n  |%.3f Millimeters is %.3f in Centimeters|", mm, cm);
			printf("\n  |%.3f Millimeters is %.3f in Feet|", mm, ft);
			printf("\n  |%.3f Millimeters is %.3f in Inches|", mm, in);
			printf("\n  |%.3f Millimeters is %.3f in Miles|", mm, mi);
			end();
			break;
		}
	}
}

void feet()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n           Enter the length in feet from 1000 to 100000: ");		
        ft=getInput();			//scanning the value in feet with validation by calling getinput function
		printf("\n");
    }while(ft<1000.000 || ft>100000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilometer                       #");
	printf("\n     #                       2. Meter                           #");
	printf("\n     #                       3. Centimeter                      #");
	printf("\n     #                       4. Millimeter                      #");
	printf("\n     #                       5. Inch                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=ft/3281;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Feet is %.3f in Kilometers|", ft, km);
			end();
			break;
		}
		case '2':
		{
			m=ft/3.281;
			printf("     #**********************************************************#");
			printf("\n                |%.3f Feet is %.3f in Meters|", ft, m);
			end();
			break;
		}
		case '3':
		{
			cm=ft*30.48;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Feet is %.3f in Centimeters|", ft, cm);
			end();
			break;
		}
		case '4':
		{
			mm=ft*304.8;
			printf("     #**********************************************************#");
			printf("\n           |%.3f Feet is %.3f in Millimeters|", ft, mm);
			end();
			break;
		}
		case '5':
		{
			in=ft*12;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Feet is %.3f in Inches|", ft, in);
			end();
			break;
		}
		case '6':
		{
			mi=ft/5280;
			printf("     #**********************************************************#");
			printf("\n                 |%.3f Feet is %.3f in Miles|", ft, mi);
			end();
			break;
		}
		case '7':
		{
			km=ft/3281;
			m=ft/3.281;
			cm=ft*30.48;
			mm=ft*304.8;
			in=ft*12;
			mi=ft/5280;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Feet is %.3f in Kilometers|", ft, km);
			printf("\n    |%.3f Feet is %.3f in Meters|", ft, m);
			printf("\n    |%.3f Feet is %.3f in Centimeters|", ft, cm);
			printf("\n    |%.3f Feet is %.3f in Millimeters|", ft, mm);
			printf("\n    |%.3f Feet is %.3f in Inches|", ft, in);
			printf("\n    |%.3f Feet is %.3f in Miles|", ft, mi);
			end();
			break;
		}
	}
}

void inch()
{	
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n          Enter the length in inches from 1000 to 100000: ");		
        in=getInput();			//scanning the value in inches with validation by calling getinput function
		printf("\n");
    }while(in<1000.000 || in>100000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilometer                       #");
	printf("\n     #                       2. Meter                           #");
	printf("\n     #                       3. Centimeter                      #");
	printf("\n     #                       4. Millimeter                      #");
	printf("\n     #                       5. Feet                            #");
	printf("\n     #                       6. Mile                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=in/39370;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Inches is %.3f in Kilometers|", in, km);
			end();
			break;
		}
		case '2':
		{
			m=in/39.37;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Inches is %.3f in Meters|", in, m);
			end();
			break;
		}
		case '3':
		{
			cm=in*2.54;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Inches is %.3f in Centimeters|", in, cm);
			end();
			break;
		}
		case '4':
		{
			mm=in*25.4;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Inches is %.3f in Millimeters|", in, mm);
			end();
			break;
		}
		case '5':
		{
			ft=in/12;
			printf("     #**********************************************************#");
			printf("\n               |%.3f Inches is %.3f in Feet|", in, ft);
			end();
			break;
		}
		case '6':
		{
			mi=in/63360;
			printf("     #**********************************************************#");
			printf("\n                |%.3f Inches is %.3f in Miles|", in, mi);
			end();
			break;
		}
		case '7':
		{
			km=in/39370;
			m=in/39.37;
			cm=in*2.54;
			mm=in*25.4;
			ft=in/12;
			mi=in/63360;
			printf("     #**********************************************************#");
			printf("\n    |%.3f Inches is %.3f in Kilometers|", in, km);
			printf("\n    |%.3f Inches is %.3f in Meters|", in, m);
			printf("\n    |%.3f Inches is %.3f in Centimeters|", in, cm);
			printf("\n    |%.3f Inches is %.3f in Millimeters|", in, mm);
			printf("\n    |%.3f Inches is %.3f in Feet|", in, ft);
			printf("\n    |%.3f Inches is %.3f in Miles|", in, mi);
			end();
			break;
		}
	}
} 

void mile()
{
	char choice3;		//defining character variable to take choice input
	float km, m, cm, mm, ft, in, mi;		//defining float variables for input and output of actual values
	do
    {
		printf("     #==========================================================#");
        printf("\n             Enter the length in miles from 1 to 1000: ");		
        mi=getInput();			//scanning the value in miles with validation by calling getinput function
		printf("\n");
    }while(mi<1.000 || mi>1000.000);
	//printing choices of output
	printf("     #==========================================================#");
	printf("\n     #                  Choose the output unit:                 #");		
	printf("\n     #                       1. Kilometer                       #");
	printf("\n     #                       2. Meter                           #");
	printf("\n     #                       3. Centimeter                      #");
	printf("\n     #                       4. Millimeter                      #");
	printf("\n     #                       5. Feet                            #");
	printf("\n     #                       6. Inch                            #");
	printf("\n     #                       7. All                             #\n");
	do		//validation of choice
	{
		printf("     #==========================================================#");
		printf("\n             Please enter your choice from 1 to 7: ");
		scanf("%s", &choice3);
	} while (choice3 != '1' && choice3 != '2' && choice3 != '3' && choice3 != '4' && choice3 != '5' && choice3 != '6' && choice3 != '7');
	//calculating and printing output according to entered output choice
	switch(choice3)
	{
		case '1':
		{
			km=mi*1.60934;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Miles is %.3f in Kilometers|", mi, km);
			end();
			break;
		}
		case '2':
		{
			m=mi*1609.34;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Miles is %.3f in Meters|", mi, m);
			end();
			break;
		}
		case '3':
		{
			cm=mi*160934;
			printf("     #**********************************************************#");
			printf("\n          |%.3f Miles is %.3f in Centimeters|", mi, cm);
			end();
			break;
		}
		case '4':
		{
			mm=mi*1609344;
			printf("     #**********************************************************#");
			printf("\n        |%.3f Miles is %.3f in Millimeters|", mi, mm);
			end();
			break;
		}
		case '5':
		{
			ft=mi*5280;
			printf("     #**********************************************************#");
			printf("\n              |%.3f Miles is %.3f in Feet|", mi, ft);
			end();
			break;
		}
		case '6':
		{
			in=mi*63360;
			printf("     #**********************************************************#");
			printf("\n             |%.3f Miles is %.3f in Inches|", mi, in);
			end();
			break;
		}
		case '7':
		{
			km=mi*1.60934;
			m=mi*1609.34;
			cm=mi*160934;
			mm=mi*1609344;
			ft=mi*5280;
			in=mi*63360;
			printf("     #**********************************************************#");
			printf("\n   |%.3f Miles is %.3f in Kilometers|", mi, km);
			printf("\n   |%.3f Miles is %.3f in Meters|", mi, m);
			printf("\n   |%.3f Miles is %.3f in Centimeters|", mi, cm);
			printf("\n   |%.3f Miles is %.3f in Millimeters|", mi, mm);
			printf("\n   |%.3f Miles is %.3f in Feet|", mi, ft);
			printf("\n   |%.3f Miles is %.3f in Inches|", mi, in);
			end();
			break;
		}
	}
}

void end()
{
	system("color f0");
	printf("\n     #**********************************************************#");
	printf("\n     #         THANKYOU FOR USING OUR UNIT CONVERTOR ^_^        #");
	printf("\n     ############################################################");
}