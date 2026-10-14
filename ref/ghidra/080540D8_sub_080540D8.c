// sub_080540D8 at 0x080540D8 (thumb)

undefined4 sub_080540D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  uint local_20 [2];
  
  local_20[0] = 0x83;
  local_20[1] = 0x84;
  if (((int)(uint)(byte)(&DAT_02022ad4)[(int)local_20[*(byte *)(param_1 + 0x10)] >> 3] >>
       (local_20[*(byte *)(param_1 + 0x10)] & 7) & 1U) == 0) {
    sub_080489E4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082af788,param_1 + 0x4c,0x10);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xc0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xc5) = 0;
    iVar1 = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x4c) = iVar1;
    *(int *)(param_1 + 0xb8) = iVar1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    sub_0805B5F8(param_1,param_1 + 0x4c);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080541D0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

