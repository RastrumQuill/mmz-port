// sub_0807F2C8 at 0x0807F2C8 (thumb)

undefined8 sub_0807F2C8(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x16;
    *(undefined4 *)(iVar1 + 0x14) = 0x807e709;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fac;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff6;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

