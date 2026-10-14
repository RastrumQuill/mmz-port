// sub_08102974 at 0x08102974 (thumb)

ulonglong sub_08102974(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  ushort auStack_14 [4];
  
  sub_08128B5C(auStack_14,&DAT_08129df0,6);
  uVar2 = 1;
  sub_08006984(0x56);
  if ((DAT_0202e8b7 & 1) == 0) {
    if ((DAT_0202e8b6 & 0x10) == 0) {
      if (((((DAT_0202e8b6 & 1) != 0) && ((DAT_0202e8b6 & 2) != 0)) &&
          (uVar2 = 3, (DAT_0202e8b6 & 4) != 0)) && (uVar2 = 5, (DAT_0202e8b6 & 8) != 0)) {
        uVar2 = 7;
      }
    }
    else {
      uVar2 = 9;
      if ((((DAT_0202e8b6 & 0x20) != 0) && (uVar2 = 0xb, (DAT_0202e8b6 & 0x40) != 0)) &&
         (uVar2 = 0xd, (DAT_0202e8b6 & 0x80) != 0)) {
        uVar2 = 0xf;
      }
    }
  }
  else {
    uVar2 = 0x11;
    if ((((DAT_0202e8b7 & 2) != 0) && (uVar2 = 0x13, (DAT_0202e8b7 & 4) != 0)) &&
       (uVar2 = 0x15, (DAT_0202e8b7 & 8) != 0)) {
      uVar2 = 0x17;
    }
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x10);
  if ((((byte)(&DAT_0202e8c9)[uVar1] == uVar2) ||
      ((uVar2 + auStack_14[uVar1 - 6] == 0x15d3 && ((DAT_0202edac[2] & 1) != 0)))) ||
     ((uVar2 + auStack_14[uVar1 - 6] == 0x15ef && (((*DAT_0202edac & 0xf) >> 1 & 1) != 0)))) {
    uVar2 = uVar2 + 1;
  }
  else {
    (&DAT_0202e8c9)[*(byte *)(param_1 + 0x10)] = (char)uVar2;
  }
  return CONCAT44(in_lr,auStack_14[*(byte *)(param_1 + 0x10) - 6] + uVar2 + -1) & 0xffffffff0000ffff
  ;
}

