// sub_0811742C at 0x0811742C (thumb)

undefined8 sub_0811742C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000766 & 0x80) != 0) {
    sub_08002B10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((DAT_02000766 & 0x40) != 0) {
    sub_08002B10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  iVar2 = 0;
  if ((DAT_0202f38e != '\0') || (DAT_0202f38c == '\x01')) {
    iVar2 = 1;
  }
  sub_0810D214(&DAT_0886a17c,iVar2 * -7 + 8,*(short *)(param_1 + 10) * 2 + 2 + (uint)DAT_0202f38d);
  if ((DAT_02000764 & 2) == 0) {
    if ((DAT_02000764 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      sub_08002B10(2);
      if (*(short *)(param_1 + 10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    sub_08002B10(3);
    uVar1 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar1);
}

