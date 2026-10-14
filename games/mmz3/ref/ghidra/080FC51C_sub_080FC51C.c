// sub_080FC51C at 0x080FC51C (thumb)

void sub_080FC51C(void)

{
  int iVar1;
  int in_r3;
  
  iVar1 = sub_080FC484();
  *(short *)(iVar1 + 0x1c) = (short)(in_r3 * 2);
  *(short *)(iVar1 + 0x20) = (short)((uint)*(ushort *)(iVar1 + 0x1e) * in_r3 * 2 >> 8);
  return;
}

