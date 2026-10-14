// sub_080C2C20 at 0x080C2C20 (thumb)

undefined4 sub_080C2C20(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb5);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_080BD014(param_1);
  return in_lr;
}

