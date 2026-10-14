// sub_080383FC at 0x080383FC (thumb)

undefined4 sub_080383FC(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0x100) == '\x03') && (*(char *)(param_1 + 0x144) == '\x01')) &&
      (*(char *)(param_1 + 0xd) == '\x01')) && (*(char *)(param_1 + 0x101) == '\x02')) {
    *(undefined *)(param_1 + 0x149) = 0xff;
    *(char *)(param_1 + 0x100) = '\0';
  }
  return in_lr;
}

