// sub_080EA530 at 0x080EA530 (thumb)

undefined4 sub_080EA530(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(short *)(iVar2 + 0xba) == 0) && (*(char *)(iVar3 + 8) == '\0')) {
    bVar1 = *(byte *)(iVar2 + 0x10);
    if ((bVar1 & 2) == 0) {
      if (*(int *)(iVar3 + 0x58) < *(int *)(iVar2 + 0x58)) {
        if ((bVar1 & 1) != 0) {
          return in_lr;
        }
        *(undefined *)(iVar2 + 0xd) = 1;
      }
      else {
        if ((bVar1 & 1) == 0) {
          return in_lr;
        }
        *(undefined *)(iVar2 + 0xd) = 2;
      }
      *(byte *)(iVar2 + 0xe) = bVar1 & 2;
    }
    else {
      bVar1 = DAT_0202e8b4 & 8;
      if ((DAT_0202e8b4 & 8) != 0) {
        return in_lr;
      }
      if (*(int *)(iVar3 + 0x58) < *(int *)(iVar2 + 0x58)) {
        *(undefined *)(iVar2 + 0xd) = 1;
        *(byte *)(iVar2 + 0xe) = bVar1;
      }
      else {
        *(undefined *)(iVar2 + 0xd) = 2;
        *(byte *)(iVar2 + 0xe) = bVar1;
      }
    }
    *(undefined *)(iVar3 + 0x143) = 2;
    DAT_0202e924 = DAT_0202e924 | 1;
    *(int *)(iVar2 + 0xb4) = iVar3;
  }
  return in_lr;
}

