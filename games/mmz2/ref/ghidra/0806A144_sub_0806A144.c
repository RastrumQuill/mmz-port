// sub_0806A144 at 0x0806A144 (thumb)

undefined4 sub_0806A144(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  return in_lr;
}

