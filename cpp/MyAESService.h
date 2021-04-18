/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MyAESService_H
#define MyAESService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "MyAESService_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class MyAESServiceIf {
 public:
  virtual ~MyAESServiceIf() {}
  virtual void AESEncode(std::string& _return, const std::string& encodeRules, const std::string& content) = 0;
  virtual void AESDecode(std::string& _return, const std::string& encodeRules, const std::string& content) = 0;
};

class MyAESServiceIfFactory {
 public:
  typedef MyAESServiceIf Handler;

  virtual ~MyAESServiceIfFactory() {}

  virtual MyAESServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MyAESServiceIf* /* handler */) = 0;
};

class MyAESServiceIfSingletonFactory : virtual public MyAESServiceIfFactory {
 public:
  MyAESServiceIfSingletonFactory(const ::std::shared_ptr<MyAESServiceIf>& iface) : iface_(iface) {}
  virtual ~MyAESServiceIfSingletonFactory() {}

  virtual MyAESServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(MyAESServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<MyAESServiceIf> iface_;
};

class MyAESServiceNull : virtual public MyAESServiceIf {
 public:
  virtual ~MyAESServiceNull() {}
  void AESEncode(std::string& /* _return */, const std::string& /* encodeRules */, const std::string& /* content */) {
    return;
  }
  void AESDecode(std::string& /* _return */, const std::string& /* encodeRules */, const std::string& /* content */) {
    return;
  }
};

typedef struct _MyAESService_AESEncode_args__isset {
  _MyAESService_AESEncode_args__isset() : encodeRules(false), content(false) {}
  bool encodeRules :1;
  bool content :1;
} _MyAESService_AESEncode_args__isset;

class MyAESService_AESEncode_args {
 public:

  MyAESService_AESEncode_args(const MyAESService_AESEncode_args&);
  MyAESService_AESEncode_args& operator=(const MyAESService_AESEncode_args&);
  MyAESService_AESEncode_args() : encodeRules(), content() {
  }

  virtual ~MyAESService_AESEncode_args() noexcept;
  std::string encodeRules;
  std::string content;

  _MyAESService_AESEncode_args__isset __isset;

  void __set_encodeRules(const std::string& val);

  void __set_content(const std::string& val);

  bool operator == (const MyAESService_AESEncode_args & rhs) const
  {
    if (!(encodeRules == rhs.encodeRules))
      return false;
    if (!(content == rhs.content))
      return false;
    return true;
  }
  bool operator != (const MyAESService_AESEncode_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyAESService_AESEncode_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MyAESService_AESEncode_pargs {
 public:


  virtual ~MyAESService_AESEncode_pargs() noexcept;
  const std::string* encodeRules;
  const std::string* content;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MyAESService_AESEncode_result__isset {
  _MyAESService_AESEncode_result__isset() : success(false) {}
  bool success :1;
} _MyAESService_AESEncode_result__isset;

class MyAESService_AESEncode_result {
 public:

  MyAESService_AESEncode_result(const MyAESService_AESEncode_result&);
  MyAESService_AESEncode_result& operator=(const MyAESService_AESEncode_result&);
  MyAESService_AESEncode_result() : success() {
  }

  virtual ~MyAESService_AESEncode_result() noexcept;
  std::string success;

  _MyAESService_AESEncode_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const MyAESService_AESEncode_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MyAESService_AESEncode_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyAESService_AESEncode_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MyAESService_AESEncode_presult__isset {
  _MyAESService_AESEncode_presult__isset() : success(false) {}
  bool success :1;
} _MyAESService_AESEncode_presult__isset;

class MyAESService_AESEncode_presult {
 public:


  virtual ~MyAESService_AESEncode_presult() noexcept;
  std::string* success;

  _MyAESService_AESEncode_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MyAESService_AESDecode_args__isset {
  _MyAESService_AESDecode_args__isset() : encodeRules(false), content(false) {}
  bool encodeRules :1;
  bool content :1;
} _MyAESService_AESDecode_args__isset;

class MyAESService_AESDecode_args {
 public:

  MyAESService_AESDecode_args(const MyAESService_AESDecode_args&);
  MyAESService_AESDecode_args& operator=(const MyAESService_AESDecode_args&);
  MyAESService_AESDecode_args() : encodeRules(), content() {
  }

  virtual ~MyAESService_AESDecode_args() noexcept;
  std::string encodeRules;
  std::string content;

  _MyAESService_AESDecode_args__isset __isset;

  void __set_encodeRules(const std::string& val);

  void __set_content(const std::string& val);

  bool operator == (const MyAESService_AESDecode_args & rhs) const
  {
    if (!(encodeRules == rhs.encodeRules))
      return false;
    if (!(content == rhs.content))
      return false;
    return true;
  }
  bool operator != (const MyAESService_AESDecode_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyAESService_AESDecode_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MyAESService_AESDecode_pargs {
 public:


  virtual ~MyAESService_AESDecode_pargs() noexcept;
  const std::string* encodeRules;
  const std::string* content;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MyAESService_AESDecode_result__isset {
  _MyAESService_AESDecode_result__isset() : success(false) {}
  bool success :1;
} _MyAESService_AESDecode_result__isset;

class MyAESService_AESDecode_result {
 public:

  MyAESService_AESDecode_result(const MyAESService_AESDecode_result&);
  MyAESService_AESDecode_result& operator=(const MyAESService_AESDecode_result&);
  MyAESService_AESDecode_result() : success() {
  }

  virtual ~MyAESService_AESDecode_result() noexcept;
  std::string success;

  _MyAESService_AESDecode_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const MyAESService_AESDecode_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MyAESService_AESDecode_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyAESService_AESDecode_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MyAESService_AESDecode_presult__isset {
  _MyAESService_AESDecode_presult__isset() : success(false) {}
  bool success :1;
} _MyAESService_AESDecode_presult__isset;

class MyAESService_AESDecode_presult {
 public:


  virtual ~MyAESService_AESDecode_presult() noexcept;
  std::string* success;

  _MyAESService_AESDecode_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MyAESServiceClient : virtual public MyAESServiceIf {
 public:
  MyAESServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  MyAESServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void AESEncode(std::string& _return, const std::string& encodeRules, const std::string& content);
  void send_AESEncode(const std::string& encodeRules, const std::string& content);
  void recv_AESEncode(std::string& _return);
  void AESDecode(std::string& _return, const std::string& encodeRules, const std::string& content);
  void send_AESDecode(const std::string& encodeRules, const std::string& content);
  void recv_AESDecode(std::string& _return);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MyAESServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<MyAESServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (MyAESServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_AESEncode(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AESDecode(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MyAESServiceProcessor(::std::shared_ptr<MyAESServiceIf> iface) :
    iface_(iface) {
    processMap_["AESEncode"] = &MyAESServiceProcessor::process_AESEncode;
    processMap_["AESDecode"] = &MyAESServiceProcessor::process_AESDecode;
  }

  virtual ~MyAESServiceProcessor() {}
};

class MyAESServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MyAESServiceProcessorFactory(const ::std::shared_ptr< MyAESServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< MyAESServiceIfFactory > handlerFactory_;
};

class MyAESServiceMultiface : virtual public MyAESServiceIf {
 public:
  MyAESServiceMultiface(std::vector<std::shared_ptr<MyAESServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MyAESServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<MyAESServiceIf> > ifaces_;
  MyAESServiceMultiface() {}
  void add(::std::shared_ptr<MyAESServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void AESEncode(std::string& _return, const std::string& encodeRules, const std::string& content) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AESEncode(_return, encodeRules, content);
    }
    ifaces_[i]->AESEncode(_return, encodeRules, content);
    return;
  }

  void AESDecode(std::string& _return, const std::string& encodeRules, const std::string& content) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AESDecode(_return, encodeRules, content);
    }
    ifaces_[i]->AESDecode(_return, encodeRules, content);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class MyAESServiceConcurrentClient : virtual public MyAESServiceIf {
 public:
  MyAESServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  MyAESServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void AESEncode(std::string& _return, const std::string& encodeRules, const std::string& content);
  int32_t send_AESEncode(const std::string& encodeRules, const std::string& content);
  void recv_AESEncode(std::string& _return, const int32_t seqid);
  void AESDecode(std::string& _return, const std::string& encodeRules, const std::string& content);
  int32_t send_AESDecode(const std::string& encodeRules, const std::string& content);
  void recv_AESDecode(std::string& _return, const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif