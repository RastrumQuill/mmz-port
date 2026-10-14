// sub_0803E810 at 0x0803E810 (thumb)

undefined4 sub_0803E810(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ae208);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,0x16);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
    uVar4 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar3 = sub_0803DB00(param_1);
  if ((uVar3 & 1) != 0) {
    sub_08001EAC(0xa8);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if ((uVar3 & 2) != 0) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if ((uVar3 & 8) != 0) {
    sub_08001EAC(0xa8);
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

