// sub_08035F34 at 0x08035F34 (thumb)

undefined4 sub_08035F34(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CFC8(param_1,0x1900,7,1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x1900);
  if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
    *(undefined *)(param_1 + 0x101) = 3;
    *pcVar1 = '\0';
  }
  return in_lr;
}

