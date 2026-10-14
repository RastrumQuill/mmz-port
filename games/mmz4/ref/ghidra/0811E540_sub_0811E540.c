// sub_0811E540 at 0x0811E540 (thumb)

undefined8 sub_0811E540(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02000766 & 0x80) != 0) {
    sub_08002B10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((DAT_02000766 & 0x40) != 0) {
    sub_08002B10(1);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if (param_2 == '\0') {
    sub_0810D214(&DAT_0886a17c,2,*(short *)(param_1 + 10) * 2 + 0xd);
  }
  else {
    sub_0810D214(&DAT_0886a17c,8,*(short *)(param_1 + 10) * 2 + 0xf);
  }
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

