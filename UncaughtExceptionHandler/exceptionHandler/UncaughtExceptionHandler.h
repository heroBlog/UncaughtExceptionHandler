//
//  UncaughtExceptionHandler.h
//  UncaughtExceptionHandler
//
//  Created by Guojh on 2017/3/30.
//  Copyright © 2017年 Qihb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UncaughtExceptionHandler : NSObject

/*!
 *  异常的处理方法
 *
 *  @param install   是否开启捕获异常
 *  @param showAlert 是否在发生异常时弹出alertView
 */
+ (void)installUncaughtExceptionHandler:(BOOL)install showAlert:(BOOL)showAlert;
@end
