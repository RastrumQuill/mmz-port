// sub_0803DB6C at 0x0803DB6C (thumb)

undefined8 sub_0803DB6C(int param_1,undefined4 param_2,undefined4 param_3)

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
         (uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x1b00 < uVar3)) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
      }
      goto LAB_0803dbda;
    }
  }
  uVar2 = 1;
LAB_0803dbda:
  return CONCAT44(in_lr,uVar2);
}

