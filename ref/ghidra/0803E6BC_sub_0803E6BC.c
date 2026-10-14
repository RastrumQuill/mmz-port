// sub_0803E6BC at 0x0803E6BC (thumb)

undefined4 sub_0803E6BC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082adfbc);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    local_1c = (*(byte *)(param_1 + 10) >> 4 & 1 ^ 1) * 0x2600 + *(int *)(param_1 + 0x4c) + -0x1300;
    local_18 = *(undefined4 *)(param_1 + 0x50);
    local_14 = -*(int *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_08081BE4(param_1,&local_1c);
    sub_08029778(param_1,0x15);
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar5 = iVar3 + -0x1300;
    *(int *)(param_1 + 0x4c) = iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar5 = iVar3 + 0x1300;
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0803e7f2;
  iVar3 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar4 = sub_0803DA30(param_1);
  if ((uVar4 & 1) != 0) {
    sub_08001EAC(0xa8);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb80;
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\x03') {
      *(undefined *)(param_1 + 0xd) = 9;
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
    sub_08001EAC(0xa8);
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_080297C0(param_1);
LAB_0803e7f2:
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

