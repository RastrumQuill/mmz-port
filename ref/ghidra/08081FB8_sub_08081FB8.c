// sub_08081FB8 at 0x08081FB8 (thumb)

undefined4 sub_08081FB8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0800561C(param_1 + 0x74,&DAT_082b2958);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar4 = sub_08081D00(param_1);
  if ((uVar4 & 1) != 0) {
    sub_08001EAC(0xa8);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb80;
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x03') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*(uint *)(iVar5 + 0xc4) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
  }
  if ((uVar4 & 2) != 0) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  if ((uVar4 & 8) != 0) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

