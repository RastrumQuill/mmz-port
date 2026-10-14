// sub_080B9758 at 0x080B9758 (thumb)

undefined4 sub_080B9758(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127D0(param_1);
      sub_080127E4(param_1,0xac13);
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (char)(&DAT_0834706d)[(uint)*(byte *)(param_1 + 0x12) * 2] * 0x100;
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) +
           (char)(&DAT_0834706e)[(uint)*(byte *)(param_1 + 0x12) * 2] * 0x100;
      sub_080127E4(param_1,0x6911);
    }
    uVar4 = *(byte *)(param_1 + 0x12) & 1;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    pbVar3 = (byte *)(param_1 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef | (byte)(uVar4 << 4);
    uVar4 = *(byte *)(param_1 + 0x12) & 1 ^ *(byte *)(param_1 + 0x12) >> 1 & 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar4;
    *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar4 << 5);
    *(undefined *)(param_1 + 0x13) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(uint *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) +
         (*(byte *)(param_1 + 0x12) & 1 ^ *(byte *)(param_1 + 0x12) >> 1 & 1) * -0x100;
    sub_08012A14(param_1);
  }
  else {
    sub_080128D4(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x11) != '\0') {
      sub_080A6920(iVar5,param_1 + 0x54);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

