// sub_08073CF4 at 0x08073CF4 (thumb)

undefined4 sub_08073CF4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    sub_080127E4(param_1,0x1f03);
  }
  else {
    sub_080127E4(param_1,0x1f02);
    *(undefined *)(param_1 + 0x25) = 0x19;
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833f410,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08073A84(param_1);
  return in_lr;
}

