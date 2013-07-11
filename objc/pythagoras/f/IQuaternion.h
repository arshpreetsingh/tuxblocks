//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pythagoras/f/IQuaternion.java
//
//  Created by Thomas on 7/9/13.
//

@class IOSFloatArray;
@class PythagorasFQuaternion;
@class PythagorasFVector3;
@protocol PythagorasFIVector3;

#import "JreEmulation.h"

@protocol PythagorasFIQuaternion < NSObject >
- (float)x;
- (float)y;
- (float)z;
- (float)w;
- (void)getWithJavaLangFloatArray:(IOSFloatArray *)values;
- (BOOL)hasNaN;
- (PythagorasFVector3 *)toAnglesWithPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)toAngles;
- (PythagorasFQuaternion *)normalize;
- (PythagorasFQuaternion *)normalizeWithPythagorasFQuaternion:(PythagorasFQuaternion *)result;
- (PythagorasFQuaternion *)invert;
- (PythagorasFQuaternion *)invertWithPythagorasFQuaternion:(PythagorasFQuaternion *)result;
- (PythagorasFQuaternion *)multWithPythagorasFIQuaternion:(id<PythagorasFIQuaternion>)other;
- (PythagorasFQuaternion *)multWithPythagorasFIQuaternion:(id<PythagorasFIQuaternion>)other
                                withPythagorasFQuaternion:(PythagorasFQuaternion *)result;
- (PythagorasFQuaternion *)slerpWithPythagorasFIQuaternion:(id<PythagorasFIQuaternion>)other
                                                 withFloat:(float)t;
- (PythagorasFQuaternion *)slerpWithPythagorasFIQuaternion:(id<PythagorasFIQuaternion>)other
                                                 withFloat:(float)t
                                 withPythagorasFQuaternion:(PythagorasFQuaternion *)result;
- (PythagorasFVector3 *)transformWithPythagorasFIVector3:(id<PythagorasFIVector3>)vector;
- (PythagorasFVector3 *)transformWithPythagorasFIVector3:(id<PythagorasFIVector3>)vector
                                  withPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)transformUnitXWithPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)transformUnitYWithPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)transformUnitZWithPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)transformAndAddWithPythagorasFIVector3:(id<PythagorasFIVector3>)vector
                                       withPythagorasFIVector3:(id<PythagorasFIVector3>)add
                                        withPythagorasFVector3:(PythagorasFVector3 *)result;
- (PythagorasFVector3 *)transformScaleAndAddWithPythagorasFIVector3:(id<PythagorasFIVector3>)vector
                                                          withFloat:(float)scale_
                                            withPythagorasFIVector3:(id<PythagorasFIVector3>)add
                                             withPythagorasFVector3:(PythagorasFVector3 *)result;
- (float)transformZWithPythagorasFIVector3:(id<PythagorasFIVector3>)vector;
- (float)getRotationZ;
- (PythagorasFQuaternion *)integrateWithPythagorasFIVector3:(id<PythagorasFIVector3>)velocity
                                                  withFloat:(float)t;
- (PythagorasFQuaternion *)integrateWithPythagorasFIVector3:(id<PythagorasFIVector3>)velocity
                                                  withFloat:(float)t
                                  withPythagorasFQuaternion:(PythagorasFQuaternion *)result;
@end