//
//  DiscoveryDetailController.h
//  App
//
//  Created by 张丁豪 on 16/9/7.
//  Copyright © 2016年 张丁豪. All rights reserved.
//
// GitHub地址: https://github.com/CalvinCheungCoder/eyepetizer
// 个人博客: http://www.zhangdinghao.cn
// QQ: 984382258 欢迎一起学习交流

#import <UIKit/UIKit.h>
#import "NavHeadTitleView.h"

@interface DiscoveryDetailController : UIViewController<UITableViewDelegate,UITableViewDataSource,NavHeadTitleViewDelegate>

@property (nonatomic, strong) NSString *actionUrl;

@property (nonatomic, strong) NSString *pageTitle;

@property (nonatomic, strong) NSString *NextPageStr;

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *ListArr;

@property (nonatomic, strong) UILabel *topLine;

@property (nonatomic, strong) UILabel *line;

@property (nonatomic, strong) UIButton *seleBtn;

@property (nonatomic, strong) NSString *RequestUrl;

@property (nonatomic, strong) NSString *idStr;

@property (nonatomic, strong) NSString *ReqId;

@property (nonatomic, strong) NavHeadTitleView *NavView;

@end
