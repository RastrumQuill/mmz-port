// sub_080AAF1C at 0x080AAF1C (thumb)

undefined4 sub_080AAF1C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9004);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885f6a8);
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = sub_08007C7C(uVar4,uVar5);
    if (sVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      uVar4 = sub_08008748(uVar4,uVar5);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      sVar2 = sub_08007C7C(uVar4,uVar5);
      if (sVar2 != 0) {
        uVar4 = sub_08008988(uVar4,uVar5);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      sVar2 = sub_08007C7C(uVar4,uVar5);
      if (sVar2 != 0) {
        uVar4 = sub_08008868(uVar4,uVar5);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
    }
  }
  if (-1 < *(int *)(param_1 + 0x60)) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

