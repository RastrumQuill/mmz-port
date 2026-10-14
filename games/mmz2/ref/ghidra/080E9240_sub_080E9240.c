// sub_080E9240 at 0x080E9240 (thumb)

undefined8 sub_080E9240(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_2 * 0x1000000 < 1) {
LAB_080e92b0:
    if (*(char *)(*(int *)(param_1 + 0xc) + 2) == '\0') {
      uVar2 = 1;
      goto LAB_080e92be;
    }
  }
  else {
    sub_080DE510(&DAT_0834df88,1,0x12);
    uVar1 = DAT_02000d14;
    if ((DAT_02000d14 & 3) == 0) goto LAB_080e92b0;
    *(undefined *)(param_1 + 1) = 0;
    if ((uVar1 & 2) == 0) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x40;
      sub_080032EC(2);
      uVar2 = 0xffffffff;
      goto LAB_080e92be;
    }
    sub_080032EC(3);
  }
  uVar2 = 0;
LAB_080e92be:
  return CONCAT44(in_lr,uVar2);
}

