#include "..\Stack\Stack.h"

#include "gtest.h"

TEST(TBitField, can_create_stack_with_positive_length)
{
  ASSERT_NO_THROW(TStack<int> bf);
}

