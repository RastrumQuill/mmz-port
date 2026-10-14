// sub_080CFE88 at 0x080CFE88 (thumb)

undefined4 sub_080CFE88(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar3 + 8) == '\0') {
    if ((*(int *)(iVar3 + 0x58) <= *(int *)(iVar2 + 0x58)) &&
       (*(int *)(iVar2 + 0x58) - *(int *)(iVar3 + 0x58) < 0x801)) {
      bVar1 = *(byte *)(iVar2 + 0x10);
      if ((bVar1 & 2) == 0) {
        if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
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
        bVar1 = DAT_02030104 & 4;
        if ((DAT_02030104 & 4) != 0) {
          return in_lr;
        }
        if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
          *(undefined *)(iVar2 + 0xd) = 1;
          *(byte *)(iVar2 + 0xe) = bVar1;
        }
        else {
          *(undefined *)(iVar2 + 0xd) = 2;
          *(byte *)(iVar2 + 0xe) = bVar1;
        }
      }
      *(undefined *)(iVar3 + 0x119) = 1;
      DAT_020301b4 = DAT_020301b4 | 1;
      *(int *)(iVar2 + 0xb4) = iVar3;
    }
  }
  return in_lr;
}

