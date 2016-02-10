#pragma once

#include <string>

using namespace std;

class CharType
{
  public:
    //CONSTANTS
    static const int MAX_EXPERIENCE		    = 1000;  // max experience value
    static const int MAX_HEALTH			    = 100;   // max health value
    static const int EXP_LEVEL_THRESHOLD	= 20;    // experience level threshold value ( every 20 experience points increments level )
    static const int MAX_CHAR_LEVELS		= MAX_EXPERIENCE/EXP_LEVEL_THRESHOLD; // max character level

  protected:
    string	name;
    int		level;
    int		experience;
    int		health;

    void UpdateLevel();

  public:

    // Accessor Functions
    void SetHealth( int inValue ) { health = inValue; }
    int GetHealth( ) const { return health; }

    void SetExperience( int inValue ) { experience = inValue; }
    int GetExperienceh( ) const { return experience; }

    void SetName( string inValue ) { name = inValue; }
    string GetName() const {return name;}

    void SetLevel( int inLevel ) { level = inLevel; }
    int GetLevel( ) const { return level; }

    // General Class Functions
    void LevelIncrease( ) { level++; }
    void LevelDecrease( );

    void UpdateHealth( int inHealthInc );
    void UpdateExperience( int inExpInc );

    void Display();

    // Constructors
    CharType( );
    CharType( string inName, int inLevel );

    // Destructor
    ~CharType( );

};
