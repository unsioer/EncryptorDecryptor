service MyAESService {
  string AESEncode(1:string encodeRules, 2:string content)
  string AESDecode(1:string encodeRules, 2:string content)
}