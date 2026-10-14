// sub_0807F630 at 0x0807F630 (thumb)

undefined8 sub_0807F630(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x17;
    *(undefined4 *)(iVar1 + 0x14) = 0x807f6ed;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fae;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff7;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

