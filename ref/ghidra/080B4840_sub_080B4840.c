// sub_080B4840 at 0x080B4840 (thumb)

uint sub_080B4840(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    if ((char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc] == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x1c2 + (char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc] * 2)
      ;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

