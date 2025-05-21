
int sumtree(BinTree T) {
  if (T.empty())
    return 0;
  else {
    int ans = T.value;
    if (not T.left().empty()) {
        ans += sumtree(T.left().left()) + sumtree(T.left().right());
    }
    if (not T.right().empty()) {
        ans += sumtree(T.right().right()) + sumtree (T.right().left());
    }
  }
}