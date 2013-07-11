//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pythagoras/f/RoundRectangle.java
//
//  Created by Thomas on 7/9/13.
//

@protocol PythagorasFIRoundRectangle;

#import "JreEmulation.h"
#import "java/io/Serializable.h"
#import "pythagoras/f/AbstractRoundRectangle.h"

@interface PythagorasFRoundRectangle : PythagorasFAbstractRoundRectangle < JavaIoSerializable > {
 @public
  float x__;
  float y__;
  float width__;
  float height__;
  float arcwidth_;
  float archeight_;
}

@property (nonatomic, assign) float x_;
@property (nonatomic, assign) float y_;
@property (nonatomic, assign) float width_;
@property (nonatomic, assign) float height_;
@property (nonatomic, assign) float arcwidth;
@property (nonatomic, assign) float archeight;

- (id)init;
- (id)initWithFloat:(float)x
          withFloat:(float)y
          withFloat:(float)width
          withFloat:(float)height
          withFloat:(float)arcwidth
          withFloat:(float)archeight;
- (void)setRoundRectWithFloat:(float)x
                    withFloat:(float)y
                    withFloat:(float)width
                    withFloat:(float)height
                    withFloat:(float)arcwidth
                    withFloat:(float)archeight;
- (void)setRoundRectWithPythagorasFIRoundRectangle:(id<PythagorasFIRoundRectangle>)rr;
- (float)arcWidth;
- (float)arcHeight;
- (float)x;
- (float)y;
- (float)width;
- (float)height;
- (void)setFrameWithFloat:(float)x
                withFloat:(float)y
                withFloat:(float)width
                withFloat:(float)height;
@end