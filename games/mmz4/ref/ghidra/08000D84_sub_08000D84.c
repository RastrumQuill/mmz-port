// sub_08000D84 at 0x08000D84 (thumb)

undefined4 sub_08000D84(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((DAT_030016f7 & 2) == 0) {
    DAT_030016f7 = DAT_030016f7 | 2;
    if (uVar1 == 0) {
      DAT_030016f0 = DAT_030016f0 + 1;
    }
    if ((uVar1 == DAT_030016f6) && (DAT_030016ec != 0)) {
      sub_08128880();
    }
    if (uVar1 < DAT_030016f6) {
      DAT_04000004._1_1_ = DAT_030016f6;
    }
    else {
      DAT_04000004._1_1_ = 0;
    }
    DAT_030016f7 = DAT_030016f7 ^ 2;
  }
  return in_lr;
}

