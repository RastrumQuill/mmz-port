// sub_080D5618 at 0x080D5618 (thumb)

undefined8 sub_080D5618(int *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d56b1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x54) = *param_1;
    *(int *)(iVar1 + 0x58) = param_1[1] + -0x1000;
    *(int *)(iVar1 + 100) = *param_1 + -0xc00;
    *(int *)(iVar1 + 0x68) = param_1[1] + 0xc00;
    *(int *)(iVar1 + 0x5c) = *param_1 + 0xc00;
    *(int *)(iVar1 + 0x60) = param_1[1] + 0xc00;
    *(int *)(iVar1 + 0x7c) = *param_1;
    *(int *)(iVar1 + 0x80) = param_1[1];
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined *)(iVar1 + 0x78) = 0x31;
    *(undefined *)(iVar1 + 0x79) = 0xe;
  }
  return CONCAT44(in_lr,iVar1);
}

