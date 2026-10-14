// sub_080382E4 at 0x080382E4 (thumb)

undefined4 sub_080382E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_0203017c != -1) {
      DAT_0203017c = DAT_0203017c + 1;
    }
    cVar1 = *(char *)(*(int *)(param_1 + 0x2c) + 0x10);
    if ((((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0) || (cVar1 == '\0')) &&
       (cVar1 != '\x04')) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xc0) = 1;
    }
  }
  return in_lr;
}

