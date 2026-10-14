// sub_08069634 at 0x08069634 (thumb)

undefined4 sub_08069634(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    sub_0801CF00(uVar2,0x5700);
    sub_0801CF00(iVar4,0x5702);
    sub_0801CF00(uVar3,0x5705);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar4 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar4 + 10) | 0x10;
    }
    *(byte *)(iVar4 + 10) = bVar1;
    *(char *)(iVar4 + 0x4c) = (char)uVar5;
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(uVar2);
  sub_0801CFF0(iVar4);
  sub_0801CFF0(uVar3);
  if (*(char *)(iVar4 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

