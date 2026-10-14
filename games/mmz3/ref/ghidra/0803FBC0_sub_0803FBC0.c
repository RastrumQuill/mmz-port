// sub_0803FBC0 at 0x0803FBC0 (thumb)

undefined4 sub_0803FBC0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

