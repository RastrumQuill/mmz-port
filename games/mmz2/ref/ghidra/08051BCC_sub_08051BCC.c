// sub_08051BCC at 0x08051BCC (thumb)

undefined4 sub_08051BCC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if ((DAT_0202ec42 & 1) == 0) {
    sub_08057034(param_1);
  }
  return in_lr;
}

