//
//  NSObject.h
//  lock
//
//  Created by Mac on 3/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface NSObject :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * location_name;
@property (nonatomic, retain) NSString * longitude;
@property (nonatomic, retain) NSString * latitude;
@property (nonatomic, retain) NSString * address;

@end



