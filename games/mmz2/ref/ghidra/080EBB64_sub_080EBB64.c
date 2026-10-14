// sub_080EBB64 at 0x080EBB64 (thumb)

undefined4 sub_080EBB64(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0x17c;
  if (*(byte *)(param_1 + 0x20a + (param_2 & 0xff)) - 1 < 0x51) {
    iVar1 = 0x17e;
  }
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1],1,0x12);
  return in_lr;
}

