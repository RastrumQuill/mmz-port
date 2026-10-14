// sub_0800BED0 at 0x0800BED0 (thumb)

uint sub_0800BED0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (((param_2 >> 0xc) + -1) * 0x10000 >> 0x10) * (uint)DAT_02002c60;
  iVar1 = ((param_1 >> 0xc) + -1) * 0x10000 >> 0x10;
  return -(uint)((&DAT_02002c60)[iVar2 + iVar1 + 2] ^ (&DAT_02002c60)[iVar2 + iVar1 + 0x7a]) >> 0x1f
  ;
}

