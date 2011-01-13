//
//  MNMindmap.h
//  FMMindnodeKit
//
//  Created by Felix Morgner on 26.11.10.
//  Copyright 2010 Felix Morgner. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FMMindnodeMindmap : NSObject
	{
	NSArray* associations;
	NSArray* rootNodes;
	NSString* color;
	}

- (id) initWithDictionary:(NSDictionary*)theDictionary version:(NSInteger)theVersion;
+ (id) mindmapWithDictionary:(NSDictionary*)theDictionary version:(NSInteger)theVersion;


@property(nonatomic, retain) NSArray* associations;
@property(nonatomic, retain) NSArray* rootNodes;
@property(nonatomic, retain) NSString* color;

@end
