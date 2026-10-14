// sub_0800F7E4 at 0x0800F7E4 (thumb)

undefined4 sub_0800F7E4(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar1 = (ushort *)(param_1 + 0x6c);
  if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x34)) * 0x10 + 0xf00 < (int)(uint)*puVar1) {
    *puVar1 = 0;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x34) & 0x1ff;
  }
  *puVar1 = *puVar1 + 2;
  return in_lr;
}

