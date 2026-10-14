// sub_08051394 at 0x08051394 (thumb)

void sub_08051394(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(param_1 + 0xba);
  *puVar1 = *puVar1 + 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080fe64c)[*puVar1 >> 8] * 4;
  return;
}

