// sub_080B61E8 at 0x080B61E8 (thumb)

undefined4 sub_080B61E8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  local_1c[0] = 10;
  local_1c[1] = 0xc;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(undefined *)(param_1 + 0x25) = 8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886066c,param_1 + 0x54,(int)*(short *)(local_1c + bVar1));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080B6284(param_1);
  return in_lr;
}

