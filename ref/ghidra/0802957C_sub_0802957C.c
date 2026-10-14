// sub_0802957C at 0x0802957C (thumb)

undefined8 sub_0802957C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < 1) {
    iVar1 = sub_08008120(param_2,param_3);
  }
  else {
    iVar1 = sub_08007EE0(param_2,param_3);
  }
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x58) < 1) {
      iVar1 = sub_08007CF8(param_2,param_3);
    }
    else {
      iVar1 = sub_08007B30(param_2,param_3);
    }
    if (iVar1 == 0) {
      uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (uVar3 < 0x401) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      goto LAB_080295e0;
    }
  }
  uVar2 = 1;
LAB_080295e0:
  return CONCAT44(in_lr,uVar2);
}

