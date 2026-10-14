// sub_080AB028 at 0x080AB028 (thumb)

undefined4 sub_080AB028(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = false;
  iVar8 = 0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9005);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885f6a8);
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    uVar5 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x2000 < uVar5) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08007C7C(uVar6,uVar7);
    if (sVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      iVar4 = sub_08008534(uVar6,uVar7);
      *(int *)(param_1 + 0x58) = iVar4 + -1;
      bVar1 = true;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      uVar7 = *(undefined4 *)(param_1 + 0x58);
      sVar3 = sub_08007C7C(uVar6,uVar7);
      if (sVar3 != 0) {
        uVar6 = sub_08008988(uVar6,uVar7);
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        iVar8 = 1;
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      uVar7 = *(undefined4 *)(param_1 + 0x58);
      sVar3 = sub_08007C7C(uVar6,uVar7);
      if (sVar3 != 0) {
        uVar6 = sub_08008868(uVar6,uVar7);
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        iVar8 = 1;
      }
    }
  }
  if (bVar1) {
    uVar5 = (bVar2 >> 4 & 1) + iVar8 & 1;
    if (uVar5 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    sub_080AB254(param_1);
  }
  return in_lr;
}

