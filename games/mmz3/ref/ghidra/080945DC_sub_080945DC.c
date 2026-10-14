// sub_080945DC at 0x080945DC (thumb)

undefined4 sub_080945DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836671c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_083666c4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80945d9;
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (char)(&DAT_08366722)[(uint)*(byte *)(param_1 + 0x10) * 2] * 0x100;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (char)(&DAT_08366723)[(uint)*(byte *)(param_1 + 0x10) * 2] * 0x100;
    *(undefined *)(param_1 + 0x12) = 0x1e;
  }
  sub_08094680(param_1);
  return in_lr;
}

