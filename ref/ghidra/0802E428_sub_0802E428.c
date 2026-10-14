// sub_0802E428 at 0x0802E428 (thumb)

undefined4 sub_0802E428(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x802e45d;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

