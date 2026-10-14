// sub_080623BC at 0x080623BC (thumb)

undefined4 sub_080623BC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(undefined *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x10;
    if ((int)(*(int *)(param_1 + 0xb8) + ((uint)*(byte *)(param_1 + 0x10) * -0xbc + 0x5e) * 0x100 +
             -0x3000) < *(int *)(param_1 + 0x54)) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x180;
    }
    iVar1 = *(int *)(param_1 + 0xb8) + ((uint)*(byte *)(param_1 + 0x10) * -0xbc + 0x5e) * 0x100;
    if (*(int *)(param_1 + 0x54) <= iVar1) {
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x10;
    if (*(int *)(param_1 + 0x54) <
        (int)(*(int *)(param_1 + 0xb8) + ((uint)*(byte *)(param_1 + 0x10) * -0xbc + 0x5e) * 0x100 +
             0x3000)) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x180;
    }
    iVar1 = *(int *)(param_1 + 0xb8) + ((uint)*(byte *)(param_1 + 0x10) * -0xbc + 0x5e) * 0x100;
    if (iVar1 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(undefined *)(param_1 + 0xc1) = 1;
  return in_lr;
}

