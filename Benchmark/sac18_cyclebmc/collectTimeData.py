#!/usr/bin/env python

import os

RESULTS_REL_PATH = "./results/"

timesPerTechnique = dict()

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
				seconds.append(usrCpuSec+sysCpuSec)
	techniqueName = fileName[:-9].replace('_','\_')
	timesPerTechnique[techniqueName] = seconds

def writeTex():
	with open('data.tex', 'w') as f:
		for name in timesPerTechnique.keys():
			dataStr = '\\addplot coordinates {\n'
			i=1
			for sec in sorted(timesPerTechnique[name]):
				dataStr += '('+str(i)+', '+str(sec)+') '
				i=i+1
			dataStr += '\n};\n'
			dataStr += '\\addlegendentry{'+name+'}'
			print(dataStr)
			f.write(dataStr)

if __name__ == "__main__":
	resFileNames = getResultFiles()
	for resFile in resFileNames:
		parseResultFile(resFile)
	writeTex()
