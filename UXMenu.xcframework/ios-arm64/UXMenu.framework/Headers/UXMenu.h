//
//  UXMenu.h
//  UXMenu
//
//  Created by John Blaine on 10/5/24.
//

#import <UIKit/UIKit.h>

//! Project version number for UXMenu.
FOUNDATION_EXPORT double UXMenuVersionNumber;
FOUNDATION_EXPORT const unsigned char UXMenuVersionString[];


NS_ASSUME_NONNULL_BEGIN

@interface UXMenu : UIView

- (void)addHeaderImage:(nullable NSString*)u imgd:(NSString*)ud;
- (void)addHeaderTitle:(NSString*)txt;
- (void)addHeaderSubtitle:(NSString*)txt;
-(void)showBackBtn:(BOOL)b;


- (void)addDataWhenSelect:(NSString*)title data:(NSMutableDictionary*)dx;
- (void)clear;
- (void)refresh;


- (void)watchRemove:(void(^)(NSString *c, NSMutableDictionary *d))cback;
- (void)watchName:(void(^)(NSString *c, NSMutableDictionary *d))cback;

- (void)watchField:(NSString*)t callback:(void(^)(NSString *group, NSString *key, NSString *field, NSString *newValue))onselect;

- (void)watchEdit:(void(^)(NSString *c, NSMutableDictionary *d))cback;
- (void)watchImage:(void(^)(UIImage *t, NSMutableDictionary *d))cback;

- (void)watchActivateCamera:(void(^)(NSString *c, void (^reply)(UIImage *img))) cback;

- (void)watchTbl:(NSString*_Nullable)cid selected:(BOOL(^)(NSString *c, NSMutableDictionary *d))selcb populate:(void(^)(NSString *c, NSMutableDictionary *d))upcb refresh:(void(^)(NSString *c, NSMutableDictionary *d))freshcb;


- (void)cfg:(void(^)(NSMutableArray *v))a header:(void(^)(NSMutableArray *v))b body:(void(^)(NSMutableArray *v))c price:(void(^)(NSMutableArray *v))p sort:(void(^)(BOOL *v))e sortBy:(void(^)(NSMutableArray *v))k  ascending:(void(^)(BOOL *v))f cellHeight:(void(^)(float *v))g numOfCol:(void(^)(float *v))h checkBox:(void(^)(BOOL *v))j select:(void(^)(NSMutableString *v))l  profileHeader:(void(^)(NSMutableArray *v))x profileBody:(void(^)(NSMutableArray *v))y  inckey:(void(^)(BOOL *v))m;

- (void)watchBackCB:(void(^)(NSString *c, NSMutableDictionary *d))cback;
- (void) justTakenImage:(UIImage*) img hint:(NSString*)t;

- (void)watchAddItemToCart:(void(^)(NSString *c, NSMutableDictionary *d))cback;
- (void)watchTouchSelect:(void(^)(NSString *c, NSMutableDictionary *dx ))cback;

-(void)editEnable:(BOOL)b;
- (void)watchTranslate:(void(^)(NSString *c, void (^reply)(NSString *t) ))cback;


- (void)admin:(BOOL)b;
- (void)watchFlight:(void(^)(NSMutableDictionary *c, void (^reply)(NSMutableDictionary *t) ))cback;
- (void)watchSubtitle:(NSInteger)v callback:(NSInteger(^)(NSString *c) )cback;

- (void)watchHdrBack:(nullable NSString*)v callback:(NSInteger(^)(NSString *c) )cback;

- (void)watchHdr:(NSString*)nm click:(void(^)(BOOL b ))cbclick data:(void(^)(NSMutableDictionary *dx ))cbdata;

@end

NS_ASSUME_NONNULL_END
