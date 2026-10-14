// sub_0805D390 at 0x0805D390 (thumb)

undefined4 sub_0805D390(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x24) = 0;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb502);
    sub_08007390(param_1 + 0x74,&DAT_08361600);
    pbVar4 = (byte *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0x4c) = *pbVar4 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar4 & 1) << 4);
    if ((*pbVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar2 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar2 != 0) {
        iVar5 = sub_0800A3C4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0x800);
        *(int *)(param_1 + 0x54) = iVar5 + -0x1200;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar3 = 0x1000;
    }
    else {
      sVar2 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0x800);
      if (sVar2 != 0) {
        iVar5 = sub_0800A4B4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0x800);
        *(int *)(param_1 + 0x54) = iVar5 + 0x1200;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      uVar3 = 0xfffff000;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  sVar2 = sub_08009A3C(iVar5,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0xb8) <= iVar5) goto LAB_0805d4fe;
    }
    else if (iVar5 <= *(int *)(param_1 + 0xb4)) goto LAB_0805d4fe;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
LAB_0805d4fe:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 != 0) {
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

