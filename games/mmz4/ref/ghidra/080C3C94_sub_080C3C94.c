// sub_080C3C94 at 0x080C3C94 (thumb)

undefined4 sub_080C3C94(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x5200);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar2 = -0x2c00;
  }
  else {
    iVar2 = 0x2c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x2c00;
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

