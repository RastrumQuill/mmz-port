// sub_08075958 at 0x08075958 (thumb)

undefined4 sub_08075958(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
    sub_080032EC(0xe1);
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
      sub_08006DE4(param_1 + 0x74,&DAT_0833f9ec,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = iVar4 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (iVar3 >> 8);
    iVar3 = iVar4 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar3 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4 + 0x10;
    if (0x4ff < iVar4 + 0x10) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08075570(param_1);
  }
  return in_lr;
}

