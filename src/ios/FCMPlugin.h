#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
@import Firebase;

@interface FCMPlugin : CDVPlugin<FIRMessagingDelegate>
{
    //NSString *notificationCallBack;
}

+ (FCMPlugin *) fcmPlugin;
- (void)ready:(CDVInvokedUrlCommand*)command;
- (void)getToken:(CDVInvokedUrlCommand*)command;
- (void)subscribeToTopic:(CDVInvokedUrlCommand*)command;
- (void)unsubscribeFromTopic:(CDVInvokedUrlCommand*)command;
- (void)registerNotification:(CDVInvokedUrlCommand*)command;
- (void)notifyOfMessage:(NSData*) payload;
- (void)notifyOfTokenRefresh:(NSString*) token;
- (void)appEnterBackground;
- (void)appEnterForeground;

@end
