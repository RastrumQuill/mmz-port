// sub_080B1D64 at 0x080B1D64 (thumb)

undefined4 sub_080B1D64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xd) != '\x05') {
      sub_08005784(param_1 + 0x74,&DAT_0885ffc8);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}

