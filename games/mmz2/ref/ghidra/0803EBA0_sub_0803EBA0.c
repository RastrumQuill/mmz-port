// sub_0803EBA0 at 0x0803EBA0 (thumb)

undefined8 sub_0803EBA0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar1 = sub_08009240(param_2,param_3);
  }
  else {
    iVar1 = sub_080090D4(param_2,param_3);
  }
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x60) < 1) {
      iVar1 = sub_08008F50(param_2,param_3);
    }
    else {
      iVar1 = sub_08008DE8(param_2,param_3);
    }
    if (iVar1 == 0) {
      if ((DAT_0202e140 == '\0') &&
         (uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x1100 < uVar3)) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
      }
      goto LAB_0803ec0e;
    }
  }
  uVar2 = 1;
LAB_0803ec0e:
  return CONCAT44(in_lr,uVar2);
}

