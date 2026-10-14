// sub_080C6CF8 at 0x080C6CF8 (thumb)

void sub_080C6CF8(void)

{
  int iVar1;
  int in_r3;
  
  iVar1 = sub_080C6C60();
  *(short *)(iVar1 + 0x1c) = (short)(in_r3 * 2);
  *(short *)(iVar1 + 0x20) = (short)((uint)*(ushort *)(iVar1 + 0x1e) * in_r3 * 2 >> 8);
  return;
}

