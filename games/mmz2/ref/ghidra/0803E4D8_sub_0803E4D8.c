// sub_0803E4D8 at 0x0803E4D8 (thumb)

int sub_0803E4D8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar1 = sub_08009240(param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = sub_080090D4(param_2,param_3);
    if (iVar1 != 0) {
      return -iVar1;
    }
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar1 = sub_08008F50(param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = sub_08008DE8(param_2,param_3);
    if (iVar1 != 0) {
      return -iVar1;
    }
  }
  if ((DAT_0202e140 == '\0') && (uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x1200 < uVar2)
     ) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

