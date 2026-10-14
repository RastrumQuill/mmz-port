// sub_080779CC at 0x080779CC (thumb)

undefined4 sub_080779CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1601);
    *(byte *)(param_1 + 0x12) = (byte)(0x40U - *(char *)(param_1 + 0xb6)) >> 1;
    *(char *)(param_1 + 0xb6) = '\0';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08077BB4(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    cVar1 = *(char *)(param_1 + 0xb5) + '\x02';
    *(char *)(param_1 + 0xb5) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
  }
  return in_lr;
}

