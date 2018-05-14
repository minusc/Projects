import csv
import pubchempy as pcp
from pubchempy import Compound, get_compounds


with open("drug_list.csv","r") as f,open("outfile_fingerprints.csv",'w') as outfile:
    next(f) #skip the first line as it contains the title of the columns
    filewriter = csv.writer(outfile,delimiter='\t',quoting=csv.QUOTE_MINIMAL)
    filewriter.writerow(['CID', 'Binary Fingerprint'])
    for line in f:
        l = line.strip().split("\t") #strip the columns divided by tab or comma
        chemid, name = l
        cid = pcp.Compound.from_cid(chemid)
        filewriter.writerow([chemid,cid.cactvs_fingerprint]) #write the cid and fingerprint in an external file
