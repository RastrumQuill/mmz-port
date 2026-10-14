// sub_0809DB70 at 0x0809DB70 (thumb)

undefined4 sub_0809DB70(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2900);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343b5c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(undefined *)(param_1 + 0x24) = 0xe2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xffffff00;
  }
  else {
    uVar3 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0x380;
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809DAF4(param_1);
  return in_lr;
}

