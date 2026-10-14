// sub_080B44D0 at 0x080B44D0 (thumb)

undefined8 sub_080B44D0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (param_2 != 0) {
    for (piVar3 = (int *)(param_1 + 0xf0); *piVar3 != param_2; piVar3 = piVar3 + 1) {
      uVar2 = uVar2 + 1;
    }
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 3) {
    piVar3 = (int *)(uVar2 * 4 + 0xf0 + param_1);
    do {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (*(byte *)(iVar1 + 9) == param_3)) goto LAB_080b4512;
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
  }
  iVar1 = 0;
LAB_080b4512:
  return CONCAT44(in_lr,iVar1);
}

