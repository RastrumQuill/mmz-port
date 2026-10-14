// sub_080BE39C at 0x080BE39C (thumb)

undefined8 sub_080BE39C(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80be3f9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = param_1;
    *(undefined4 *)(iVar1 + 0x28) = param_2;
    uVar2 = param_3[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_3;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

