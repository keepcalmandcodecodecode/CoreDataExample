//
//  Book+CoreDataProperties.h
//  CoreDataExample
//
//  Created by macmini1 on 08.07.16.
//  Copyright © 2016 easy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Book.h"

NS_ASSUME_NONNULL_BEGIN

@interface Book (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) Author *author;

@end

NS_ASSUME_NONNULL_END
