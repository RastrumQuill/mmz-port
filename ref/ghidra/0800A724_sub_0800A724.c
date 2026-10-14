// sub_0800A724 at 0x0800A724 (thumb)

undefined4 sub_0800A724(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_0202266c._2_2_ < DAT_02022aed) {
    do {
      if (0x36 < DAT_0202266c._2_2_) {
        return in_lr;
      }
      iVar1 = (uint)DAT_0202266c._2_2_ * 4;
      sub_080067C4((int)*(short *)(&DAT_08295040 + iVar1),(int)*(short *)(&DAT_08295042 + iVar1),
                   *(undefined4 *)(&DAT_08294f64 + iVar1));
      if (((ushort)(DAT_0202266c._2_2_ - 3) < 0xc) && (DAT_02022b60 == 4)) {
        sub_08001EAC(0xad);
      }
      DAT_0202266c._2_2_ = DAT_0202266c._2_2_ + 1;
    } while (DAT_0202266c._2_2_ < DAT_02022aed);
  }
  return in_lr;
}

