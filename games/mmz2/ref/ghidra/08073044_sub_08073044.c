// sub_08073044 at 0x08073044 (thumb)

undefined4 sub_08073044(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
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
    *(undefined *)(param_1 + 0xbc) = 0xc;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0xbc);
  cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),*pbVar3);
  if (cVar2 == '\0') {
    pbVar4 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 + 1;
    if (5 < (byte)(bVar1 + 1)) {
      *pbVar4 = 0;
    }
    *(byte *)(param_1 + 0xb5) = *pbVar4;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef7a0 + (uint)*pbVar4 * 2));
    sub_08006E08(param_1 + 0x74,&DAT_0833f0c4 + (uint)*pbVar4 * 0x30);
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    *pbVar3 = *pbVar3 >> 1;
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

