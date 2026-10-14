// sub_080AA990 at 0x080AA990 (thumb)

undefined4 sub_080AA990(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9000);
    *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * -0x280;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885f678);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08007C7C(uVar5,uVar6);
    if (sVar3 == 0) {
LAB_080aaa38:
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      uVar5 = sub_08008748(uVar5,uVar6);
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08007C7C(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aaa38;
    iVar4 = sub_08008534(uVar5,uVar6);
    *(int *)(param_1 + 0x58) = iVar4 + -1;
    bVar1 = true;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08007C7C(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aaae8;
    uVar5 = sub_08008988(uVar5,uVar6);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    uVar7 = uVar7 + 1 & 1;
    if (uVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08007C7C(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aaae8;
    uVar5 = sub_08008868(uVar5,uVar6);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    uVar7 = uVar7 + 1 & 1;
    if (uVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
LAB_080aaae8:
  if (bVar1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

