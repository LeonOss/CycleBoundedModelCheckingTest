#!/usr/bin/env python

import os

RESULTS_REL_PATH = "./results/"

timesPerTechnique = dict()
testname = dict()

def timeStrToSec(line):
	minStr = line[4:line.find("m")]
	mins = int(minStr)
	secStr = line[line.find("m")+1:line.rfind("s")]
	secs = float(secStr.replace(',','.'))
	return mins*60+secs

def getResultFiles():
	resultFiles = [f for f in os.listdir(RESULTS_REL_PATH) if os.path.isfile(os.path.join(RESULTS_REL_PATH,f))]
	return resultFiles

def parseResultFile(fileName):
	seconds = list()
	nametest = list()
	with open(os.path.join(RESULTS_REL_PATH,fileName), 'r') as f:
		while True:
			line = f.readline()
			if line=="":
				break;
			elif "Aborted" in line or "Killed" in line:
				seconds.append(4000)
				while not ("=" in f.readline()):
					pass
			elif line.startswith("user"):
				usrCpuSec = timeStrToSec(line);
				sysCpuSec = timeStrToSec(f.readline());
				compSec = usrCpuSec+sysCpuSec
				seconds.append(str(name) + ', '+ str(compSec))
			elif line.startswith("Checking"):
				nametest.append(line[10:50].replace('_','').replace(':',''))
				name = line[10:50].replace('_','').replace(':','')
	techniqueName = fileName[:-9].replace('_','\_')
	timesPerTechnique[techniqueName] = seconds
	testname[0] = nametest

def writeTex():
	with open('data2.tex', 'w') as f:
		testCount=0
		globCount=0
		dataStr=''
		for test in testname[0]:
			testCount+=1
			globCount+=1
			if testCount==4:
				dataStr += '\\begin{figure} \n\\begin{tikzpicture} \n\\begin{axis} [legend style = {at={(0,1)}, anchor = south west, nodes = right}, ybar, x tick label style={rotate=90}, enlargelimits=0.15,'
				dataStr += makeSymxCoo(globCount-testCount,globCount)
				dataStr += makeXtick(globCount-testCount,globCount)
				dataStr += makeCoord(globCount-testCount,globCount)
				dataStr +='\n\end{axis} \n\end{tikzpicture}\n\end{figure}\n'	
				testCount=0
		if testCount != 0:
			dataStr += '\n\\begin{figure}\n\\begin{tikzpicture} \n \\begin{axis} [legend style = {at={(0,1)}, anchor = south west, nodes = right}, ybar, x tick label style={rotate=90}, enlargelimits=0.15,'
			dataStr += makeSymxCoo(globCount-testCount,globCount)
			dataStr += makeXtick(globCount-testCount,globCount)
			dataStr += makeCoord(globCount-testCount,globCount)
			dataStr +='\n\end{axis} \n\end{tikzpicture}\n\end{figure}\n'
		print(dataStr)
		f.write(dataStr)


def makeSymxCoo(start,to):
	count=0
	dataStr = 'symbolic x coords={\n'
	for test in testname[0]:
		if count >= start:
			if count<to:
				dataStr += str(test)
				dataStr += ',\n'
		count+=1
	dataStr += '},'
	return dataStr

def makeXtick(start,to):
	count=0
	dataStr = '\n xtick={\n'
	for test in testname[0]:
		if count >= start:
			if count<to:
				dataStr += str(test)
				dataStr += ',\n'
		count+=1
	dataStr += '},]'
	return dataStr

def makeCoord(start,to):
	dataStr = ''
	for name in timesPerTechnique.keys():
		dataStr += '\n\\addplot coordinates {'
		i=1
		count = 0
		for sec in timesPerTechnique[name]:
			if count >= start:
				if count<to:
					dataStr += '('+str(sec)+') '
					i=i+1
			count+=1
		dataStr += '};\n'
		dataStr += '\\addlegendentry{'+name+'}'
	return dataStr


			
	
	

if __name__ == "__main__":
	resFileNames = getResultFiles()
	for resFile in resFileNames:
		parseResultFile(resFile)
	writeTex()
