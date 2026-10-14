// sub_08001FCC at 0x08001FCC (thumb)

undefined4 sub_08001FCC(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 in_lr;
  bool bVar4;
  
  bVar4 = DAT_03001718 != 0;
  if (bVar4) {
    DAT_0300171c = DAT_03001710;
    DAT_0300172c = (ushort)((DAT_03001718 & 0x1000000) == 0);
    DAT_0300172e = 1;
    DAT_03001730 = (undefined2)DAT_03001718;
    sub_080021D0(&DAT_03001710);
  }
  uVar3 = (ushort)bVar4;
  if (DAT_0300173c != 0) {
    DAT_03001740 = DAT_03001734;
    DAT_03001750 = (ushort)((DAT_0300173c & 0x1000000) == 0);
    DAT_03001752 = 1;
    DAT_03001754 = (undefined2)DAT_0300173c;
    sub_080021D0(&DAT_03001734);
    uVar3 = (ushort)((uint)bVar4 * 0x10000 + 0x20000 >> 0x10);
  }
  if ((short)uVar3 != 0) {
    uVar1 = DAT_04000004;
    DAT_04000004 = uVar1 | 0x10;
    uVar2 = DAT_04000004;
    DAT_03001594 = *(undefined4 *)(&UNK_08335468 + (short)uVar3 * 4);
    uVar3 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar3 | 2;
    uVar2 = DAT_04000200._0_2_;
  }
  return in_lr;
}

