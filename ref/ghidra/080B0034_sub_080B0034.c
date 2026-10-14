// sub_080B0034 at 0x080B0034 (thumb)

undefined8 sub_080B0034(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b0089;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231e4;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202315a;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

