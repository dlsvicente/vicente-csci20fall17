 #include <iostream> 
 using namespace std;
 
 int main()
 {
    
     int birth_rate = 60 * 60 * 24 * 365 / 8; 
     int death_rate = 60 * 60 * 24 * 365 / 12;
     int migrant_rate = 60 * 60 * 24 * 365 / 33;
     int net_gain = migrant_rate + birth_rate - death_rate;
     int cur_population = 325365189;
     int cur_year = 2017;
     int year_chosen = 0;
     
     cout<< "Choose # of years:";
       cin >> year_chosen;
    int future_year = cur_year + year_chosen;
     int future_year_population = cur_population + net_gain * year_chosen;
     
     cout << "In the Year " << future_year << ", the population will be ";
     cout << future_year_population << " in the United States." << endl;
     
 }

