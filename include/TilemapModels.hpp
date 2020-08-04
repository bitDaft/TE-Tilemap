

#ifndef TILEMAP_MODELS_HPP
#define TILEMAP_MODELS_HPP

#include <vector>
#include <string>
#include <SFML/System/Time.hpp>

// TODO : define the models for the data that will be stored for the tilemap

struct TileAnimationModel
{
  int gid;
  int animationHandle;
  sf::Time animationTime;
};

struct TileLayerModel
{
  std::vector<int> textures;
  std::string data;
};

struct TilesetModel
{
  int startingGid;
  int tilesLength;
  int tilesetHandle;
};

struct TextureBlockModel
{
  int startingGid;
  int tilesLength;
  std::vector<TilesetModel *> tilesets;
};

struct TilemapModel
{
  std::vector<TileAnimationModel *> animatedTiles;
  std::vector<TileLayerModel *> layers;
  std::vector<TextureBlockModel *> textures;
};

#endif