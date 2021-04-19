import jpype
import os

if __name__ == '__main__':
    jvmPath = jpype.getDefaultJVMPath()
    jpype.startJVM(
        jvmPath, "-ea", "-Djava.class.path=%s" %
        ('../out/artifacts/EncryptorDecryptor_jar/EncryptorDecryptor.jar'))
    MyAES = jpype.JClass("top.enatsu.MyAES")
    while True:
        command = input('Input command (e or d): ')
        if command == 'e':
            encodeRules = input()
            content = input()
            print('Encode result:', MyAES.AESEncode(encodeRules, content))
            print('Decode result:', MyAES.AESDecode(encodeRules, MyAES.AESEncode(encodeRules, content)))
        elif command == 'd':
            encodeRules = input()
            content = input()
            print('Decode result:', MyAES.AESDecode(encodeRules, content))
            print('Encode result:', MyAES.AESEncode(encodeRules, MyAES.AESDecode(encodeRules, content)))
        elif command == 'q':
            break
        else:
            print('Unknown command')
    jpype.shutdownJVM()
