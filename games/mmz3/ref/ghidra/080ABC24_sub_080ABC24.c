// sub_080ABC24 at 0x080ABC24 (thumb)

undefined4 sub_080ABC24(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    iVar2 = 0x280;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0x11) == '\0') {
      iVar2 = 0x180;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x2c) + 10) & 0x10) == 0) {
      *(int *)(iVar1 + 400) = -iVar2;
    }
    else {
      *(int *)(iVar1 + 400) = iVar2;
    }
  }
  return in_lr;
}

