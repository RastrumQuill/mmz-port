// sub_0806364C at 0x0806364C (thumb)

undefined4 sub_0806364C(int param_1)

{
  undefined4 in_lr;
  
  sub_0809250C(param_1,1);
  sub_0809250C(param_1,2);
  sub_0809250C(param_1,3);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  sub_08015698(0,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

