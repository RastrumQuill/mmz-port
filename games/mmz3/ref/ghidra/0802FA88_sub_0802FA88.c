// sub_0802FA88 at 0x0802FA88 (thumb)

undefined4 sub_0802FA88(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_080177CC(param_1,0x1900,7,1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_08034558(param_1,0x1900);
  if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
    *(undefined *)(param_1 + 0xed) = 3;
    *pcVar1 = '\0';
  }
  return in_lr;
}

