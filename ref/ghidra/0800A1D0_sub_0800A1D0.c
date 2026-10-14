// sub_0800A1D0 at 0x0800A1D0 (thumb)

undefined4 sub_0800A1D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_0800696C();
  uVar4 = (uint)(ushort)DAT_02004f48;
  uVar5 = (uint)DAT_02004f48._2_2_;
  piVar1 = (int *)FUN_0800061c(0x280);
  if (piVar1 != (int *)0x0) {
    DAT_030004f8 = &DAT_0400001c;
    DAT_030004fc = 0xa6600001;
    iVar2 = 0;
    piVar3 = piVar1;
    DAT_030004f4 = piVar1;
    do {
      *piVar3 = (uVar4 - (iVar2 >> 2) & 0xffff) + uVar5 * 0x10000;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x8f);
    iVar2 = 0x8f;
    piVar1 = piVar1 + 0x8f;
    do {
      *piVar1 = uVar4 + (uVar5 + ((int)((uint)(ushort)(&DAT_080c8e24)
                                                      [(uint)*(ushort *)(param_1 + 0x60) +
                                                       iVar2 * -0x10 & 0xff] << 0x10) >> 0x18)) *
                        0x10000;
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xa0);
  }
  sub_08001904(0x68,0);
  return in_lr;
}

