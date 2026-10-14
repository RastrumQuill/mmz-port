// sub_08099BA8 at 0x08099BA8 (thumb)

void sub_08099BA8(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x74) + (short)(&DAT_080c8e24)[(uint)*(byte *)(param_1 + 0x12) * 4] * 2;
  iVar1 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar1 + (char)(iVar1 >> 6) * -0x40;
  return;
}

