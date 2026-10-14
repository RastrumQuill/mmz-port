// sub_08068A18 at 0x08068A18 (thumb)

undefined4 sub_08068A18(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined2 auStack_1c [6];
  
  sub_080EF3F0(auStack_1c,&DAT_080ef774,10);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,auStack_1c[*(byte *)(param_1 + 0x10)]);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08012CA4(param_1,4);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (*(byte *)(param_1 + 0x10) < 2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&UNK_0833dedc + (uint)*(byte *)(param_1 + 0x10) * 0x30,
                 param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = *(undefined *)(param_1 + 0x11);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08068B00(param_1);
  return in_lr;
}

