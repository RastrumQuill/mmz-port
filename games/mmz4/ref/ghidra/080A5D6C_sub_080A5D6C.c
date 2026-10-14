// sub_080A5D6C at 0x080A5D6C (thumb)

undefined4 sub_080A5D6C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_0885ef58,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a5f2d;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  cVar2 = sub_080A6368(param_1);
  if (cVar2 == '\x02') {
    sub_0801CF00(param_1,0x8a00);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080A648C(param_1);
  sub_080A5E14(param_1);
  return in_lr;
}

