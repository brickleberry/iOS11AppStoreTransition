//
//  QCAllViewController.h
//  QingClassSaas
//
//  Created by weikeyan on 2017/10/10.
//  Copyright © 2017年 QingClass. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QCBaseViewController.h"
@interface QCAllViewController :QCBaseViewController
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, assign) NSInteger currentIndex;

@end
