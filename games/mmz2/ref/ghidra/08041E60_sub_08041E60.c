// sub_08041E60 at 0x08041E60 (thumb)

undefined4 sub_08041E60(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0xd) = 6;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

