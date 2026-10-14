// sub_0804CCDC at 0x0804CCDC (thumb)

undefined4 sub_0804CCDC(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar11 = *(int *)(param_2 + 8);
  sVar1 = (short)((uint)((*(int *)(iVar2 + 0x54) - iVar11) * 0x100) >> 0x10);
  iVar3 = *(int *)(iVar2 + 0xd0);
  iVar4 = *(int *)(iVar2 + 0x58);
  iVar9 = *(int *)(param_2 + 0xc);
  DAT_02000fe0 = DAT_02000fe0 | 0x4000;
  DAT_02000fec._1_1_ = 0x3f;
  DAT_02000fec._2_1_ = DAT_02000fec._2_1_ & 0xfb;
  iVar5 = sub_080008C8(0x140);
  if (iVar5 == 0) {
    DAT_02000fe8._2_2_ = 0xa0;
    return in_lr;
  }
  sub_0800090C(0,iVar5,0x140);
  uVar13 = 0;
  iVar9 = (iVar4 - iVar9) * 0x100 >> 0x10;
  iVar4 = iVar9;
  while( true ) {
    if (-1 < iVar4 + -0x25) {
      if (0x9f < iVar4 + -0x25) {
        DAT_02000fe8._2_2_ = 0xa0;
        DAT_03001704 = iVar5;
        DAT_03001708 = 0x4000042;
        DAT_0300170c = 0xa2600001;
        return in_lr;
      }
      sVar10 = (short)((uint)((iVar3 - iVar11) * 0x100) >> 0x10);
      if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
        iVar12 = (int)(uVar13 << 0x10) >> 0xf;
        iVar4 = (int)sVar1 + (byte)(&DAT_0833b550)[iVar12] + 0xffeb;
        iVar12 = (byte)(&DAT_0833b551)[iVar12] - 0x13;
      }
      else {
        iVar12 = (int)(uVar13 << 0x10) >> 0xf;
        iVar4 = (int)sVar10 + (byte)(&DAT_0833b551)[iVar12] + 0xffed;
        iVar12 = (byte)(&DAT_0833b550)[iVar12] - 0x15;
        sVar10 = sVar1;
      }
      uVar8 = (ushort)iVar4;
      uVar7 = (ushort)(sVar10 - iVar12);
      if (iVar4 * 0x10000 < 0) {
        uVar8 = 0;
      }
      if (0xf0 < (short)uVar8) {
        uVar8 = 0xf0;
      }
      if ((sVar10 - iVar12) * 0x10000 < 0) {
        uVar7 = 0;
      }
      if (0xf0 < (short)uVar7) {
        uVar7 = 0xf0;
      }
      if ((int)(short)uVar7 < (int)(short)uVar8) {
        uVar8 = (ushort)((int)(short)uVar7 << 8) | uVar8;
      }
      else {
        uVar8 = (ushort)((int)(short)uVar8 << 8) | uVar7;
      }
      *(ushort *)((iVar9 + (short)uVar13) * 2 + iVar5 + -0x4a) = uVar8;
    }
    uVar6 = uVar13 * 0x10000 + 0x10000;
    uVar13 = uVar6 >> 0x10;
    iVar4 = (int)uVar6 >> 0x10;
    if (0x2a < iVar4) break;
    iVar4 = iVar9 + iVar4;
  }
  DAT_02000fe8._2_2_ = 0xa0;
  DAT_03001704 = iVar5;
  DAT_03001708 = 0x4000042;
  DAT_0300170c = 0xa2600001;
  return in_lr;
}

