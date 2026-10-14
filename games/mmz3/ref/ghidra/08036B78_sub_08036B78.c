// sub_08036B78 at 0x08036B78 (thumb)

undefined8 sub_08036B78(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0xe) == '\x01') && ('\x02' < *(char *)(param_1 + 0x71))) &&
      ((DAT_02002134 & 2) != 0)) && (*(char *)(param_1 + 0xf) == '\0')) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return CONCAT44(in_lr,1);
}

