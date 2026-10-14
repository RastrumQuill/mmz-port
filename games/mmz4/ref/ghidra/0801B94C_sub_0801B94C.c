// sub_0801B94C at 0x0801B94C (thumb)

undefined4 sub_0801B94C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = sub_08103A78(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = sub_08128954(*(ushort *)(param_1 + 0x10) + 1,3);
  *(short *)(param_1 + 0x10) = (short)iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + ((iVar2 + -1) * 0x10000 >> 0x10);
  return in_lr;
}

