// sub_080E41FC at 0x080E41FC (thumb)

undefined4 sub_080E41FC(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0x60;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if ((*(byte *)(param_1 + 0x12) >> 1 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    pbVar3 = (byte *)(param_1 + 0x4a);
    *pbVar3 = bVar1;
    if (*(byte *)(param_1 + 0x12) >> 1 < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      bVar1 = *pbVar3 & 0xdf;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      bVar1 = *pbVar3 & 0xdf | 0x20;
    }
    *pbVar3 = bVar1;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      sub_0801CF00(param_1,0xd701);
      sub_0801CFF0(param_1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E3DA0(param_1);
  }
  return in_lr;
}

