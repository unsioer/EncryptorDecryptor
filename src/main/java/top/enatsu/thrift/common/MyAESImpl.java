package top.enatsu.thrift.common;

import org.apache.thrift.TException;
import top.enatsu.MyAES;

public class MyAESImpl implements MyAESService.Iface {
    @Override
    public String AESEncode(String encodeRules, String content) throws TException {
        return MyAES.AESEncode(encodeRules, content);
    }

    @Override
    public String AESDecode(String encodeRules, String content) throws TException {
        return MyAES.AESDecode(encodeRules, content);
    }
}
