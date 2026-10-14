// sub_080EC59C at 0x080EC59C (thumb)

undefined4 sub_080EC59C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xdde);
  if ((DAT_02000d14 & 1) == 0) {
    iVar3 = sub_080D5968(*(undefined4 *)(param_1 + 0x75b8),(uint)bVar1);
    sub_080DE510(&DAT_0834c9e4 +
                 (ushort)(&DAT_0834c47c)
                         [*(ushort *)
                           (((iVar3 << 0x18) >> 0x16) +
                           *(int *)(&DAT_0834a660 +
                                   (uint)(byte)(&DAT_0834a1d7)[(uint)bVar1 * 0xc] * 4))],0x11,10);
    uVar2 = sub_080ECD3C(*(undefined *)(param_1 + 0xddc));
    *(undefined *)(param_1 + 0xddc) = uVar2;
  }
  else if (*(ushort *)(param_1 + 0xde0) < *(ushort *)(param_1 + 0xde4)) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 4) = 2;
    *(undefined *)(param_1 + 0xde8) = 0;
    *(undefined *)(param_1 + 0xde9) = 1;
    *(undefined *)(param_1 + 0xdea) = 2;
  }
  return in_lr;
}

