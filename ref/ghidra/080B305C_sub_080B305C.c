// sub_080B305C at 0x080B305C (thumb)

undefined4 sub_080B305C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6d60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0809C980(param_1);
  bVar1 = (byte)*(ushort *)(param_1 + 0x90) & 4;
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
    *(byte *)(param_1 + 0xd) = bVar1;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

