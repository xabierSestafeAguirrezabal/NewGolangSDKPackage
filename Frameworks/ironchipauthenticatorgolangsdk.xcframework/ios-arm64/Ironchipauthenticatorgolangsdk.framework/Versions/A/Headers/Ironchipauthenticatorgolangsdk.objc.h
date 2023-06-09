// Objective-C API for talking to fraud-golang-interface/platforms/mobile Go package.
//   gobind -lang=objc fraud-golang-interface/platforms/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Ironchipauthenticatorgolangsdk_H__
#define __Ironchipauthenticatorgolangsdk_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class IronchipauthenticatorgolangsdkAccess;
@class IronchipauthenticatorgolangsdkAccessIterator;
@class IronchipauthenticatorgolangsdkAuthorization;
@class IronchipauthenticatorgolangsdkAuthorizationIterator;
@class IronchipauthenticatorgolangsdkAuthorizedLBAuthSDKMobile;
@class IronchipauthenticatorgolangsdkEMSignals;
@class IronchipauthenticatorgolangsdkGEOSignal;
@class IronchipauthenticatorgolangsdkIDSConfiguration;
@class IronchipauthenticatorgolangsdkKey;
@class IronchipauthenticatorgolangsdkKeyIterator;
@class IronchipauthenticatorgolangsdkNotification;
@class IronchipauthenticatorgolangsdkOTP;
@class IronchipauthenticatorgolangsdkOTPIterator;
@class IronchipauthenticatorgolangsdkOTPMobileInitializer;
@class IronchipauthenticatorgolangsdkOTPMobileInterface;
@class IronchipauthenticatorgolangsdkOTPSJson;
@class IronchipauthenticatorgolangsdkOTPSecret;
@class IronchipauthenticatorgolangsdkSafezone;
@class IronchipauthenticatorgolangsdkSignals;
@class IronchipauthenticatorgolangsdkSkin;
@class IronchipauthenticatorgolangsdkUnauthorizedLBAuthSDKMobile;
@class IronchipauthenticatorgolangsdkUser;
@protocol IronchipauthenticatorgolangsdkChannelCallback;
@class IronchipauthenticatorgolangsdkChannelCallback;
@protocol IronchipauthenticatorgolangsdkNotificationCallback;
@class IronchipauthenticatorgolangsdkNotificationCallback;
@protocol IronchipauthenticatorgolangsdkScanner;
@class IronchipauthenticatorgolangsdkScanner;

@protocol IronchipauthenticatorgolangsdkChannelCallback <NSObject>
- (void)onError:(NSError* _Nullable)err;
- (void)onFinish;
@end

@protocol IronchipauthenticatorgolangsdkNotificationCallback <NSObject>
- (void)onError:(NSError* _Nullable)err;
- (void)onNotification:(IronchipauthenticatorgolangsdkNotification* _Nullable)notification;
@end

@protocol IronchipauthenticatorgolangsdkScanner <NSObject>
- (IronchipauthenticatorgolangsdkSafezone* _Nullable)getScanResult:(NSString* _Nullable)keyName isCreation:(BOOL)isCreation error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkAccess : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)service user:(NSString* _Nullable)user id_:(NSString* _Nullable)id_ specificLocation:(BOOL)specificLocation expirationTime:(int64_t)expirationTime;
// skipped field Access.Access with unsupported type: fraud-golang-interface/models.Access

- (int64_t)getExpirationTime;
- (NSString* _Nonnull)getID;
- (NSString* _Nonnull)getService;
- (BOOL)getSpecificLocation;
- (NSString* _Nonnull)getUser;
@end

@interface IronchipauthenticatorgolangsdkAccessIterator : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor AccessIterator.NewAccessIterator with unsupported parameter or return types

- (BOOL)hasNext;
- (IronchipauthenticatorgolangsdkAccess* _Nullable)next;
- (void)reset;
@end

@interface IronchipauthenticatorgolangsdkAuthorization : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)accessID externalServiceId:(NSString* _Nullable)externalServiceId state:(NSString* _Nullable)state expirationTime:(int64_t)expirationTime;
// skipped field Authorization.Authorization with unsupported type: fraud-golang-interface/models.Authorization

- (NSString* _Nonnull)getAccessID;
- (int64_t)getExpirationTime;
- (NSString* _Nonnull)getExternalServiceID;
- (NSString* _Nonnull)getState;
@end

@interface IronchipauthenticatorgolangsdkAuthorizationIterator : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor AuthorizationIterator.NewAuthorizationIterator with unsupported parameter or return types

- (BOOL)hasNext;
- (IronchipauthenticatorgolangsdkAuthorization* _Nullable)next;
- (void)reset;
@end

@interface IronchipauthenticatorgolangsdkAuthorizedLBAuthSDKMobile : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)host version:(NSString* _Nullable)version storagePath:(NSString* _Nullable)storagePath storageKey:(NSString* _Nullable)storageKey notificationURL:(NSString* _Nullable)notificationURL scannerInterface:(id<IronchipauthenticatorgolangsdkScanner> _Nullable)scannerInterface;
- (void)authorize:(NSString* _Nullable)accessID channelCallback:(id<IronchipauthenticatorgolangsdkChannelCallback> _Nullable)channelCallback;
- (void)createKey:(NSString* _Nullable)keyName channelCallback:(id<IronchipauthenticatorgolangsdkChannelCallback> _Nullable)channelCallback;
- (IronchipauthenticatorgolangsdkAccessIterator* _Nullable)getAccesses:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkAuthorizationIterator* _Nullable)getActiveAccesses:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkKeyIterator* _Nullable)getKeys:(NSError* _Nullable* _Nullable)error;
- (BOOL)getNotifications:(id<IronchipauthenticatorgolangsdkNotificationCallback> _Nullable)callback error:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkSkin* _Nullable)getSkin:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkUser* _Nullable)getUser:(NSError* _Nullable* _Nullable)error;
- (BOOL)initMutualTLS:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkIDSConfiguration* _Nullable)mobileGetIDSConfiguration:(NSError* _Nullable* _Nullable)error;
- (void)setDNS:(NSString* _Nullable)dnsIP protocol:(NSString* _Nullable)protocol;
- (BOOL)setProxy:(NSString* _Nullable)hostName port:(long)port error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkEMSignals : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init;
// skipped field EMSignals.TimeScanned with unsupported type: time.Time

- (BOOL)setCDMASignals:(IronchipauthenticatorgolangsdkSignals* _Nullable)signals error:(NSError* _Nullable* _Nullable)error;
- (BOOL)setGSMSignals:(IronchipauthenticatorgolangsdkSignals* _Nullable)signals error:(NSError* _Nullable* _Nullable)error;
- (BOOL)setLTESignals:(IronchipauthenticatorgolangsdkSignals* _Nullable)signals error:(NSError* _Nullable* _Nullable)error;
- (BOOL)setWCDMASignals:(IronchipauthenticatorgolangsdkSignals* _Nullable)signals error:(NSError* _Nullable* _Nullable)error;
- (BOOL)setWIFISignals:(IronchipauthenticatorgolangsdkSignals* _Nullable)signals error:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkSafezone* _Nullable)toSZ:(NSString* _Nullable)keyName error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkGEOSignal : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (void)setAltitude:(double)altitude;
- (void)setLatitude:(double)latitude;
- (void)setLongitude:(double)longitude;
- (IronchipauthenticatorgolangsdkSafezone* _Nullable)toSZ:(NSString* _Nullable)keyName isCreation:(BOOL)isCreation error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkIDSConfiguration : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (NSString* _Nonnull)getAPIKey;
- (NSString* _Nonnull)getHost;
@end

@interface IronchipauthenticatorgolangsdkKey : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)keyType name:(NSString* _Nullable)name;
// skipped field Key.Key with unsupported type: fraud-golang-interface/models.Key

- (NSString* _Nonnull)getKeyName;
- (NSString* _Nonnull)getKeyType;
@end

@interface IronchipauthenticatorgolangsdkKeyIterator : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor KeyIterator.NewKeyIterator with unsupported parameter or return types

- (BOOL)hasNext;
- (IronchipauthenticatorgolangsdkKey* _Nullable)next;
- (void)reset;
@end

@interface IronchipauthenticatorgolangsdkNotification : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSData* _Nullable data;
@end

@interface IronchipauthenticatorgolangsdkOTP : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)serviceID username:(NSString* _Nullable)username;
// skipped field OTP.OTP with unsupported type: fraud-golang-interface/models.OTP

- (NSString* _Nonnull)getServiceID;
- (NSString* _Nonnull)getUsername;
@end

@interface IronchipauthenticatorgolangsdkOTPIterator : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor OTPIterator.NewOTPIterator with unsupported parameter or return types

- (BOOL)hasNext;
- (IronchipauthenticatorgolangsdkOTP* _Nullable)next;
- (void)reset;
@end

@interface IronchipauthenticatorgolangsdkOTPMobileInitializer : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)path;
- (IronchipauthenticatorgolangsdkOTPMobileInterface* _Nullable)getOTPService;
- (NSString* _Nonnull)getToken;
@end

@interface IronchipauthenticatorgolangsdkOTPMobileInterface : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)path token:(NSString* _Nullable)token;
- (IronchipauthenticatorgolangsdkOTPSecret* _Nullable)generateOTPKey:(NSString* _Nullable)serviceID username:(NSString* _Nullable)username error:(NSError* _Nullable* _Nullable)error;
- (IronchipauthenticatorgolangsdkOTPIterator* _Nullable)getOTPs:(NSError* _Nullable* _Nullable)error;
- (BOOL)removeOTP:(NSString* _Nullable)serviceID username:(NSString* _Nullable)username error:(NSError* _Nullable* _Nullable)error;
- (BOOL)setOTP:(NSString* _Nullable)url error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkOTPSJson : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (NSString* _Nonnull)toJsonString;
@end

@interface IronchipauthenticatorgolangsdkOTPSecret : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field OTPSecret.OTPSecret with unsupported type: fraud-golang-interface/models.OTPSecret

- (NSString* _Nonnull)getCode;
- (int64_t)getTimeout;
@end

@interface IronchipauthenticatorgolangsdkSafezone : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped method Safezone.GetKeyI with unsupported parameter or return types

@end

@interface IronchipauthenticatorgolangsdkSignals : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)signalType;
// skipped field Signals.SignalType with unsupported type: git.kydom.net/ironchip/location_core_location_service/api/models.SignalType

// skipped field Signals.SignalsRecorded with unsupported type: []git.kydom.net/ironchip/location_core_location_service/api/models.Signal

- (long)getLenght;
- (BOOL)setSignal:(NSString* _Nullable)bssid rssi:(long)rssi error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkSkin : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field Skin.Skin with unsupported type: fraud-golang-interface/models.Skin

- (NSString* _Nonnull)getLaunchIcon;
- (NSString* _Nonnull)getLogoUrl;
- (NSString* _Nonnull)getMainColor;
- (NSString* _Nonnull)getNotiIcon;
- (NSString* _Nonnull)getSecondaryColor;
- (NSString* _Nonnull)getTrayIcon;
@end

@interface IronchipauthenticatorgolangsdkUnauthorizedLBAuthSDKMobile : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)platform host:(NSString* _Nullable)host version:(NSString* _Nullable)version path:(NSString* _Nullable)path;
- (BOOL)netw:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)register:(NSString* _Nullable)deviceName notificationID:(NSString* _Nullable)notificationID QRCode:(NSString* _Nullable)QRCode error:(NSError* _Nullable* _Nullable)error;
- (void)setDNS:(NSString* _Nullable)dnsIP protocol:(NSString* _Nullable)protocol;
- (BOOL)setProxy:(NSString* _Nullable)hostName port:(long)port error:(NSError* _Nullable* _Nullable)error;
@end

@interface IronchipauthenticatorgolangsdkUser : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field User.User with unsupported type: fraud-golang-interface/models.User

- (NSString* _Nonnull)getEmail;
- (NSString* _Nonnull)getSurname;
- (NSString* _Nonnull)getUserName;
@end

// skipped const AndroidPlatform with unsupported type: fraud-golang-interface/platforms/mobile.Platform

FOUNDATION_EXPORT NSString* _Nonnull const IronchipauthenticatorgolangsdkCDMA_TYPE;
// skipped const DesktopPlatform with unsupported type: fraud-golang-interface/platforms/mobile.Platform

FOUNDATION_EXPORT NSString* _Nonnull const IronchipauthenticatorgolangsdkGSM_TYPE;
// skipped const IOSPlatform with unsupported type: fraud-golang-interface/platforms/mobile.Platform

FOUNDATION_EXPORT NSString* _Nonnull const IronchipauthenticatorgolangsdkLTE_TYPE;
FOUNDATION_EXPORT NSString* _Nonnull const IronchipauthenticatorgolangsdkWCDMA_TYPE;
FOUNDATION_EXPORT NSString* _Nonnull const IronchipauthenticatorgolangsdkWIFI_TYPE;

@interface Ironchipauthenticatorgolangsdk : NSObject
+ (long) authorizatioN_MAX_TIME;
+ (void) setAUTHORIZATION_MAX_TIME:(long)v;

@end

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkAccess* _Nullable IronchipauthenticatorgolangsdkNewAccess(NSString* _Nullable service, NSString* _Nullable user, NSString* _Nullable id_, BOOL specificLocation, int64_t expirationTime);

// skipped function NewAccessIterator with unsupported parameter or return types


FOUNDATION_EXPORT IronchipauthenticatorgolangsdkAuthorization* _Nullable IronchipauthenticatorgolangsdkNewAuthorization(NSString* _Nullable accessID, NSString* _Nullable externalServiceId, NSString* _Nullable state, int64_t expirationTime);

// skipped function NewAuthorizationIterator with unsupported parameter or return types


FOUNDATION_EXPORT IronchipauthenticatorgolangsdkAuthorizedLBAuthSDKMobile* _Nullable IronchipauthenticatorgolangsdkNewAuthorizedLBAuthSDKMobile(NSString* _Nullable host, NSString* _Nullable version, NSString* _Nullable storagePath, NSString* _Nullable storageKey, NSString* _Nullable notificationURL, id<IronchipauthenticatorgolangsdkScanner> _Nullable scannerInterface, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkEMSignals* _Nullable IronchipauthenticatorgolangsdkNewEMSignals(void);

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkKey* _Nullable IronchipauthenticatorgolangsdkNewKey(NSString* _Nullable keyType, NSString* _Nullable name);

// skipped function NewKeyIterator with unsupported parameter or return types


FOUNDATION_EXPORT IronchipauthenticatorgolangsdkOTP* _Nullable IronchipauthenticatorgolangsdkNewOTP(NSString* _Nullable serviceID, NSString* _Nullable username);

// skipped function NewOTPIterator with unsupported parameter or return types


FOUNDATION_EXPORT IronchipauthenticatorgolangsdkOTPMobileInitializer* _Nullable IronchipauthenticatorgolangsdkNewOTPMobileInitializer(NSString* _Nullable path, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkOTPMobileInterface* _Nullable IronchipauthenticatorgolangsdkNewOTPMobileInterface(NSString* _Nullable path, NSString* _Nullable token, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkSignals* _Nullable IronchipauthenticatorgolangsdkNewSignals(NSString* _Nullable signalType, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT IronchipauthenticatorgolangsdkUnauthorizedLBAuthSDKMobile* _Nullable IronchipauthenticatorgolangsdkNewUnauthorizedLBAuthSDKMobile(NSString* _Nullable platform, NSString* _Nullable host, NSString* _Nullable version, NSString* _Nullable path, NSError* _Nullable* _Nullable error);

@class IronchipauthenticatorgolangsdkChannelCallback;

@class IronchipauthenticatorgolangsdkNotificationCallback;

@class IronchipauthenticatorgolangsdkScanner;

@interface IronchipauthenticatorgolangsdkChannelCallback : NSObject <goSeqRefInterface, IronchipauthenticatorgolangsdkChannelCallback> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(NSError* _Nullable)err;
- (void)onFinish;
@end

@interface IronchipauthenticatorgolangsdkNotificationCallback : NSObject <goSeqRefInterface, IronchipauthenticatorgolangsdkNotificationCallback> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(NSError* _Nullable)err;
- (void)onNotification:(IronchipauthenticatorgolangsdkNotification* _Nullable)notification;
@end

@interface IronchipauthenticatorgolangsdkScanner : NSObject <goSeqRefInterface, IronchipauthenticatorgolangsdkScanner> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (IronchipauthenticatorgolangsdkSafezone* _Nullable)getScanResult:(NSString* _Nullable)keyName isCreation:(BOOL)isCreation error:(NSError* _Nullable* _Nullable)error;
@end

#endif
