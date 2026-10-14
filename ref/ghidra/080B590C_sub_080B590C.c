// sub_080B590C at 0x080B590C (thumb)

undefined8 sub_080B590C(undefined param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202320c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b561d;
    *(undefined2 *)(iVar1 + 0x1c) = 0xc0;
    *(undefined *)(iVar1 + 0x1e) = 3;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
    *(undefined *)(iVar1 + 199) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

