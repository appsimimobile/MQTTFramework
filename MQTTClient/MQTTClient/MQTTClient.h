//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

#import <Foundation/Foundation.h>

#import <ConnectInAppThirdParty/ConnectInAppThirdParty.h>
#import <ConnectInAppThirdParty/MQTTSession.h>
#import <ConnectInAppThirdParty/MQTTDecoder.h>
#import <ConnectInAppThirdParty/MQTTSessionLegacy.h>
#import <ConnectInAppThirdParty/MQTTProperties.h>
#import <ConnectInAppThirdParty/MQTTMessage.h>
#import <ConnectInAppThirdParty/MQTTTransport.h>
#import <ConnectInAppThirdParty/MQTTCFSocketTransport.h>
#import <ConnectInAppThirdParty/MQTTCoreDataPersistence.h>
#import <ConnectInAppThirdParty/MQTTSSLSecurityPolicyTransport.h>
#import <ConnectInAppThirdParty/MQTTLog.h>

#if __has_include(<MQTTClient/MQTTSessionManager.h>)
#import <MQTTClient/MQTTSessionManager.h>
#endif

#if __has_include(<MQTTClient/MQTTWebsocketTransport.h>)
#import <MQTTClient/MQTTWebsocketTransport.h>
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];

