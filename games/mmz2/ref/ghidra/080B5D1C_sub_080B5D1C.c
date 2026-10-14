// sub_080B5D1C at 0x080B5D1C (thumb)

undefined4 sub_080B5D1C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(iVar2 + 0x54);
      iVar6 = *(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58);
      uVar3 = sub_080EEF7C(iVar5 * iVar5 + iVar6 * iVar6);
      uVar3 = uVar3 & 0xffff;
      iVar5 = sub_080EF150(iVar5 * 0x100,uVar3);
      iVar4 = sub_080EF150(iVar6 * 0x100,uVar3);
      iVar6 = *(int *)(param_1 + 100) * 0xe0;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      iVar6 = iVar6 >> 8;
      *(int *)(param_1 + 100) = iVar6;
      if (iVar6 < 0x100) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc);
        return in_lr;
      }
      if (iVar6 < (int)uVar3) {
        iVar5 = iVar5 * iVar6;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + (iVar5 >> 8);
        iVar4 = iVar4 * iVar6;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + (iVar4 >> 8);
      }
      sub_08012A14(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa728);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(iVar5 + 0xbc) & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) - *(int *)(iVar2 + 0x54);
  iVar6 = *(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58);
  uVar3 = sub_080EEF7C(iVar5 * iVar5 + iVar6 * iVar6);
  uVar3 = uVar3 & 0xffff;
  iVar5 = sub_080EF150(iVar5 * 0x100,uVar3);
  iVar6 = sub_080EF150(iVar6 * 0x100,uVar3);
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 < (int)uVar3) {
    iVar5 = iVar5 * iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + (iVar5 >> 8);
    iVar6 = iVar6 * iVar4;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + (iVar6 >> 8);
  }
  sub_08012A14(param_1);
  return in_lr;
}

