//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: playn/core/CachingAssets.java
//
//  Created by Thomas on 7/1/13.
//

@protocol JavaUtilMap;
@protocol PlaynCoreImage;
@protocol PlaynCoreSound;
@protocol PlaynCoreUtilCallback;

#import "JreEmulation.h"
#import "Assets.h"

@interface PlaynCoreCachingAssets : NSObject < PlaynCoreAssets > {
 @public
  id<PlaynCoreAssets> delegate_;
  id<JavaUtilMap> cache_;
}

@property (nonatomic, retain) id<PlaynCoreAssets> delegate;
@property (nonatomic, retain) id<JavaUtilMap> cache;

- (id)initWithPlaynCoreAssets:(id<PlaynCoreAssets>)delegate;
- (id<PlaynCoreImage>)getImageSyncWithNSString:(NSString *)path;
- (id<PlaynCoreImage>)getImageWithNSString:(NSString *)path;
- (id<PlaynCoreImage>)getRemoteImageWithNSString:(NSString *)url;
- (id<PlaynCoreImage>)getRemoteImageWithNSString:(NSString *)url
                                       withFloat:(float)width
                                       withFloat:(float)height;
- (id<PlaynCoreSound>)getSoundWithNSString:(NSString *)path;
- (id<PlaynCoreSound>)getMusicWithNSString:(NSString *)path;
- (NSString *)getTextSyncWithNSString:(NSString *)path;
- (void)getTextWithNSString:(NSString *)path
  withPlaynCoreUtilCallback:(id<PlaynCoreUtilCallback>)callback;
@end