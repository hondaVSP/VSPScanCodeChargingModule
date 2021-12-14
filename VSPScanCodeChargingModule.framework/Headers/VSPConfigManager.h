//
//  VSPConfigManager.h
//  VSPScanCodeChargingModule_Example
//
//  Created by 贾宇恒 on 2021/10/12.
//  Copyright © 2021 Jyh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VSPScanCodeChargingVehicleModel.h"

typedef NS_ENUM(NSUInteger, VSPConfigType) {
    VSPConfigTypeWDHAC,
    VSPConfigTypeGHAC,
};

NS_ASSUME_NONNULL_BEGIN

@interface VSPConfigManager : NSObject

@property (nonatomic, class, readonly, strong) VSPConfigManager *sharedManager;
/**当前版本根据type配置, default is 0*/
@property (nonatomic, assign) VSPConfigType configType;

@property (nonatomic, strong) VSPScanCodeChargingVehicleModel *vehicleModel;

/**服务页入口*/
- (void)checkRegisterState;

@end

NS_ASSUME_NONNULL_END
