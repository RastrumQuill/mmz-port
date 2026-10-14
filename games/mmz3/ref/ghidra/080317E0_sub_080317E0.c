// sub_080317E0 at 0x080317E0 (thumb)

undefined4 sub_080317E0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x218) & 0x10) != 0) {
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((*(uint *)(param_1 + 0x218) & 0x20) != 0) {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  *(undefined *)(param_1 + 0x133) = 0;
  if (*(char *)(param_1 + 0x225) == '\x03') {
    pbVar3 = (byte *)(param_1 + 0x226);
    *(byte *)(param_1 + 0x4c) = *pbVar3 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar3 & 1) << 4);
    if ((*pbVar3 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  else {
    if (cVar1 != '\x02') {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_08031900(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  sub_08031A64(param_1);
  return in_lr;
}

