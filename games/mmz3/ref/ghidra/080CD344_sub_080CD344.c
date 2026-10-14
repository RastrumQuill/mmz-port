// sub_080CD344 at 0x080CD344 (thumb)

undefined4 sub_080CD344(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && (*(char *)(DAT_0202f5c0 + 0xc4) != '\x01')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836c900,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,*(byte *)(param_1 + 0x10) | 0x4400);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CD3CC(param_1);
  }
  return in_lr;
}

