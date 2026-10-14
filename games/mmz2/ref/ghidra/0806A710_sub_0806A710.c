// sub_0806A710 at 0x0806A710 (thumb)

undefined4 sub_0806A710(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e364 + (uint)*(byte *)(param_1 + 0xc0) * 10),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    sub_08006E08(param_1 + 0x74,&DAT_0833e2b0);
    *(undefined2 *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  puVar4 = (ushort *)(param_1 + 0xb4);
  *puVar4 = *puVar4 + 1;
  pbVar3 = (byte *)(param_1 + 0xb6);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar3 + 0x40 & 0xff] * 0x10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080ef450)[*pbVar3] * 0x10;
  *pbVar3 = *pbVar3 + 4;
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  if (bVar1 != (bool)(bVar2 >> 4 & 1)) {
    if (bVar1) {
      bVar2 = bVar2 | 0x10;
    }
    else {
      bVar2 = bVar2 & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    pbVar3 = (byte *)(param_1 + 0xc0);
    *pbVar3 = *pbVar3 ^ 1;
    sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e364 + (uint)*pbVar3 * 10),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  if (0x1f < *puVar4) {
    *(undefined *)(param_1 + 0xd) = 0xff;
  }
  return in_lr;
}

