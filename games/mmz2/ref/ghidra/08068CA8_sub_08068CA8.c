// sub_08068CA8 at 0x08068CA8 (thumb)

undefined4 sub_08068CA8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    sub_0801260C(param_1);
  }
  else {
    sub_08012580(param_1);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0833e064 + (uint)*(byte *)(param_1 + 0x10) * 2));
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&UNK_0833df74 + (uint)*(byte *)(param_1 + 0x10) * 0x30,param_1 + 0x54,
               1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  if (*(byte *)(param_1 + 0x10) < 4) {
    uVar1 = sub_08068BE0(param_1,*(undefined4 *)(param_1 + 0xb8),*(byte *)(param_1 + 0x10) + 1,0);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  sub_08068D80(param_1);
  return in_lr;
}

