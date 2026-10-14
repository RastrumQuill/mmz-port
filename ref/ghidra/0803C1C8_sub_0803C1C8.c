// sub_0803C1C8 at 0x0803C1C8 (thumb)

undefined4 sub_0803C1C8(int *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x12;
    *(undefined4 *)(iVar1 + 0x14) = 0x803c211;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x4c) = *param_1 + 0x1800;
    *(int *)(iVar1 + 0x50) = param_1[1] + 0x5000;
  }
  return in_lr;
}

