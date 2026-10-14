// sub_080D9EEC at 0x080D9EEC (thumb)

undefined4 sub_080D9EEC(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836dabc,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xbe) =
       *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
  *(undefined2 *)(param_1 + 0xc0) =
       *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
  *(undefined2 *)(param_1 + 0xc2) =
       *(undefined2 *)(&DAT_0836da6c + (uint)*(byte *)(param_1 + 0x10) * 2);
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080D9004(param_1);
  return in_lr;
}

