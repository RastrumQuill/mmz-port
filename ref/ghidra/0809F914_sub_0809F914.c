// sub_0809F914 at 0x0809F914 (thumb)

undefined8 sub_0809F914(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x809f975;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023182;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023129;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

