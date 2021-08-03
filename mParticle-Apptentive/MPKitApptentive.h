#import <Foundation/Foundation.h>
#if defined(__has_include) && __has_include(<mParticle_Apple_SDK/mParticle.h>)
#import <mParticle_Apple_SDK/mParticle.h>
#else
#import "mParticle.h"
#endif

#if defined(__has_include) && __has_include(<ApptentiveKit/ApptentiveKit.h>)
#import "ApptentiveKit.h"
#import <ApptentiveKit/ApptentiveKit.h>
//#elif defined(__has_include) && __has_include(<Apptentive/apptentive-ios-umbrella.h>)
//#import <Apptentive/apptentive-ios-umbrella.h>
#import "ApptentiveKit.h"
#import <ApptentiveKit/ApptentiveKit.h>
#import "ApptentiveStyleSheet.h"
#endif



@interface MPKitApptentive : NSObject <MPKitProtocol>

@property (nonatomic, strong, nonnull) NSDictionary *configuration;
@property (nonatomic, strong, nullable) NSDictionary *launchOptions;
@property (nonatomic, unsafe_unretained, readonly) BOOL started;
@property (nonatomic, strong, nullable) NSDictionary<NSString *, id> *userAttributes;
@property (nonatomic, strong, nullable) NSArray<NSDictionary<NSString *, id> *> *userIdentities;


/**
 Begins Apptentive SDK initialization. Does nothing if the SDK is already initialized.
 
 @return YES if SDK initialization was successful. NO - if the SDK was already initialized or failed to initialize.
 */
+ (BOOL)registerSDK;

@end

@interface Apptentive ()

- (void)setMParticleId:(NSString *_Nonnull)mParticleId;

@end

