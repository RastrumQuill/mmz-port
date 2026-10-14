// sub_08081E80 at 0x08081E80 (thumb)

undefined4 sub_08081E80(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6606);
    sub_08081F98(param_1,5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar2 = (byte *)(param_1 + 0x71);
  bVar1 = *pbVar2;
  sub_080128D4(param_1);
  if ((int)(char)*pbVar2 != (uint)bVar1) {
    sub_08081F98(param_1,((int)((uint)*pbVar2 << 0x18) >> 0x19) + 5U & 0xff);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

