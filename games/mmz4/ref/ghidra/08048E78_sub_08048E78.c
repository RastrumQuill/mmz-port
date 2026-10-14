// sub_08048E78 at 0x08048E78 (thumb)

undefined4 sub_08048E78(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xbd) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x1004) != 0)) {
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  pbVar3 = (byte *)(iVar7 + 0x150);
  if (*pbVar3 == 0xff) {
    if ((*(char *)(param_1 + 0xbd) != '\0') && (cVar1 = sub_0803AAC8(iVar7), cVar1 != '\0')) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x2a);
    }
    *(byte *)(iVar7 + 0x153) = *(byte *)(iVar7 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x71);
    uVar8 = ((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x18;
    if ((*(uint *)(param_1 + 0x8c) & 0x1004) == 0) {
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08049040;
      uVar4 = 0x8123;
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        sub_08002B10(0x2b);
      }
      uVar4 = *(undefined2 *)(&DAT_08853c80 + (uint)*(byte *)(param_1 + 0x13) * 2);
    }
    sub_0801CF00(param_1,uVar4);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    uVar8 = ((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x18;
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      sub_08002B10(0x2b);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (0x1f < bVar2) {
      sub_0801CFC8(param_1,0x8125,4 - (ushort)*(byte *)(param_1 + 0x13),2);
      sub_0801CFF0(param_1);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xf) = 2;
    }
  }
  else {
    *(char *)(param_1 + 0x13) = '\x04' - *(char *)(param_1 + 0x71);
    uVar8 = ((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x18;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(iVar7 + 0x153) = *(byte *)(iVar7 + 0x153) | 0x40;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
  }
LAB_08049040:
  bVar2 = *(byte *)(iVar7 + 10) >> 4;
  uVar6 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  uVar6 = (uint)(*(char *)(iVar7 + 0x71) == '\x03');
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(iVar7 + 0x54) + *(int *)(&DAT_08850010 + uVar6 * 8 + (uint)*pbVar3 * 0x10);
  }
  else {
    iVar5 = *(int *)(iVar7 + 0x54) - *(int *)(&DAT_08850010 + uVar6 * 8 + (uint)*pbVar3 * 0x10);
  }
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar7 + 0x58) + *(int *)(&UNK_08850014 + uVar6 * 8 + (uint)*pbVar3 * 0x10);
  *(undefined *)(param_1 + 0x24) = (&DAT_088500b0)[*pbVar3];
  sub_08005794(param_1 + 0x74,&DAT_08853b90 + uVar8 * 0x18,0xffffffff,0xffffffff,0xffffffff,
               *(byte *)(param_1 + 0x12) >> 2);
  return in_lr;
}

