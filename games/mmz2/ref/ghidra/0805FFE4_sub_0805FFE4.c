// sub_0805FFE4 at 0x0805FFE4 (thumb)

undefined4 sub_0805FFE4(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    sub_080032EC(0x7c);
    sub_080A5C74(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar2 = (byte *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar2] * 8;
  *pbVar2 = *pbVar2 + 1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

