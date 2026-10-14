// sub_0800C0B4 at 0x0800C0B4 (thumb)

undefined4 sub_0800C0B4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0800696C();
  uVar4 = (uint)(ushort)DAT_02004f48;
  uVar3 = (uint)DAT_02004f48._2_2_;
  piVar1 = (int *)FUN_0800061c(0x280);
  if (piVar1 != (int *)0x0) {
    DAT_030004f8 = &DAT_0400001c;
    DAT_030004fc = 0xa6600001;
    iVar2 = 0;
    DAT_030004f4 = piVar1;
    do {
      *piVar1 = uVar4 + (uVar3 + ((int)((uint)(ushort)(&DAT_080c8e24)
                                                      [(uint)*(ushort *)(param_1 + 0x60) +
                                                       iVar2 * -0x10 & 0xff] << 0x10) >> 0x18)) *
                        0x10000;
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xa0);
  }
  return in_lr;
}

