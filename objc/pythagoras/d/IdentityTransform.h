//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pythagoras/d/IdentityTransform.java
//
//  Created by Thomas on 7/9/13.
//

@class IOSDoubleArray;
@class IOSObjectArray;
@class PythagorasDPoint;
@class PythagorasDVector;
@protocol PythagorasDIPoint;
@protocol PythagorasDIVector;
@protocol PythagorasDTransform;

#import "JreEmulation.h"
#import "pythagoras/d/AbstractTransform.h"

#define PythagorasDIdentityTransform_GENERALITY 0

@interface PythagorasDIdentityTransform : PythagorasDAbstractTransform {
}

+ (int)GENERALITY;
- (double)uniformScale;
- (double)scaleX;
- (double)scaleY;
- (double)rotation;
- (double)tx;
- (double)ty;
- (void)getWithJavaLangDoubleArray:(IOSDoubleArray *)matrix;
- (id<PythagorasDTransform>)invert;
- (id<PythagorasDTransform>)concatenateWithPythagorasDTransform:(id<PythagorasDTransform>)other;
- (id<PythagorasDTransform>)preConcatenateWithPythagorasDTransform:(id<PythagorasDTransform>)other;
- (id<PythagorasDTransform>)lerpWithPythagorasDTransform:(id<PythagorasDTransform>)other
                                              withDouble:(double)t;
- (PythagorasDPoint *)transformWithPythagorasDIPoint:(id<PythagorasDIPoint>)p
                                withPythagorasDPoint:(PythagorasDPoint *)into;
- (void)transformWithPythagorasDIPointArray:(IOSObjectArray *)src
                                    withInt:(int)srcOff
                  withPythagorasDPointArray:(IOSObjectArray *)dst
                                    withInt:(int)dstOff
                                    withInt:(int)count;
- (void)transformWithJavaLangDoubleArray:(IOSDoubleArray *)src
                                 withInt:(int)srcOff
                 withJavaLangDoubleArray:(IOSDoubleArray *)dst
                                 withInt:(int)dstOff
                                 withInt:(int)count;
- (PythagorasDPoint *)inverseTransformWithPythagorasDIPoint:(id<PythagorasDIPoint>)p
                                       withPythagorasDPoint:(PythagorasDPoint *)into;
- (PythagorasDVector *)transformPointWithPythagorasDIVector:(id<PythagorasDIVector>)v
                                      withPythagorasDVector:(PythagorasDVector *)into;
- (PythagorasDVector *)transformWithPythagorasDIVector:(id<PythagorasDIVector>)v
                                 withPythagorasDVector:(PythagorasDVector *)into;
- (PythagorasDVector *)inverseTransformWithPythagorasDIVector:(id<PythagorasDIVector>)v
                                        withPythagorasDVector:(PythagorasDVector *)into;
- (id<PythagorasDTransform>)copy__ OBJC_METHOD_FAMILY_NONE;
- (int)generality;
- (NSString *)description;
- (id)init;
@end