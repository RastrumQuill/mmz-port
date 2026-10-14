// sub_08073DFC at 0x08073DFC (thumb)

undefined4 sub_08073DFC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar5 = *(byte *)(iVar4 + 0xbd) + 0xc0 & 0xff;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = -0x2100;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = 0x2100;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    iVar3 = (int)(short)(&DAT_080ef450)[uVar5] << 1;
    iVar2 = 0x4e00;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = 0x2200;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = -0x2200;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    iVar3 = (int)(short)(&DAT_080ef450)[uVar5] << 1;
    iVar2 = 0x4e00;
  }
  else {
    if (bVar1 == 2) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = 0x2200;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = -0x2200;
      }
    }
    else {
      if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = -0x2100;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x54);
        iVar3 = 0x2100;
      }
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    iVar3 = (int)(short)(&DAT_080ef450)[uVar5] << 1;
    iVar2 = 0x2000;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0xb8) - (iVar3 + iVar2);
  return in_lr;
}

