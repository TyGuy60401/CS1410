#!/usr/bin/env python3
import unittest
import os
import filecmp
import sys
def printDiff(yours, correct):
    os.system("echo ================ Your program output ============")
    os.system("cat "+yours)
    os.system("echo ================ The correct output =============")
    os.system("cat "+correct)
    os.system("echo =================================================")

class Test(unittest.TestCase):
    def test_a(self):
        print("=================== running python test a ====================")
        ret = os.system("python3 hw06.py < input.correct > tmp")
        self.assertEqual(ret,0) 
        os.system("awk '{print tolower($0)}' < tmp > hw06_test_py.out");
        ret = os.system("diff -w hw06_test_py.out hw06_test.correct")  
        if ret!=0:
            printDiff("hw06_test_py.out", "hw06_test.correct")
            self.assertEqual(ret,0, "Output does not match correct file") 
        print("=================== passed ====================")
    def test_b(self):
        print("=================== running python test b ====================")
        ret =os.system("python3 hw06.py < input2.correct > hw06_test_py.out")
        self.assertNotEqual(ret,0,"failed processing input2.correct") 
        print("=================== passed ====================")
    def test_c(self):
        print("=================== running python test c ====================")
        ret =os.system("python3 hw06.py < input3.correct > hw06_test_py.out")
        self.assertNotEqual(ret,0,"failed processing input3.correct") 
        print("=================== passed ====================")
    def test_d(self):
        print("=================== running python test d ====================")
        ret =os.system("python3 hw06.py < input4.correct > hw06_test_py.out")
        self.assertNotEqual(ret,0,"failed processing input4.correct") 
        print("=================== passed ====================")
    def test_e(self):
        print("=================== running python test e ====================")
        ret = os.system("python3 hw06.py < input5.correct > tmp")
        self.assertEqual(ret,0) 
        os.system("awk '{print tolower($0)}' < tmp > hw06_test_py.out");
        ret = os.system("diff -w hw06_test_py.out hw06_test5.correct")  
        if ret!=0:
            printDiff("hw06_test_py.out", "hw06_test5.correct")
            self.assertEqual(ret,0, "Output does not match correct file") 
        print("=================== passed ====================")

if __name__=='__main__':
   print("===============Python Test Start======================")
   try:
      unittest.main()
   except SystemExit as e:
      if (str(e)=='True'):
         print('\033[91m',"***************** Python Test Failed *****************",'\033[0m')
      else:
         print('\033[92m',"===============Python Test Passed ======================",'\033[0m')
