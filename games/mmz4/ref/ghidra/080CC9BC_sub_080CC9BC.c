// sub_080CC9BC at 0x080CC9BC (thumb)

undefined4 sub_080CC9BC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 2;
  if (((int)(uint)(byte)(&DAT_0202e8b4)
                        [*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] >>
       (*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    *(byte *)(param_1 + 10) = bVar1 | 3;
    sub_0801CF00(param_1,0xbd00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08863314,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xfe | 2;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080CCA80(param_1);
  return in_lr;
}

