// sub_0803F880 at 0x0803F880 (thumb)

undefined8 sub_0803F880(int param_1,undefined4 param_2,undefined4 param_3)

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
      uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (uVar3 < 0x401) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      goto LAB_0803f8e4;
    }
  }
  uVar2 = 1;
LAB_0803f8e4:
  return CONCAT44(in_lr,uVar2);
}

