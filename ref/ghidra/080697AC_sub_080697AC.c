// sub_080697AC at 0x080697AC (thumb)

undefined8 sub_080697AC(int param_1,undefined param_2,char param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x30;
    *(undefined4 *)(iVar1 + 0x14) = 0x806982d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f00;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f60;
    *(char *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined *)(iVar1 + 0xc1) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    if (param_3 == '\0') {
      *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
    }
  }
  return CONCAT44(in_lr,iVar1);
}

