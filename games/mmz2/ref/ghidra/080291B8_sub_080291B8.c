// sub_080291B8 at 0x080291B8 (thumb)

undefined4 sub_080291B8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  sub_0801E9FC(param_1,0x84);
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = 0;
  if (DAT_03003908 != 0) {
    iVar2 = *(int *)(DAT_03003908 + 0x2c);
  }
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x54), iVar3 != iVar2)) {
    *(bool *)(param_1 + 0x4c) = iVar3 < iVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (iVar3 < iVar2) << 4;
    if (iVar3 < iVar2) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_08029244(param_1);
  return in_lr;
}

