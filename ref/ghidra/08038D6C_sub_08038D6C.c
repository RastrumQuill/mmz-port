// sub_08038D6C at 0x08038D6C (thumb)

undefined4 sub_08038D6C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xe;
    *(undefined4 *)(iVar1 + 0x14) = 0x8038d9d;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return in_lr;
}

