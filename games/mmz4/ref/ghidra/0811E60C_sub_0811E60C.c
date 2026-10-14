// sub_0811E60C at 0x0811E60C (thumb)

undefined8 sub_0811E60C(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000766 & 0x80) != 0) {
    sub_08002B10(1);
    uVar1 = sub_08128954(*(short *)(param_1 + 10) + 1,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  if ((DAT_02000766 & 0x40) != 0) {
    sub_08002B10(1);
    uVar1 = sub_08128954(*(short *)(param_1 + 10) + 2,3);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  sub_0810D214(&DAT_0886a17c,2,*(short *)(param_1 + 10) * 2 + 0xd);
  if ((DAT_02000764 & 2) == 0) {
    if ((DAT_02000764 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      sub_08002B10(2);
      iVar2 = (int)((*(ushort *)(param_1 + 10) + 1) * 0x10000) >> 0x10;
    }
  }
  else {
    sub_08002B10(3);
    iVar2 = -2;
  }
  return CONCAT44(in_lr,iVar2);
}

