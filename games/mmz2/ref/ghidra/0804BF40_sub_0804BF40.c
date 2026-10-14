// sub_0804BF40 at 0x0804BF40 (thumb)

undefined4 sub_0804BF40(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa109);
    sVar5 = -0x400;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      sVar5 = 0x400;
    }
    iVar6 = *(int *)(param_1 + 0xd8);
    if (((iVar6 != 0) && ((*(uint *)(iVar6 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(iVar6 + 0xa4) != 0)) {
      sub_08022EA8(iVar6,0,(int)sVar5,0xfffffc00,0,0x40,0x40,0);
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833b2b0);
    *(undefined *)(param_1 + 0x4d) = 0;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xdf;
    uVar4 = *(byte *)(param_1 + 10) & 0xdf;
    *(char *)(param_1 + 10) = (char)uVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x3500;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    *(byte *)(param_1 + 0x4c) = ((byte)(uVar4 >> 4) ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffe80;
    }
    else {
      uVar3 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar6 = *(int *)(param_1 + 0x60) + -0x40;
  *(int *)(param_1 + 0x60) = iVar6;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

