// sub_080D9938 at 0x080D9938 (thumb)

undefined4 sub_080D9938(int param_1)

{
  undefined uVar1;
  uint uVar2;
  char cVar3;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  cVar3 = -1;
  if (0 < *(int *)(param_1 + 0x5c)) {
    cVar3 = '\x01';
  }
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(byte *)(param_1 + 0x75) = (((byte)(uVar2 * 2 >> 0x11) & 3) + 0x10) * cVar3;
  *(undefined *)(param_1 + 0x74) = uVar1;
  sub_0801CD28(param_1);
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 2;
  sub_0801CF00(param_1,0x2400);
  sub_0801CFF0(param_1);
  sub_080D99F8(param_1);
  return in_lr;
}

