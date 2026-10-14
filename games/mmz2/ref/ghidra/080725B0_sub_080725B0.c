// sub_080725B0 at 0x080725B0 (thumb)

undefined4 sub_080725B0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar2 = *pbVar2 & 0xdf;
  sub_080127E4(param_1,0x1b00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x5c) = 0x100;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined *)(param_1 + 0xba) = 0xff;
  *(undefined *)(param_1 + 0xbb) = 0xff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 0x800;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833f0c4,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80739e1;
  sub_08072694(param_1);
  return in_lr;
}

