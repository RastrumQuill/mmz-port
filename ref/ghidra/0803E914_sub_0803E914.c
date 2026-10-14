// sub_0803E914 at 0x0803E914 (thumb)

undefined4 sub_0803E914(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),3);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_20 = (uVar4 ^ 1) * 0x1c00 + *(int *)(param_1 + 0x4c) + -0xe00;
    local_1c = *(undefined4 *)(param_1 + 0x50);
    local_18 = -*(int *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_08082614(param_1,&local_20);
    sub_08029778(param_1,0x19);
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0xe00 + uVar4 * 0x1c00;
    sub_0800561C(param_1 + 0x74,&DAT_082adfd8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0803ea48;
  iVar3 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar4 = sub_0803DB00(param_1);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\x02') || ((*(uint *)(param_1 + 0xc4) & 1) != 0)) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if ((uVar4 & 2) != 0) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  if ((uVar4 & 8) != 0) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_080297C0(param_1);
LAB_0803ea48:
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 1;
  }
  return in_lr;
}

