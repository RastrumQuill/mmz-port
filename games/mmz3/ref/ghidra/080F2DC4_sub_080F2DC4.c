// sub_080F2DC4 at 0x080F2DC4 (thumb)

undefined8 sub_080F2DC4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02002136 & 0x80) != 0) {
    sub_0800471C(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((DAT_02002136 & 0x40) != 0) {
    sub_0800471C(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  iVar2 = 0;
  if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
    iVar2 = 1;
  }
  sub_080E9604(&DAT_0836f268,iVar2 * -7 + 8,*(short *)(param_1 + 10) * 2 + 2 + (uint)DAT_02030c1d);
  if ((DAT_02002134 & 2) == 0) {
    if ((DAT_02002134 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      sub_0800471C(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    sub_0800471C(3);
    uVar1 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar1);
}

