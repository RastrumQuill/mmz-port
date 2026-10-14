// sub_0803B610 at 0x0803B610 (thumb)

undefined4 sub_0803B610(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,10);
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
    iVar3 = *(int *)(param_1 + 0x54) * 0xa0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = -(iVar3 >> 8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801412C(4,param_1 + 0x4c);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\f') {
    sub_0800561C(param_1 + 0x74,&DAT_082adbd0);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if ((0 < *(int *)(param_1 + 0x58)) &&
     (iVar3 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     iVar3 < 0)) {
    sub_0801412C(8,param_1 + 0x4c);
    sub_08001EAC(0x48);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

