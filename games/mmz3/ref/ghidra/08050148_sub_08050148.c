// sub_08050148 at 0x08050148 (thumb)

void sub_08050148(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(param_1 + 200);
  *puVar1 = *puVar1 + 0x200;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc4) + (short)(&DAT_080fe64c)[*puVar1 >> 8] * 4;
  return;
}

