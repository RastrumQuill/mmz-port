// sub_08043E38 at 0x08043E38 (thumb)

undefined4 sub_08043E38(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = sub_08044DC0(param_1);
    bVar2 = *(byte *)(param_1 + 0xb5) < bVar1;
    *(bool *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    if (bVar2) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa301);
    sub_08006E08(param_1 + 0x74,&DAT_0833a600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

