//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTButtonTextFieldCell.h>

@interface DVTWarningTextFieldCell : DVTButtonTextFieldCell
{
    BOOL _showingWarning;
}

- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityChildren;
- (id)disabledImage;
- (id)highlightImage;
- (id)alternateImage;
- (id)normalImage;
- (void)setStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_updateShowingWarning;
@property(readonly) BOOL shouldShowWarning;
@property(getter=isShowingWarning) BOOL showingWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

