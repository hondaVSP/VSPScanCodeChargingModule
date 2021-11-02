//
//  VSPScanCodeChargingService.h
//  VSPScanCodeChargingModule_Example
//
//  Created by 贾宇恒 on 2021/10/13.
//  Copyright © 2021 Jyh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HondaConnectSDK/HCCoreRpcProtocol.h>
@class HCRpcContext;

NS_ASSUME_NONNULL_BEGIN

@interface VSPScanCodeChargingService : NSObject

/// 扫码充电注册及订单查询*
/// @param flag 授权车辆标识，0-车主，1-授权
+ (id<HCRpcContextProtocl>)registerServiceWithVinCode:(NSString *)vinCode flag:(NSInteger)flag success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
/**获取H5地址*/
+ (id<HCRpcContextProtocl>)getH5UrlWithName:(NSString *)name success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**获取充电桩配置(图片, 轮询时间)*/
+ (id<HCRpcContextProtocl>)getCommonConfigWithSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 扫码查询充电设备详情
/// @param QRCode 二维码字符串
+ (id<HCRpcContextProtocl>)scanToCheckChagringEquipmentDetailWithQRCode:(NSString *)QRCode vinCode:(NSString *)vinCode success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 开始充电
/// @param connectorId 充电枪id
/// @param cpoId 运营商组织机构代码
+ (id<HCRpcContextProtocl>)startChargingWithVinCode:(NSString *)vinCode connectorId:(NSString *)connectorId cpoId:(NSString *)cpoId success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 获取扫码充电历史订单
/// @param page 页码
+ (id<HCRpcContextProtocl>)getChargingHistoryOrderVinCode:(NSString *)vinCode page:(NSInteger)page success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 查询已完成订单详情
/// @param orderNumber 订单号
+ (id<HCRpcContextProtocl>)getOrderDetailWithVinCode:(NSString *)vinCode orderNumber:(NSString *)orderNumber success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**从扫码或历史订单进入时是待支付状态调用*/
+ (id<HCRpcContextProtocl>)waitingPaymentRequestWithVinCode:(NSString *)vinCode orderNumber:(NSString *)orderNumber success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 查询未完成订单详情
/// @param orderNumber 订单号
/// @param state 充电状态
+ (id<HCRpcContextProtocl>)getUndoneOrderDetailWithOrderNumber:(NSString *)orderNumber chargingState:(NSInteger)state vinCode:(NSString *)vinCode success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 结束充电
/// @param state 充电状态(轮询时候的状态, 把当前状态给后台)
/// @param orderNumber 订单号
+ (id<HCRpcContextProtocl>)stopChargingWithVinCode:(NSString *)vinCode chargingState:(NSInteger)state orderNumber:(NSString *)orderNumber success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 申请支付
/// @param orderNumber 订单号
+ (id<HCRpcContextProtocl>)applyForPaymentWithVinCode:(NSString *)vinCode orderNumber:(NSString *)orderNumber success:(void (^)(id<HCRpcContextProtocl>))successBlock failure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
