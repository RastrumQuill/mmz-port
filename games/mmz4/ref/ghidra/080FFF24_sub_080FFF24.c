// sub_080FFF24 at 0x080FFF24 (thumb)

undefined4 sub_080FFF24(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb4) + 0xbe04);
    *(undefined *)(param_1 + 0x12) = 0x34;
    sub_08005784(param_1 + 0x74,&DAT_08868200 + (uint)*(byte *)(param_1 + 0xb4) * 0x108);
    sub_08002B10(0x162);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x73) != '\x03') && (cVar1 = sub_080FFEC8(param_1), cVar1 == '\0')) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb4) + 0xbe06);
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      cVar1 = '\0';
      *(undefined *)(param_1 + 0x13) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080ffffc;
    }
    pbVar2 = (byte *)(param_1 + 0xb4);
    sub_0801CF00(param_1,*pbVar2 + 0xbe02);
    *pbVar2 = *pbVar2 + 1 & 1;
    sub_08005784(param_1 + 0x74,&DAT_088682d8 + (uint)*pbVar2 * 0x108);
    sub_08002B10(0x15c);
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080ffffc:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

