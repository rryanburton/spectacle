#import <Foundation/Foundation.h>

#import "SpectacleMacros.h"
#import "SpectacleWindowAction.h"

@interface SpectacleWindowPositionCalculationResult : NSObject

@property (nonatomic, readonly) SpectacleWindowAction *action;
@property (nonatomic, readonly) CGRect windowRect;

- (instancetype)initWithAction:(SpectacleWindowAction *)action windowRect:(CGRect)windowRect NS_DESIGNATED_INITIALIZER;

+ (instancetype)resultWithAction:(SpectacleWindowAction *)action windowRect:(CGRect)windowRect;

SPECTACLE_INIT_AND_NEW_UNAVAILABLE

@end
