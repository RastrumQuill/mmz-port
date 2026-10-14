// sub_08079154 at 0x08079154 (thumb)

undefined4 sub_08079154(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80791fd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f94;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fea;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

