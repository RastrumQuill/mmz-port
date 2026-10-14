// sub_08024D74 at 0x08024D74 (thumb)

undefined4 sub_08024D74(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_08024DA8(param_1);
  }
  return in_lr;
}

