// sub_080E7A44 at 0x080E7A44 (thumb)

undefined8 sub_080E7A44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000d16 & 0x80) != 0) {
    sub_080032EC(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((DAT_02000d16 & 0x40) != 0) {
    sub_080032EC(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  iVar2 = 0;
  if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
    iVar2 = 1;
  }
  sub_080DE510(&DAT_0834c9e4,iVar2 * -6 + 8,*(short *)(param_1 + 10) * 2 + 2 + (uint)DAT_0202f65d);
  if ((DAT_02000d14 & 2) == 0) {
    if ((DAT_02000d14 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      sub_080032EC(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    sub_080032EC(3);
    uVar1 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar1);
}

