// sub_0809AD90 at 0x0809AD90 (thumb)

undefined4 sub_0809AD90(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined *)(param_1 + 0x22) = 1;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x151d);
  sub_080128D4(param_1);
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083436e4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + -0x1d00;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    uVar3 = 0xfffff800;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x1d00;
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    uVar3 = 0x800;
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1400;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809ACE0(param_1);
  return in_lr;
}

