// sub_080B17FC at 0x080B17FC (thumb)

undefined8 sub_080B17FC(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x3f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b1861;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231ee;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202315f;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

