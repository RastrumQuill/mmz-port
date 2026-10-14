// sub_08058D0C at 0x08058D0C (thumb)

undefined4 sub_08058D0C(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar2 = (byte *)(param_1 + 0xb5);
    if (*pbVar2 == 0) {
      sub_08006E08(param_1 + 0x74,&DAT_0833c888);
    }
    else {
      *(byte *)(param_1 + 0x4c) = *pbVar2 - 1;
      uVar3 = *pbVar2 - 1 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      sub_08006E08(param_1 + 0x74,&DAT_0833c8e8);
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cbd6 + (uint)*pbVar2 * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

