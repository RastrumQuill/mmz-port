// sub_0800FA0C at 0x0800FA0C (thumb)

undefined4 sub_0800FA0C(uint param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_02022b60 = (undefined2)param_1;
  DAT_02022b68 = 0;
  DAT_02022b64 = 0;
  DAT_02022b66 = 0;
  DAT_02022cd5 = 0;
  DAT_02022cd4 = 0;
  DAT_02022cdc = 0xffffffff;
  DAT_02022cd0 = param_2;
  sub_080140E0();
  sub_08013B88(&DAT_02022c44,&DAT_0829fdd8,param_2);
  sub_080060B4(&DAT_02022c7c,*(undefined4 *)(&DAT_0829fd94 + param_1 * 4));
  sub_0800DFCC(*(undefined4 *)(&DAT_0829fd50 + param_1 * 4));
  sub_08014314(&DAT_02022b6c,param_1);
  return in_lr;
}

