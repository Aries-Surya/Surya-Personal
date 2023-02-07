from datetime import date as date_n  
   
def number_of_days(date_1, date_2):  
    return (date_2 - date_1).days  
       
# Driver program  
date_1 = date_n(2022, 5, 21)  
date_2 = date_n(2022, 7, 14)  
print ("Number of Days between the given Dates are: ", number_of_days(date_1, date_2), "days")  