//
// MQTTSSLSecurityPolicyDecoder.h
// MQTTClient.framework
// 
// Copyright © 2013-2017, Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ConnectInAppThirdParty/MQTTSSLSecurityPolicy.h>
#import <ConnectInAppThirdParty/MQTTCFSocketDecoder.h>

@interface MQTTSSLSecurityPolicyDecoder : MQTTCFSocketDecoder

@property(strong, nonatomic) MQTTSSLSecurityPolicy *securityPolicy;
@property(strong, nonatomic) NSString *securityDomain;

@end


