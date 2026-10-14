// sub_080B1B04 at 0x080B1B04 (thumb)

undefined4 sub_080B1B04(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x819);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((*(byte *)(param_1 + 10) >> 4 & 1) == *(byte *)(param_1 + 0x11)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xc0;
    uVar3 = 0xfffffff8;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffa0;
    uVar3 = 4;
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
  }
  *(undefined *)(param_1 + 0x12) = 0x17;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B1BC0(param_1);
  return in_lr;
}

