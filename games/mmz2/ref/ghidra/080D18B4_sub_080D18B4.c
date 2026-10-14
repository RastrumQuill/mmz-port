// sub_080D18B4 at 0x080D18B4 (thumb)

undefined4 sub_080D18B4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar3 + 8) == '\0') {
    bVar1 = *(byte *)(iVar2 + 0x10);
    if ((bVar1 & 2) == 0) {
      if (*(int *)(iVar2 + 0x58) < *(int *)(iVar3 + 0x58)) {
        return in_lr;
      }
      if (0x1800 < *(int *)(iVar2 + 0x58) - *(int *)(iVar3 + 0x58)) {
        return in_lr;
      }
    }
    if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
      if ((bVar1 & 0xf) != 0) {
        return in_lr;
      }
      *(undefined *)(iVar2 + 0xd) = 1;
    }
    else {
      if ((bVar1 & 0xf) == 0) {
        return in_lr;
      }
      *(undefined *)(iVar2 + 0xd) = 2;
    }
    *(undefined *)(iVar2 + 0xe) = 0;
    *(int *)(iVar2 + 0xb4) = iVar3;
  }
  return in_lr;
}

