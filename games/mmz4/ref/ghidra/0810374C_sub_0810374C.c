// sub_0810374C at 0x0810374C (thumb)

undefined4 sub_0810374C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08868b40;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08005760(param_1 + 0x74,&DAT_08868b10,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar1 = *(int *)(param_1 + 0x58) +
          (uint)*(ushort *)(&DAT_08868b48 + (uint)*(byte *)(param_1 + 0x11) * 2) * -0x100 + 1;
  *(int *)(param_1 + 0x68) = iVar1;
  *(uint *)(param_1 + 0x58) =
       iVar1 + (uint)*(ushort *)(&DAT_08868b48 + (uint)*(byte *)(param_1 + 0x11) * 2) * 0x100;
  sub_0801CF00(param_1,0xde01);
  *(undefined2 *)(param_1 + 0xb4) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0810380C(param_1);
  return in_lr;
}

