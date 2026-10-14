// sub_080B47F0 at 0x080B47F0 (thumb)

uint sub_080B47F0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    iVar2 = (int)(char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc];
    if (iVar2 == -1) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)((byte)(&DAT_082b72ec)[iVar2] <= *(byte *)(param_1 + 0x46 + iVar2));
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

