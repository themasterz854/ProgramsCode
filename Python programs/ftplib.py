from ftplib import *
ftp = FTP('domainname.com')
ftp.login(user='username',passwd='1234')
ftp.cwd('/specificdomain-or-location/')

def grabFile():
    filename= 'filename.txt'
    localfile= open(filename,'wb')
    ftp.retrbinary('RETR'+ filename, localfile.write,1024)
    ftp.quit()
    localfile.close()
    
def placeFile():
    filename = 'filename.txt'
    ftp.storbinary('STOR'+ filename,open(filename,'rb'))
    ftp.quit()
    

