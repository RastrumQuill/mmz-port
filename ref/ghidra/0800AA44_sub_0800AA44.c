// sub_0800AA44 at 0x0800AA44 (thumb)

undefined4 sub_0800AA44(int param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (ushort)((byte)DAT_02022668 >> 4);
  if (DAT_02005208 == 4) {
    if (0x10 < (byte)DAT_02022668 >> 4) {
      uVar2 = 0x10;
    }
    if (DAT_0202265c != 0) {
      DAT_02004f70 = 0x3f44;
      DAT_02004f72 = uVar2 | 0x1000;
    }
    if ((DAT_02022ae1 & 8) == 0) {
      if ((DAT_02022ae1 & 0x10) == 0) {
        iVar3 = 2;
        DAT_02022660 = DAT_02022ae1 & 0x10;
      }
      else {
        iVar3 = 1;
        DAT_02022660 = DAT_02022660 - 0x300;
      }
    }
    else {
      iVar3 = 0;
      DAT_02022660 = DAT_02022660 + 0x300;
    }
    DAT_02022664 = DAT_02022664 + -0x300;
    sub_08001574(&DAT_087df260 + iVar3 * 0xc,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
    sub_08001904(0x24,0);
    uVar1 = *(uint *)(param_1 + 0x54) >> 4;
    *(short *)(&DAT_02004f3c + uVar1) = *(short *)(param_1 + 0x34) + (short)(DAT_02022660 >> 8);
    *(short *)((int)&DAT_02004f3c + uVar1 * 4 + 2) =
         *(short *)(param_1 + 0x38) + (short)((uint)DAT_02022664 >> 8);
  }
  else {
    DAT_02004f30 = DAT_02004f30 & ~(ushort)(*(int *)(param_1 + 0x54) << 8);
  }
  return in_lr;
}

