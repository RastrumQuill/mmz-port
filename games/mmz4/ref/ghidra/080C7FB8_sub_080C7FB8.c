// sub_080C7FB8 at 0x080C7FB8 (thumb)

undefined4 sub_080C7FB8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_080BD014(param_1);
  return in_lr;
}

