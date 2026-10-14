// sub_0809AE88 at 0x0809AE88 (thumb)

undefined4 sub_0809AE88(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x22) = 1;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x151d);
  sub_080128D4(param_1);
  uVar5 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4d) = bVar1;
  *pbVar4 = *pbVar4 & 0xdf | (byte)((bVar1 & 1) << 5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083436e4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    uVar3 = 0xfffff800;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    uVar3 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809ACE0(param_1);
  return in_lr;
}

