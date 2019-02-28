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

def getTestTime(testName,inFileName):
	with open(os.path.join(RESULTS_REL_PATH,inFileName), 'r') as f:
		nextIsTestTime = False
		while True:
			line = f.readline()
			if line=="":
				break;
			elif line.startswith(testName):
				nextIsTestTime = True
			elif "Aborted" in line or "Killed" in line:
				if nextIsTestTime:
					return 4000
			elif line.startswith("user"):
				if nextIsTestTime:
					usrCpuSec = timeStrToSec(line);
					sysCpuSec = timeStrToSec(f.readline());
					return str(usrCpuSec+sysCpuSec)

def parseResultFile(fileName1, fileName2):
	res = ''
	testName = ''
	with open(os.path.join(RESULTS_REL_PATH,fileName1), 'r') as f:
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
				res += '('
				res += str(usrCpuSec+sysCpuSec) 
				res += ', '
				res += getTestTime(testName,fileName2)
				res += ') ['
				res += 'a'
				#res += testName.replace(' ','\_').replace('_','\_')
				res += ']\n'
				
			elif line.startswith("Checking"):
				testName = line[0:80]
		return res


def writeTex(fileName1, fileName2, coorStr):
	with open('scatter.tex', 'w') as f:
		dataStr = '\\begin{tikzpicture}\n\\begin{loglogaxis}[scatter/classes={a={mark=square*,blue}},'
		dataStr += '\nxlabel={'+fileName1.replace('_','\_')
		dataStr += '},\nylabel={'+fileName2.replace('_','\_')
		dataStr += '}]'
		dataStr += '\\addplot [scatter, only marks, scatter src=explicit symbolic] \ncoordinates{\n'
		dataStr += '%first Column '+fileName1+'\n'
		dataStr += '%secound Column '+fileName2+'\n'
		dataStr += coorStr
		dataStr += '\n};\n'
		dataStr += '\\addplot[color=gray,mark=none,domain=1:1800] {x};\n\\addplot[color=gray,mark=none,domain=1:180,dashed] {x*10};\n\\addplot[color=gray,mark=none,domain=10:1800,dashed] {x/10};'
		dataStr += '\\end{loglogaxis}\n\\end{tikzpicture}'
		print(dataStr)
		f.write(dataStr)

if __name__ == "__main__":
	resFileNames = getResultFiles()
	fileName1 = ''
	fileName2 = ''
	for resFile in resFileNames:
		if fileName1 == '':
			fileName1 = resFile
		elif fileName1 != '':
			fileName2 = resFile
	coorStr = parseResultFile(fileName1, fileName2)
	writeTex(fileName1, fileName2, coorStr)
