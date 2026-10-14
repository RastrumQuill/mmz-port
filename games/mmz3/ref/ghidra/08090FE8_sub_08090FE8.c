// sub_08090FE8 at 0x08090FE8 (thumb)

undefined4 sub_08090FE8(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) == 0xc) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_0836602c,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80912a9;
    *(undefined *)(param_1 + 0xd) = (&DAT_083661dc)[*(byte *)(param_1 + 0x10)];
    sub_080910EC(param_1);
  }
  else if (*(byte *)(param_1 + 0x10) < 9) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_0836602c,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80912a9;
    *(undefined *)(param_1 + 0xd) = (&DAT_083661dc)[*(byte *)(param_1 + 0x10)];
    sub_080910EC(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0xd) = (&DAT_083661dc)[*(byte *)(param_1 + 0x10)];
    sub_08091290(param_1);
  }
  return in_lr;
}

