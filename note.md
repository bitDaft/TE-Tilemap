since we have forked this data from TE-loader we can simply modify the existing code with some new loader models and the way to store them
as this is simply loading storing and manupulating the data in the tilemap file.
so we will not need to start from scratch
although i think that having to go throught the existing code could also be time consuming so we may also be able to completely ignore it if needed.
lets see how this goes.

# tasks
  - we will need to define the models needed to store the data for the tilemap
  - we will need a class to hold and manage this data which is gonna be the tilemap file... hmm this is true that this will hold the tilemap data
  - so it is reasonable to call it tilemap. but Project-TE also manages the tilemap data in another form. so do we need to have these two be the same.
  - but they both do essentially different things
  - hmmmm...... 
  - i feel like we should have it just named tilemap in Project-TE and have this renamed something else
  - since the engine is the one that is going to be used more and this might just be used as the support in an GUI application for creating the texture. then the name of the this class will not matter at that time since the dev will not need to know the name of this lib.
  - so what should we do. what should we name this class that is also going to hold the data of the tilemap.
  - hmmmm... 
  - lets name it something like tilemapDataManager. but it is not a tilemap. for the last one we could simply name it as loader and in the engine called it resourceloader. becoz it loads the resources in the loader.
  - but here we cant have resourceTilemap ... that makes no sense. in the engine its going to be Tilemap... we will change it here.
  - what about TilemapContainer or something since it contains the data for the tilemap. yeah we will go with this for now. it makes sense and it aint that bad.
  - hmmm. but it may be thought of being a container of tilemaps in the engine............. shit
  - ok. i got it. we will call it TilemapStore. it stores the data for the tilemap but what if it feels like a store for tilemaps instead of its data.....
  - ok. found it boyss. TilemapContent. contains the contents of a tilemap. no mistake here.