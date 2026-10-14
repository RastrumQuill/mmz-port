// sub_0806ECB0 at 0x0806ECB0 (thumb)

undefined4 sub_0806ECB0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590a0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((DAT_0202e918 & 8) == 0) {
    sub_0806F11C(param_1);
  }
  return in_lr;
}

