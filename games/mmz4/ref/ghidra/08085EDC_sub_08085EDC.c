// sub_08085EDC at 0x08085EDC (thumb)

undefined4 sub_08085EDC(int param_1)

{
  undefined4 in_lr;
  undefined auStack_14 [4];
  
  sub_08128B5C(auStack_14,&DAT_08129418,2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = auStack_14[*(byte *)(param_1 + 0x10)];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xb8) = 0xe10;
  *(undefined *)(param_1 + 0xbc) = 0;
  if (*(byte *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,0x1e03);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885b7f8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80867b5;
  sub_08085FBC(param_1);
  return in_lr;
}

