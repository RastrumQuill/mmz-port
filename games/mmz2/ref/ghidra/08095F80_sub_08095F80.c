// sub_08095F80 at 0x08095F80 (thumb)

undefined4 sub_08095F80(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 in_lr;
  
  bVar6 = *(byte *)(param_1 + 0xf);
  if (bVar6 != 1) {
    if (1 < bVar6) {
      if (bVar6 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (bVar6 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080127E4(param_1,0x904);
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      sub_080B0ACC(param_1 + 0x54,&DAT_08342ce4,0,*(byte *)(param_1 + 10) & 0x10);
    }
    else {
      sub_080B1650(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1,*(undefined *)(param_1 + 0xbc))
      ;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  sVar1 = sub_08008CFC(iVar3,iVar4 + 0x800);
  if (sVar1 != 0) {
    iVar3 = param_1 + 0x54;
    pbVar5 = (byte *)(param_1 + 0xbc);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B0ACC(iVar3,&DAT_08342c90,0,bVar6);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B0ACC(iVar3,&DAT_08342cac,0,bVar6);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B0ACC(iVar3,&DAT_08342cc8,0,bVar6);
    sub_080AC60C(1,iVar3);
    sub_080032EC(0x2a);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar3);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

