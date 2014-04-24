/* Owl.h
 *
 * Begun by: Dr. Adams, CS 214 at Calvin College.
 * Completed by:Charles Blum
 * Date:24 April 2014
 */

#ifndef OWL
#define OWL

#include "Bird.h"

class Owl : public Bird {
 public:
  Owl(const string & name);
  string call() const;
  string className() const;
 private:
};

inline Owl::Owl(const string & name) : Bird(name) {

}

inline string Owl::call() const {
  return "Hoooo";
}

inline string Owl::className() const {
  return "Owl";
}

#endif
