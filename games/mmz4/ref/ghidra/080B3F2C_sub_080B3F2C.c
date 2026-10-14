// sub_080B3F2C at 0x080B3F2C (thumb)

undefined4 sub_080B3F2C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x36ff);
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar5 = 0xfffffe00;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      uVar5 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar7 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar7;
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar4 = sub_08007C7C(iVar6 + -0xc00,iVar7 + -0x100);
      if (sVar4 == 0) {
        sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
        if (sVar4 != 0) goto LAB_080b41b4;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
        uVar3 = 1;
      }
      else {
        sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x3700);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        *(undefined *)(param_1 + 0x12) = 0x10;
        uVar3 = 2;
      }
    }
    else {
      sVar4 = sub_08007C7C(iVar6 + 0xc00,iVar7 + -0x100);
      if (sVar4 == 0) {
        sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
        if (sVar4 != 0) goto LAB_080b41b4;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
        uVar3 = 1;
      }
      else {
        sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x3700);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        *(undefined *)(param_1 + 0x12) = 0x10;
        uVar3 = 2;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar4 = sub_08007C7C(iVar7 + -0xc00,*(int *)(param_1 + 0x58) + -0x100);
        if (sVar4 != 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined *)(param_1 + 0x4c) = 1;
          bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
          goto LAB_080b4150;
        }
      }
      else {
        sVar4 = sub_08007C7C(iVar7 + 0xc00,*(int *)(param_1 + 0x58) + -0x100);
        if (sVar4 != 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined *)(param_1 + 0x4c) = 0;
          bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
LAB_080b4150:
          *(byte *)(param_1 + 0x4a) = bVar1;
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
      if (sVar4 == 0) goto LAB_080b41b4;
      uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    else {
      uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) goto LAB_080b41b4;
      sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x36ff);
    }
    uVar3 = 0;
  }
  *(undefined *)(param_1 + 0xf) = uVar3;
LAB_080b41b4:
  sub_0801CFF0(param_1);
  return in_lr;
}

