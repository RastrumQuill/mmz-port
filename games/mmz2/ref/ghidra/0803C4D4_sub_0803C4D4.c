// sub_0803C4D4 at 0x0803C4D4 (thumb)

undefined4 sub_0803C4D4(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0803C9A8(param_1,0,0,0);
  *(ushort *)(param_1 + 100) = (ushort)(-(*(byte *)(*(int *)(param_1 + 0x28) + 0x1fc) ^ 4) >> 0x1f);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x28) + 0x218) & 0x200;
  *(ushort *)(param_1 + 0x66) = uVar1;
  if (uVar1 == 0) {
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x13) = 4;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08338738,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803c8d5;
  sub_0803C9F4(param_1,0,(int)*(char *)(param_1 + 0x71));
  sub_0803C59C(param_1);
  return in_lr;
}

