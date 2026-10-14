// sub_08037ADC at 0x08037ADC (thumb)

undefined4 sub_08037ADC(int param_1)

{
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad850);
  sub_08029710(param_1);
  sub_08038A5C(param_1,0xf);
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 200) = 4;
  return in_lr;
}

