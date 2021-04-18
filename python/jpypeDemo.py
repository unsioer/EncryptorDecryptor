import jpype
import os

if __name__ == '__main__':
	jvmPath = jpype.getDefaultJVMPath()
	jpype.startJVM(jvmPath,"-ea", "-Djava.class.path=%s" % 
	('../out/artifacts/EncryptorDecryptor_jar/EncryptorDecryptor.jar'))
	MyAES=jpype.JClass("top.enatsu.MyAES")
	print(MyAES.AESEncode("xx","jjj"))
	print(MyAES.AESDecode("xx",MyAES.AESEncode("xx","jjj")))
	jpype.shutdownJVM()
