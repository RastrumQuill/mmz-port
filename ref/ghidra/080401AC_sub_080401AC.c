// sub_080401AC at 0x080401AC (thumb)

undefined4 sub_080401AC(int *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x15;
    *(undefined4 *)(iVar1 + 0x14) = 0x80401f5;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x4c) = *param_1 + 0x1800;
    *(int *)(iVar1 + 0x50) = param_1[1] + 0x5000;
  }
  return in_lr;
}

