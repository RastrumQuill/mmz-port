// sub_08000EDC at 0x08000EDC (thumb)

undefined4 sub_08000EDC(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 4;
  uVar1 = DAT_04000004;
  DAT_04000004 = uVar1 & 0xffef;
  uVar2 = DAT_04000004;
  DAT_03001594 = 0x8000d21;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xfffd;
  uVar2 = DAT_04000200._0_2_;
  if (DAT_03001718 != 0) {
    DAT_0300171c = DAT_03001710;
    DAT_0300172c = (ushort)((DAT_03001718 & 0x1000000) == 0);
    DAT_0300172e = 1;
    DAT_03001730 = (undefined2)DAT_03001718;
    if ((DAT_03001718 & 0xffff) != 1) {
      uVar4 = 0;
    }
    uVar4 = uVar4 * 0x10000 + 0x10000 >> 0x10;
  }
  sVar3 = (short)uVar4;
  if (DAT_0300173c != 0) {
    DAT_03001740 = DAT_03001734;
    DAT_03001750 = (ushort)((DAT_0300173c & 0x1000000) == 0);
    DAT_03001752 = 1;
    DAT_03001754 = (undefined2)DAT_0300173c;
    if ((DAT_0300173c & 0xffff) != 1) {
      uVar4 = uVar4 & 3;
    }
    sVar3 = (short)(uVar4 * 0x10000 + 0x20000 >> 0x10);
  }
  if (((int)sVar3 & 3U) != 0) {
    uVar1 = DAT_04000004;
    DAT_04000004 = uVar1 | 0x10;
    uVar2 = DAT_04000004;
    DAT_03001594 = *(undefined4 *)(&UNK_08827a64 + sVar3 * 4);
    uVar1 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar1 | 2;
    uVar2 = DAT_04000200._0_2_;
  }
  return in_lr;
}

