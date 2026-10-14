// sub_080ED374 at 0x080ED374 (thumb)

void sub_080ED374(void)

{
  int iVar1;
  int in_r3;
  
  iVar1 = sub_080ED2DC();
  *(short *)(iVar1 + 0x1c) = (short)(in_r3 * 2);
  *(short *)(iVar1 + 0x20) = (short)((uint)*(ushort *)(iVar1 + 0x1e) * in_r3 * 2 >> 8);
  return;
}

