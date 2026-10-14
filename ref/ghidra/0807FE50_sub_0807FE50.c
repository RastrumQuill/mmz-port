// sub_0807FE50 at 0x0807FE50 (thumb)

undefined4 sub_0807FE50(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x18;
    *(undefined4 *)(iVar1 + 0x14) = 0x807fea5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fb0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff8;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

