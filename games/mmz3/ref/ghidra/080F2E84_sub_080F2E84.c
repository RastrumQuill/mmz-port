// sub_080F2E84 at 0x080F2E84 (thumb)

undefined8 sub_080F2E84(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02002136 & 0x80) != 0) {
    sub_0800471C(1);
    uVar1 = sub_080FE390(*(short *)(param_1 + 10) + 1,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  if ((DAT_02002136 & 0x40) != 0) {
    sub_0800471C(1);
    uVar1 = sub_080FE390(*(short *)(param_1 + 10) + 2,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  iVar2 = 0;
  if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
    iVar2 = 1;
  }
  sub_080E9604(&DAT_0836f268,iVar2 * -7 + 8,*(short *)(param_1 + 10) * 2 + (uint)DAT_02030c1d);
  if ((DAT_02002134 & 2) == 0) {
    if ((DAT_02002134 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      sub_0800471C(2);
      iVar2 = (int)((*(ushort *)(param_1 + 10) + 1) * 0x10000) >> 0x10;
    }
  }
  else {
    sub_0800471C(3);
    iVar2 = -2;
  }
  return CONCAT44(in_lr,iVar2);
}

