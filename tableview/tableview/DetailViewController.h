//
//  DetailViewController.h
//  tableview
//
//  Created by tete on 2015/05/02.
//  Copyright (c) 2015年 ほむほむ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
