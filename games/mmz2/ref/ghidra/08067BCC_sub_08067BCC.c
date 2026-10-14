// sub_08067BCC at 0x08067BCC (thumb)

undefined4 sub_08067BCC(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x601);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xc3) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 0x5a) {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + (*(char *)(param_1 + 0xb7) + 1) * 0x100);
    if (sVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0xff;
  }
  return in_lr;
}

