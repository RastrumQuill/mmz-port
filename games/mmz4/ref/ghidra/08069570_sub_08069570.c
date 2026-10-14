// sub_08069570 at 0x08069570 (thumb)

undefined4 sub_08069570(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    sub_0801CF00(uVar2,0x5700);
    sub_0801CF00(iVar5,0x5705);
    sub_0801CF00(uVar3,0x5705);
    uVar4 = (bVar1 >> 4 & 1) + 1 & 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar1;
    *(char *)(iVar5 + 0x4c) = (char)uVar4;
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(uVar2);
  sub_0801CFF0(iVar5);
  sub_0801CFF0(uVar3);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

