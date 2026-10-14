// sub_0800A3D8 at 0x0800A3D8 (thumb)

undefined4 sub_0800A3D8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_0800696C();
  uVar5 = (uint)DAT_02004f44;
  uVar4 = (uint)DAT_02004f46;
  iVar1 = FUN_0800061c(0x280);
  if (iVar1 != 0) {
    DAT_030004f8 = &DAT_04000018;
    DAT_030004fc = 0xa6600001;
    piVar2 = (int *)(iVar1 + 0x234);
    DAT_030004f4 = iVar1;
    do {
      *piVar2 = uVar5 + uVar4 * 0x10000;
      piVar2 = piVar2 + -1;
    } while (iVar1 <= (int)piVar2);
    iVar3 = 0x8e;
    piVar2 = (int *)(iVar1 + 0x238);
    do {
      *piVar2 = uVar5 + (uVar4 + ((int)((uint)(ushort)(&DAT_080c8e24)
                                                      [(uint)*(ushort *)(param_1 + 0x60) +
                                                       iVar3 * -0x10 & 0xff] << 0x10) >> 0x18)) *
                        0x10000;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xa0);
  }
  return in_lr;
}

