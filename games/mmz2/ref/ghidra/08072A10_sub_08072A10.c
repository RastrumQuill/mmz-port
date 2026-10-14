// sub_08072A10 at 0x08072A10 (thumb)

undefined4 sub_08072A10(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(byte *)(param_1 + 0xb6) == 3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(undefined *)(param_1 + 0xb5) = 3;
      sub_08006E08(param_1 + 0x74,&DAT_0833f154);
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef7a0 + (uint)*(byte *)(param_1 + 0xb6) * 2));
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0x12) & 3;
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    pbVar3 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 + 1;
    if (5 < (byte)(bVar1 + 1)) {
      *pbVar3 = bVar2;
    }
    *(byte *)(param_1 + 0xb5) = *pbVar3;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef7a0 + (uint)*pbVar3 * 2));
    sub_08006E08(param_1 + 0x74,&DAT_0833f0c4 + (uint)*pbVar3 * 0x30);
    if ((*pbVar3 == 0) || (*pbVar3 == 3)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(byte *)(param_1 + 0xf) = bVar2;
    }
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

