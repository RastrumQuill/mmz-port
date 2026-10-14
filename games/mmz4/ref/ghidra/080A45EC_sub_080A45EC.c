// sub_080A45EC at 0x080A45EC (thumb)

undefined4 sub_080A45EC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_20 [4];
  byte abStack_1c [4];
  
  sub_08128B5C(auStack_20,&DAT_08129650,4);
  sub_08128B5C(abStack_1c,&DAT_08129654,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CDBC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x24) = auStack_20[bVar1];
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x80;
  sub_0801CF00(param_1,0x2201);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885eb14 + (uint)abStack_1c[bVar1] * 0x18,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A46CC(param_1);
  return in_lr;
}

