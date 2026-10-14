// sub_08084D24 at 0x08084D24 (thumb)

undefined4 sub_08084D24(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,*(undefined2 *)(param_1 + 0xbc));
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  pbVar3 = (byte *)(iVar5 + 0xe0);
  if (*pbVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    uVar4 = *pbVar3 - 1;
    *pbVar3 = (byte)uVar4;
    if (((int)(uVar4 * 0x1000000) >> 0x18 < 0x20) && (1 < (uVar4 & 3))) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  uVar2 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08084B28(param_1);
  }
  return in_lr;
}

