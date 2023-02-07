try:
    import datetime
    from unittest import result
    def getday(y,m,d,n):
        the_date = datetime.datetime(y,m,d)
        result_date = the_date + datetime.timedelta(days=n)
        d = result_date.strftime('the day comes on: "%y/%m/%d"')
        return d
    y,m,d,n = map(int, input("Enter the date in YYYY/MM/DD/Count:").split('/'))
    print(getday(y,m,d,n))
except:
    print("Please enter the valid date")