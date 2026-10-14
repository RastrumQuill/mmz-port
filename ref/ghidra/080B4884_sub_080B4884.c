// sub_080B4884 at 0x080B4884 (thumb)

undefined8 sub_080B4884(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    iVar2 = (int)(char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc];
    if (iVar2 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)
                     ((uint)*(byte *)(param_1 + 0x1ea + iVar2) * 2 +
                     *(int *)(&DAT_082b729c + iVar2 * 4));
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

