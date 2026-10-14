// sub_080E7B08 at 0x080E7B08 (thumb)

undefined8 sub_080E7B08(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000d16 & 0x80) != 0) {
    sub_080032EC(1);
    uVar1 = sub_080EF1E8(*(short *)(param_1 + 10) + 1,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  if ((DAT_02000d16 & 0x40) != 0) {
    sub_080032EC(1);
    uVar1 = sub_080EF1E8(*(short *)(param_1 + 10) + 2,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  iVar2 = 0;
  if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
    iVar2 = 1;
  }
  sub_080DE510(&DAT_0834c9e4,iVar2 * -6 + 8,*(short *)(param_1 + 10) * 2 + (uint)DAT_0202f65d);
  if ((DAT_02000d14 & 2) == 0) {
    if ((DAT_02000d14 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      sub_080032EC(2);
      iVar2 = (int)((*(ushort *)(param_1 + 10) + 1) * 0x10000) >> 0x10;
    }
  }
  else {
    sub_080032EC(3);
    iVar2 = -2;
  }
  return CONCAT44(in_lr,iVar2);
}

