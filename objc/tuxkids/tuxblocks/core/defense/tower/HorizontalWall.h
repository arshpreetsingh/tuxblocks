//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: C:\Users\Thomas\Documents\Eclipse\Tux\tuxblocks\core\src\main\java\tuxkids\tuxblocks\core\defense\tower\HorizontalWall.java
//
//  Created by Thomas on 7/1/13.
//

@class TBProjectile;

#import "JreEmulation.h"
#import "tuxkids/tuxblocks/core/defense/tower/Tower.h"

@interface TBHorizontalWall : TBTower {
}

- (int)rows;
- (int)cols;
- (float)damage;
- (int)fireRate;
- (float)range;
- (TBProjectile *)createProjectile;
- (TBTower *)copy__ OBJC_METHOD_FAMILY_NONE;
- (NSString *)name;
- (int)cost;
- (int)commonness;
- (id)init;
@end

typedef TBHorizontalWall TuxkidsTuxblocksCoreDefenseTowerHorizontalWall;