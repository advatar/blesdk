//
//  DeviceConectController.h
//  FirmwareUpdate
//
//  Created by west on 16/9/20.
//  Copyright © 2016年 west. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>

@protocol DeviceConectControllerDelegate <NSObject>

@optional

- (void)centralManager:(CBCentralManager *)centralManager ConnectSuccessPeripheral:(CBPeripheral *)peripheral;

@end


@interface DeviceConectController : UIViewController<CBCentralManagerDelegate>

@property (nonatomic, strong)CBCentralManager *bluetoothManager;

@property (nonatomic, unsafe_unretained)id<DeviceConectControllerDelegate> delegate;

@property (nonatomic, strong) NSArray <CBUUID *>*uuids;

@end
