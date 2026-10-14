// sub_08092C88 at 0x08092C88 (thumb)

undefined4 sub_08092C88(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_08006DE4(param_1 + 0x74,&DAT_08342874,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8093151;
  *(undefined4 *)(param_1 + 0x9c) = 0x8093169;
  sub_080127E4(param_1,0x9001);
  *(undefined *)(param_1 + 0xd) = (&DAT_0834291c)[*(byte *)(param_1 + 0x10)];
  bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else {
    iVar3 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + 0x800;
    *(undefined *)(param_1 + 0x11) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08092D88(param_1);
  return in_lr;
}

