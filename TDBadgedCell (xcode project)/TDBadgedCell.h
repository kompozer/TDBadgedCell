//
//  TDBadgedCell.h
//  TDBadgedTableCell
//	TDBageView
//
//	Any rereleasing of this code is prohibited.
//	Please attribute use of this code within your application
//
//	Any Queries should be directed to hi@tmdvs.me | http://www.tmdvs.me
//	
//  Created by Tim on [Dec 30].
//  Copyright 2009 Tim Davies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDBadgeView : UIView
{
	NSUInteger width;
	NSUInteger badgeNumber;

	UIFont *font;
	UITableViewCell *parent;
	
	UIColor *badgeColor;
	UIColor *badgeColorHighlighted;	
}

@property (nonatomic, readonly) NSUInteger width;
@property (nonatomic, assign) NSUInteger badgeNumber;
@property (nonatomic, assign) UITableViewCell *parent;
@property (nonatomic, retain) UIColor *badgeColor;
@property (nonatomic, retain) UIColor *badgeColorHighlighted;

@end

@interface TDBadgedCell : UITableViewCell {
	NSInteger badgeNumber;
	TDBadgeView *badge;
	
	UIColor *badgeColor;
	UIColor *badgeColorHighlighted;
}

@property NSInteger badgeNumber;
@property (readonly, retain) TDBadgeView *badge;
@property (nonatomic, retain) UIColor *badgeColor;
@property (nonatomic, retain) UIColor *badgeColorHighlighted;

@end
