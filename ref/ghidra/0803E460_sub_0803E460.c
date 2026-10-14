// sub_0803E460 at 0x0803E460 (thumb)

undefined4 sub_0803E460(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),0x12);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,5);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar5 = (uint)bVar1;
    *(uint *)(param_1 + 0x54) = uVar5 * 0x400 + -0x200;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar5 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x6800;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082adfa0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0803e594;
  iVar4 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x380 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar5 = sub_0803D958(param_1);
  if ((uVar5 & 1) != 0) {
    sub_08001EAC(0xa8);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x04') {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if ((uVar5 & 2) != 0) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar3;
    if (bVar3 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  if ((uVar5 & 8) != 0) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_080297C0(param_1);
LAB_0803e594:
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

