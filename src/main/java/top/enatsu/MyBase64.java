package top.enatsu;

import java.nio.charset.StandardCharsets;
import java.util.Base64;

public class MyBase64 {
    static String encode(String content) {
        Base64.Encoder encoder = Base64.getEncoder();
        byte[] contentByte = content.getBytes(StandardCharsets.UTF_8);
        return encoder.encodeToString(contentByte);
    }

    static String decode(String content) {
        Base64.Decoder decoder = Base64.getDecoder();
        byte[] contentByte = content.getBytes(StandardCharsets.UTF_8);
        return new String(decoder.decode(contentByte), StandardCharsets.UTF_8);
    }
}
