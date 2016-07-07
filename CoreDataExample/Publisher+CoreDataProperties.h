//
//  Publisher+CoreDataProperties.h
//  CoreDataExample
//
//  Created by macmini1 on 08.07.16.
//  Copyright © 2016 easy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Publisher.h"

NS_ASSUME_NONNULL_BEGIN

@interface Publisher (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) Author *author;
@property (nullable, nonatomic, retain) Book *book;

@end

NS_ASSUME_NONNULL_END
