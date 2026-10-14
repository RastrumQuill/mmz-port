// sub_080D7B68 at 0x080D7B68 (thumb)

undefined4 sub_080D7B68(int param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 10) << 0x18;
  uVar5 = uVar2 >> 0x1c & 1;
  uVar2 = uVar2 >> 0x1d & 1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    if (uVar5 == 0) {
      bVar3 = bVar3 & 0xef | 1;
    }
    else {
      bVar3 = bVar3 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
    if (uVar2 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4d) = (char)uVar2;
    *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar2 << 5);
    sub_0801CF00(param_1,**(undefined2 **)(param_1 + 0x74));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

