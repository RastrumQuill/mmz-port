// sub_08081BE4 at 0x08081BE4 (thumb)

undefined4
sub_08081BE4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x8081dfd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fb8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ffc;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_3;
    *(undefined4 *)(iVar1 + 0x58) = param_3[1];
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x12) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

