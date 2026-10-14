// sub_080A4F04 at 0x080A4F04 (thumb)

undefined4 sub_080A4F04(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x11) & 0xf) == 0) {
    sub_080127E4(param_1,0x5500);
  }
  else {
    sub_080127E4(param_1,0x5501);
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  pbVar7 = (byte *)(param_1 + 0x4c);
  *pbVar7 = (byte)uVar5;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | (byte)(uVar5 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344e18,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x11);
  if ((bVar1 & 0xf) == 0) {
    if ((bVar1 & 0xf0) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2900;
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2900;
      }
      goto LAB_080a50ae;
    }
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *pbVar7 = bVar1 & 0x10;
      *pbVar6 = *pbVar6 & 0xef;
      iVar2 = *(int *)(param_1 + 0x54) + -0x2200;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *pbVar7 = 1;
      *pbVar6 = *pbVar6 & 0xef | 0x10;
      iVar2 = *(int *)(param_1 + 0x54) + 0x2200;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = *(int *)(param_1 + 0x58);
    iVar4 = -0x1600;
LAB_080a50aa:
    iVar2 = iVar2 + iVar4;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = -0x1b00;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = 0x1b00;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar4;
    if (*(char *)(param_1 + 0x11) != '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *pbVar6 = *pbVar6 & 0xdf | 0x20;
      iVar2 = *(int *)(param_1 + 0x58);
      iVar4 = 0x1400;
      goto LAB_080a50aa;
    }
    iVar2 = *(int *)(param_1 + 0x58) + -0x2000;
  }
  *(int *)(param_1 + 0x58) = iVar2;
LAB_080a50ae:
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A4EA4(param_1);
  return in_lr;
}

