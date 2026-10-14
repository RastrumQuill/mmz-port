// sub_080E0838 at 0x080E0838 (thumb)

undefined4 sub_080E0838(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_080E07A4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080E087C(param_1);
  pcVar2 = (char *)(param_1 + 0x74);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *pcVar2 = '\0';
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

