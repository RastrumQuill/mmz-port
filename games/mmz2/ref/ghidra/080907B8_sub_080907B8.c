// sub_080907B8 at 0x080907B8 (thumb)

undefined4 sub_080907B8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)(param_1 + 0x5c) * ((*(byte *)(param_1 + 10) >> 4 & 1) * -2 + 1);
    iVar1 = *(int *)(param_1 + 0x5c) + -2;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 < 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  return in_lr;
}

