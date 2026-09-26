import os 
import glob

def cpp_snippet(filename, src_dir, dest_dir):

    file_input=open(src_dir,'r')
    file_output=open(dest_dir+filename+'.json','w')
    
    file_output.write('"' + filename + '"' + ' : {\n')
    file_output.write('		"prefix" : "' + filename + '",\n')
    file_output.write('		"body": [\n')

    for line in file_input:
        for i in range(len(line)):
            if line[i] == '\t': 
                s = list(line)
                s[i] = "    "
                line = "".join(s)
        file_output.write('			"' + line.rstrip() + '",\n')
    file_output.write('		],')
    file_output.write('		"description" : "' + filename + '"\n')
    file_output.write('	},\n')

if __name__ == '__main__':
    src_dir='/Users/tamoriyuuto/compepetive-programing/library/src/lib.txt'
    dest_dir='/Users/tamoriyuuto/compepetive-programing/library/snippet/'

    cpp_snippet('binary_search',src_dir, dest_dir)