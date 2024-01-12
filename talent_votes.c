#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int				vote;
	int				tal;
	int				total_spent;
	double				tax_rate;
	int				total_votes;
	int				vote_cost;

	vote = atoi(argv[2]);
	tal = 1;
	total_spent = 0;
	total_votes = atoi(argv[1]);
	while (vote < total_votes)
	{
		vote_cost = tal * (1 + vote);  // Costo lineal
		if (vote_cost <= 150) 
		{
           		 tax_rate = 0;
        	}
		else if (vote_cost <= 500) 
		{
            		tax_rate = 2.5;
       		}
		else if (vote_cost <= 1000)
		{
			tax_rate = 5;
   		}
		else if (vote_cost <= 5000)
		{
            		tax_rate = 10;
       		} 
		else if (vote_cost <= 10000)
		{
           		tax_rate = 20;
        	}
		else
            		tax_rate = 25;
        int tax = (vote_cost * tax_rate) / 100;
        total_spent += vote_cost + tax;
        vote++;
    	}
   	printf("Are necesary %d $TAL to emmit %d votes\n", total_spent, total_votes);
    	return (0);
}
