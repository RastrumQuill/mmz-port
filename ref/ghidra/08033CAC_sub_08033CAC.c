// sub_08033CAC at 0x08033CAC (thumb)

undefined4 sub_08033CAC(int *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xb;
    *(undefined4 *)(iVar1 + 0x14) = 0x8033cf5;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x4c) = *param_1 + 0x1800;
    *(int *)(iVar1 + 0x50) = param_1[1] + 0x5000;
  }
  return in_lr;
}

