import urllib2
import cookielib
cookie = cookielib.CookieJar()
handler = urllib2.HTTPCookieProsessor(cookie)
opener = urllib2.build_opener(handler)
respinse = opener.open('htt[:///www.baidu.com')
for item in cookle:
	print 'Name = '+item.name
	print 'Value = ' +item.value