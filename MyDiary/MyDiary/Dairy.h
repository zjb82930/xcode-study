//
//  Dairy.h
//  MyDiary
//
//  Created by zjb on 13-7-22.
//  Copyright (c) 2013年 zjb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dairy : NSObject

+(id)createDiary;

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly, getter = dateCreate) NSDate   *dateCreate;

@end
