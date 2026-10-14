// sub_0800C134 at 0x0800C134 (thumb)

undefined4 sub_0800C134(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 in_lr;
  
  sub_0800696C();
  uVar1 = DAT_02004f46;
  uVar2 = DAT_02004f44;
  uVar8 = (uint)DAT_02004f44;
  uVar9 = (uint)DAT_02004f46;
  uVar14 = (uint)(ushort)DAT_02004f48;
  uVar3 = (uint)DAT_02004f48._2_2_;
  iVar4 = *(int *)(param_1 + 0x38);
  iVar5 = iVar4 + -0xf0;
  if (iVar5 < 1) {
    iVar12 = 0xa0;
  }
  else {
    iVar12 = 0xa0 - iVar5;
  }
  iVar6 = FUN_0800061c(0x500);
  if (iVar6 != 0) {
    DAT_030004f8 = &DAT_04000018;
    DAT_030004fc = 0xa6600002;
    iVar11 = 0x9f;
    DAT_030004f4 = iVar6;
    if (iVar12 < 0x9f) {
      puVar7 = (undefined4 *)(iVar6 + 0x4f8);
      do {
        *puVar7 = CONCAT22(uVar1,uVar2);
        puVar7 = puVar7 + -2;
        iVar11 = iVar11 + -1;
      } while (iVar12 < iVar11);
    }
    iVar11 = 0;
    if (-1 < iVar12) {
      puVar13 = (uint *)(iVar12 * 8 + iVar6);
      do {
        iVar10 = iVar11 >> 3;
        if (8 < iVar10) {
          iVar10 = 8;
        }
        *puVar13 = uVar8 + (iVar10 * (short)(&DAT_080c8e24)
                                            [(uint)*(ushort *)(param_1 + 0x62) +
                                             iVar12 + iVar4 + 0x10 + (iVar11 + iVar5 & 1U) * 0x20 &
                                             0xff] >> 8) & 0xffff | uVar9 << 0x10;
        puVar13 = puVar13 + -2;
        iVar12 = iVar12 + -1;
        iVar11 = iVar11 + 1;
      } while (-1 < iVar12);
    }
    iVar4 = 0;
    do {
      *(uint *)(iVar6 + 4) =
           uVar14 + (uVar3 + ((int)((uint)(ushort)(&DAT_080c8e24)
                                                  [(uint)*(ushort *)(param_1 + 0x60) + iVar4 * -0x10
                                                   & 0xff] << 0x10) >> 0x18)) * 0x10000;
      iVar6 = iVar6 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xa0);
  }
  if ((DAT_02022ae4 & 8) == 0) {
    DAT_02004f70 = 0x3f44;
    DAT_02004f72 = 0x100c;
    sub_08001904(0xc,0x40);
  }
  else {
    uVar3 = (uint)(byte)DAT_02022668;
    DAT_02022668._0_1_ = (byte)(uVar3 - 1);
    if ((int)((uVar3 - 1) * 0x1000000) < 0) {
      DAT_02022668._0_1_ = 0;
    }
    DAT_02004f70 = 0x3f44;
    uVar2 = sub_080C8AD0((int)(char)(byte)DAT_02022668,10);
    DAT_02004f72 = uVar2 & 0x1f | 0x1000;
    sub_08001904(0xc,0x40);
  }
  return in_lr;
}

