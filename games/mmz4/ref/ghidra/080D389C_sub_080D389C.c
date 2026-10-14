// sub_080D389C at 0x080D389C (thumb)

undefined4 sub_080D389C(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (((*(uint *)(iVar6 + 0x8c) & 0x200) != 0) || (*(short *)(iVar6 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D3A78(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) && (*(char *)(param_1 + 0x71) < '\x02')) {
      *(byte *)(iVar6 + 0x142) = *(byte *)(iVar6 + 0x142) | 8;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  iVar4 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar4 = sub_08007B84(iVar6 + 0x54);
  }
  *(int *)(param_1 + 0x58) = iVar4;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 2) {
LAB_080d39a4:
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x54)) {
      cVar3 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d39d0:
      *(char *)(param_1 + 0xd) = cVar3;
    }
  }
  else if (bVar1 < 3) {
    if (bVar1 == 1) {
      sub_0801CF00(param_1,0x14);
      sub_0801CFF0(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d39a4;
    }
  }
  else {
    if (bVar1 == 3) {
      sub_0801CF00(param_1,0x15);
      sub_0801CFF0(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 4) goto LAB_080d39d2;
    if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x54)) {
      cVar3 = '\x01';
      goto LAB_080d39d0;
    }
  }
LAB_080d39d2:
  sVar2 = *(short *)(&DAT_0884fe36 + (uint)*(byte *)(iVar6 + 0x174) * 8);
  iVar4 = *(int *)(iVar6 + 0x58);
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar5 = sub_08007B84(iVar6 + 0x54);
    if (iVar5 < iVar4 - sVar2) goto LAB_080d3a4e;
    iVar4 = *(int *)(iVar6 + 0x58);
  }
  else if (DAT_0202cabc < iVar4 - sVar2) goto LAB_080d3a4e;
  iVar5 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar5 = sub_08007B84(iVar6 + 0x54);
  }
  if (iVar5 <= iVar4) {
    return in_lr;
  }
LAB_080d3a4e:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  sub_080D3A78(param_1);
  return in_lr;
}

