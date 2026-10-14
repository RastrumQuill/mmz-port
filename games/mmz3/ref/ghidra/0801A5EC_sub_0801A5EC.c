// sub_0801A5EC at 0x0801A5EC (thumb)

undefined8 sub_0801A5EC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 != 0) && (((*(uint *)(iVar2 + 0x8c) & 0x200) != 0 || (*(short *)(iVar2 + 0xa4) == 0))))
  {
    DAT_020301a8 = DAT_020301a8 & 0xfffe | 8;
  }
  uVar3 = DAT_020301a8 & 1;
  if (((DAT_020301a8 & 1) == 0) && ((DAT_020301a8 & 8) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_02030c00 = uVar3;
    if ((*(undefined **)(param_1 + 0x18) != &DAT_0834988c) &&
       (*(undefined **)(param_1 + 0x18) != &DAT_08349904)) {
      if (DAT_020302f4 == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_0834988c);
      }
      else {
        sub_08021D7C(&DAT_020301b0);
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

