//
//  MasterViewController.h
//  sample1
//
//  Created by MATSUFUJI Teruhito on 2013/11/24.
//  Copyright (c) 2013年 studioToT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
