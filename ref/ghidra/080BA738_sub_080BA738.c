// sub_080BA738 at 0x080BA738 (thumb)

undefined8 sub_080BA738(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023210);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ba339;
    *(undefined2 *)(iVar1 + 0x1c) = 800;
    *(undefined *)(iVar1 + 0x1e) = 6;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x12) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

