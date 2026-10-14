// sub_080E5B24 at 0x080E5B24 (thumb)

undefined4 sub_080E5B24(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar5 + 0x3000);
    iVar5 = param_1 + 0x54;
    if ((sVar2 != 0xf) && (sVar2 != 0)) {
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + 0x2600;
      sub_080D0894(1,&local_18);
      sub_08002B10(0x2a);
      sub_080E57F8(iVar5,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E57F8(iVar5,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    uVar3 = sub_0801FB14(&DAT_0202e9f8,iVar5);
    if (uVar3 < 0x4001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar5;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar5 + 0x3000);
      if (sVar2 == 0xf) {
        return in_lr;
      }
      if (sVar2 == 0) {
        return in_lr;
      }
    }
    else {
      cVar1 = sub_080E5CFC(param_1);
      if (cVar1 == '\0') {
        return in_lr;
      }
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + 0xf00;
      sub_080D0894(1,&local_18);
      sub_08002B10(0x2a);
    }
    sub_080E57F8(param_1 + 0x54,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E57F8(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

