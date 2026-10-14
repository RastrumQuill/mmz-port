// sub_0807AF3C at 0x0807AF3C (thumb)

undefined4 sub_0807AF3C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08364174)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(byte *)(param_1 + 0x10) < 2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 2;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 6;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08363fdc,param_1 + 0x54,uVar1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x807aefd;
  sub_0807AFD4(param_1);
  return in_lr;
}

