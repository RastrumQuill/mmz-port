// sub_080DEE58 at 0x080DEE58 (thumb)

undefined4 sub_080DEE58(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = 0x100 - (uVar4 * 0x80 >> 0x17);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_0802B6C0(uVar1,8);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == -1) || (sVar3 = sub_08007C7C(iVar5), sVar3 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

