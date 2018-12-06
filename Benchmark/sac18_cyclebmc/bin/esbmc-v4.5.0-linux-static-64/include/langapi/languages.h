/*******************************************************************\

Module:

Author: Daniel Kroening, kroening@cs.cmu.edu

\*******************************************************************/

#ifndef CPROVER_LANGUAGES_H
#define CPROVER_LANGUAGES_H

#include <util/language.h>

class languagest
{
public:
  // conversion of expressions

  bool from_expr(const exprt &expr, std::string &code, bool fullname = false)
  {
    return language->from_expr(expr, code, ns, fullname);
  }

  bool from_type(const typet &type, std::string &code, bool fullname = false)
  {
    return language->from_type(type, code, ns, fullname);
  }

  bool to_expr(
    const std::string &code,
    const std::string &module,
    exprt &expr,
    message_handlert &message_handler)
  {
    return language->to_expr(code, module, expr, message_handler, ns);
  }

  // constructor / destructor

  languagest(const namespacet &_ns, const char *mode);
  virtual ~languagest();

 protected:
  const namespacet &ns;
  languaget *language;
};

#endif
