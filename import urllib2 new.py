import urllib2

req = urllib2.Request('http://blog.csdn.net/cqcre')
try:
	urllib2.urlopen(req)
except urllib2.HTTPError, e:
	print e.code
except urllib2.HTTPError, e:
	print e.reason
else:
	print "OK"
	f = open("text.txt",'wb')
f.write(result)
f.close()