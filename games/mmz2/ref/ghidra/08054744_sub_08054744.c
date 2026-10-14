// sub_08054744 at 0x08054744 (thumb)

undefined4 sub_08054744(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa61c);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080032EC(0x97);
  }
  cVar1 = sub_080578B0(param_1);
  if (((cVar1 == '\0') && (*(char *)(param_1 + 0x73) == '\x04')) ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

