// sub_080C6244 at 0x080C6244 (thumb)

undefined4 sub_080C6244(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((DAT_02030105 & 2) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    if ((DAT_02030105 & 8) == 0) {
      iVar5 = 4;
      uVar2 = 0;
    }
    else {
      if ((DAT_02030105 & 0x40) == 0) {
        return in_lr;
      }
      if ((DAT_02030105 & 0x80) == 0) {
        iVar5 = 3;
        uVar2 = 4;
      }
      else if ((DAT_02030106 & 1) == 0) {
        iVar5 = 1;
        uVar2 = 7;
      }
      else {
        if ((DAT_02030106 & 2) == 0) {
          return in_lr;
        }
        if ((DAT_02030106 & 4) != 0) {
          return in_lr;
        }
        iVar5 = 4;
        uVar2 = 8;
      }
    }
    uVar3 = (short)uVar2 + iVar5;
    if (uVar2 < uVar3) {
      do {
        iVar5 = sub_0800710C(DAT_0203062c);
        if (iVar5 != 0) {
          *(undefined *)(iVar5 + 0x25) = 1;
          *(undefined *)(iVar5 + 9) = 0x47;
          *(undefined4 *)(iVar5 + 0x14) = 0x80c5a7d;
          *(undefined2 *)(iVar5 + 0x20) = 0;
          *(undefined *)(iVar5 + 0x22) = 0;
          *(undefined *)(iVar5 + 0x10) = 3;
          *(char *)(iVar5 + 0x11) = (char)uVar2;
          *(int *)(iVar5 + 0x28) = param_1;
        }
        uVar4 = uVar2 * 0x10000 + 0x10000;
        uVar2 = uVar4 >> 0x10;
      } while ((int)uVar4 >> 0x10 < (int)uVar3);
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    uVar1 = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

