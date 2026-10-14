// sub_081268F0 at 0x081268F0 (thumb)

void sub_081268F0(void)

{
  int iVar1;
  int in_r3;
  
  iVar1 = sub_08126858();
  *(short *)(iVar1 + 0x1c) = (short)(in_r3 * 2);
  *(short *)(iVar1 + 0x20) = (short)((uint)*(ushort *)(iVar1 + 0x1e) * in_r3 * 2 >> 8);
  return;
}

