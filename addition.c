#include<stdio.h>


//Gharakhalcha Dukaan
int Addition(int N1,int N2)   //Function Definition
{ //Block Chi Survat
	int ans=0;                //Local Variable of Addition Function
	ans=N1+N2;                //Addition Done by ALU(Arithmetic Logic Unit)
	
	return ans;               //Jyane call kela tyala value dya
}//Block cha shewat

void adks()
{
	

}


//Apla Ghar
int main()                    //Ithun Program Run Hoto
{//Block chi survat
	int A=10,B=20,C=0;        //Local variables of main function
	
	//C mhanje rikami function
	C=Addition(A,B);          //Function Call
	
	printf("%d",C);           //gharchyann bolun dhakvaycha
	
	return 0;                 //Successfully Terminated
	
}//block cha shewat
