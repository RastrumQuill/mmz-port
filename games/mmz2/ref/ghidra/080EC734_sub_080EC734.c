// sub_080EC734 at 0x080EC734 (thumb)

undefined4 sub_080EC734(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(short *)(param_1 + 4) == 4) && ((DAT_02000d14 & 1) != 0)) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xdde);
    iVar3 = sub_080D5968(*(undefined4 *)(param_1 + 0x75b8),(uint)bVar1);
    sub_080DE510(&DAT_0834c9e4 +
                 (ushort)(&DAT_0834c47c)
                         [*(ushort *)
                           (((iVar3 << 0x18) >> 0x16) +
                            *(int *)(&DAT_0834a660 +
                                    (uint)(byte)(&DAT_0834a1d7)[(uint)bVar1 * 0xc] * 4) + -2)],0x11,
                 10);
    uVar2 = sub_080ECD3C(*(undefined *)(param_1 + 0xddc));
    *(undefined *)(param_1 + 0xddc) = uVar2;
  }
  return in_lr;
}

