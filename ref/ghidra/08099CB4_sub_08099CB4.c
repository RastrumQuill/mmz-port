// sub_08099CB4 at 0x08099CB4 (thumb)

undefined8 sub_08099CB4(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x4c;
    *(undefined4 *)(iVar1 + 0x14) = 0x809988d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230a8;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202310c;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x13) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

