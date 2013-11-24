//
//  DetailViewController.h
//  sample1
//
//  Created by MATSUFUJI Teruhito on 2013/11/24.
//  Copyright (c) 2013年 studioToT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
