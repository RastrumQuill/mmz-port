// sub_08027E68 at 0x08027E68 (thumb)

undefined4 sub_08027E68(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 4;
  if (*(char *)(param_1 + 0x2e6) < '\0') {
    uVar1 = 8;
  }
  sub_08033184(param_1,uVar1);
  return in_lr;
}

