// sub_0801B66C at 0x0801B66C (thumb)

undefined4 sub_0801B66C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_10 = 0;
    local_c = 0;
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0x1004;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    uVar1 = sub_080F6F48(&local_10,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 8;
  iVar2 = *(ushort *)(param_1 + 0x10) + 2;
  *(short *)(param_1 + 0x10) = (short)iVar2;
  iVar2 = ((*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 * 0x1000000) >> 0x17)) + 0x100 >> 5) +
           0x18 >> 2) + 1;
  *(int *)(param_1 + 0x68) = iVar2;
  DAT_02000a42 = (ushort)iVar2 & 0x1f | 0x1000;
  return in_lr;
}

