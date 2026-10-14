// sub_080831C0 at 0x080831C0 (thumb)

undefined4 sub_080831C0(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(*(int *)(param_1 + 0x28) + 0x1c);
    sub_08017700(param_1,0x901);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar1 = (byte *)(param_1 + 0x4a);
    *pbVar1 = *pbVar1 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar1 = *pbVar1 & 0xdf;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364a30);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58) +
       (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
  sub_080177F4(param_1);
  return in_lr;
}

