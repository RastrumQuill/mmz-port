// sub_080399A0 at 0x080399A0 (thumb)

undefined8 sub_080399A0(int param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x80399f1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  }
  return CONCAT44(in_lr,iVar1);
}

