// sub_080DF9C8 at 0x080DF9C8 (thumb)

undefined4 sub_080DF9C8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x77) == '\0') {
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 +
                        ((*(byte *)(param_1 + 0x75) + 0x40) * 0x1000000 >> 0x17)) >> 2;
    iVar1 = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x75)];
  }
  else {
    *(undefined *)(param_1 + 0x12) = 6;
    *(undefined *)(param_1 + 0x13) = 6;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x75) + 0x40) * 0x1000000 >> 0x17)) *
         3 >> 2;
    iVar1 = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x75)] * 3;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  return in_lr;
}

