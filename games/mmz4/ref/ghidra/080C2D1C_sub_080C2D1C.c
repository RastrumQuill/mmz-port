// sub_080C2D1C at 0x080C2D1C (thumb)

undefined4 sub_080C2D1C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  short asStack_1c [4];
  
  sub_08128B5C(asStack_1c,&DAT_08129a54,8);
  bVar1 = *(byte *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) =
       (int)asStack_1c[(uint)*(byte *)(param_1 + 0x11) * 2] * ((uint)bVar1 * 2 + -1);
  *(int *)(param_1 + 0x60) = -(int)asStack_1c[(uint)*(byte *)(param_1 + 0x11) * 2 + 1];
  sub_0801CC9C(param_1);
  sub_0801CF00(param_1,0x4501);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08861fcc,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C2CAC(param_1,1,(uint)bVar1);
  sub_080C2EA0(param_1);
  return in_lr;
}

