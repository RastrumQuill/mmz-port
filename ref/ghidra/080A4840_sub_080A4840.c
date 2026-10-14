// sub_080A4840 at 0x080A4840 (thumb)

undefined8 sub_080A4840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x19;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a489d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231a2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023139;
    *(undefined *)(iVar1 + 0x10) = 9;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

