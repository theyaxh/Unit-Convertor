void celsius();
void kelvin(); 
void fahrenheit();

void temperature()
{
	char ch2;
	printf("     #==========================================================#");
	printf("\n     #                  Choose the input unit:                  #");
	printf("\n     #                      1. Celsius                          #");
	printf("\n     #                      2. Kelvin                           #");
	printf("\n     #                      3. Fahrenheit                       #\n");
	do{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 3: ");
		scanf("%s", &ch2);
	} while (ch2 != '1' && ch2 != '2' && ch2 != '3');
	system("color e0");
	switch(ch2){
		case '1':
		{
			celsius();
			break;
		}
		case '2':
		{
			kelvin();
			break;
		}
		case '3':
		{
			fahrenheit();
			break;
		}
		
	}
}
void celsius()
{
	char ch3;
	float c, k, f;
	do
    {
		printf("     #==========================================================#");
        printf("\n          Enter the temperature in celsius from 0 to 1000: ");		
        c=getInput();
		printf("\n");			
    }while(c<0.00 || c>1000.00);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the ouput unit:                  #");
	printf("\n     #                      1. Kelvin                           #");
	printf("\n     #                      2. Fahrenheit                       #");
	printf("\n     #                      3. Both                             #\n");
	do{ 
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 3: ");
		scanf("%s", &ch3);
	} while (ch3 != '1' && ch3 != '2' && ch3 != '3');

	switch(ch3){
		case '1':
		{
			k=c+273.15;
			printf("     #**********************************************************#");
			printf("\n        |%.2f degrees Celsius is %.2f degrees in Kelvin|", c, k);
			end();
			break;
		}
		case '2':
		{
			f=(c*1.8)+32;
			printf("     #**********************************************************#");
			printf("\n       |%.2f degrees Celsius is %.2f degrees in Fahrenheit|", c, f);
			end();
			break;
		}
		case '3':
		{
			printf("     #**********************************************************#");
			k=c+273.15;
			f=(c*1.8)+32;
			printf("\n       |%.2f degrees Celsius is %.2f degrees in Kelvin|", c, k);
			printf("\n       |%.2f degrees Celsius is %.2f degrees in Fahrenheit|", c, f);
			end();
			break;
		}
	}
}
void kelvin()
{
	char ch3;
	float c, k, f;
	do
    {
		printf("     #==========================================================#");
        printf("\n          Enter the temperature in kelvin from 0 to 1000: ");		
        k=getInput();	
		printf("\n");		
    }while(k<0.00 || k>1000.00);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the ouput unit:                  #");
	printf("\n     #                      1. Celsius                          #");
	printf("\n     #                      2. Fahrenheit                       #");
	printf("\n     #                      3. Both                              #\n");
	do
	{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 3: ");
		scanf("%s", &ch3);
	} while (ch3 != '1' && ch3 != '2' && ch3 != '3');

	switch(ch3){
		case '1':
		{
			c=k-273.15;
			printf("     #**********************************************************#");
			printf("\n        |%.2f degrees Kelvin is %.2f degrees in Celsius|", k, c);
			end();
			break;
		}
		case '2':
		{
			f=(k-273.15)*1.8+32;
			printf("     #**********************************************************#");
			printf("\n       |%.2f degrees Kelvin is %.2f degrees in Fahrenheit|", k, f);
			end();
			break;
		}
		case '3':
		{
			printf("     #**********************************************************#");
			c=k-273.15;
			f=(k-273.15)*1.8+32;
			printf("\n        |%.2f degrees Kelvin is %.2f degrees in Celsius|", k, c);
			printf("\n        |%.2f degrees Kelvin is %.2f degrees in Fahrenheit|", k, f);
			end();
			break;
		}
	}
}
void fahrenheit()
{
	char ch3;
	float c, k, f;
	do
    {
		printf("     #==========================================================#");
        printf("\n        Enter the temperature in fahrenheit from 0 to 1000: ");		
        f=getInput();		
		printf("\n");	
    }while(f<0.00 || f>1000.00);
	printf("     #==========================================================#");
	printf("\n     #                  Choose the ouput unit:                  #");
	printf("\n     #                      1. Celsius                          #");
	printf("\n     #                      2. Kelvin                           #");
	printf("\n     #                      3. Both                             #\n");
	do{
		printf("     #==========================================================#");
		printf("\n                Please enter your choice from 1 to 3: ");
		scanf("%s", &ch3);
	} while (ch3 != '1' && ch3 != '2' && ch3 != '3');

	switch(ch3){
		case '1':
		{
			c=(f-32)*5/9;
			printf("     #**********************************************************#");
			printf("\n      |%.2f degrees Fahrenheit is %.2f degrees in Celsius|", f, c);
			end();
			break;
		}
		case '2':
		{
			k=(f-32)*5/9+273.15;
			printf("     #**********************************************************#");
			printf("\n     |%.2f degrees Fahrenheit is %.2f degrees in Kelvin|", f, k);
			end();
			break;
		}
		case '3':
		{
			printf("     #**********************************************************#");
			c=(f-32)*5/9;
			k=(f-32)*5/9+273.15;
			printf("\n      |%.2f degrees Fahrenheit is %.2f degrees in Celsius|", f, c);
			printf("\n      |%.2f degrees Fahrenheit is %.2f degrees in Kelvin|", f, k);
			end();
			break;
		}
	}
}