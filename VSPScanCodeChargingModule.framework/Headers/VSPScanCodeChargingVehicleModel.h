//
//  VSPScanCodeChargingVehicleModel.h
//  VSPScanCodeChargingModule_Example
//
//  Created by 贾宇恒 on 2021/10/13.
//  Copyright © 2021 Jyh. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VSPScanCodeChargingVehicleModel : NSObject

@property (nonatomic, copy) NSString *vinCode;
/**1车主, 0非车主*/
@property (nonatomic, assign) NSInteger isMaster;

@end

NS_ASSUME_NONNULL_END
