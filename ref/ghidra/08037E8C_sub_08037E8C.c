// sub_08037E8C at 0x08037E8C (thumb)

undefined4 sub_08037E8C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(DAT_0202286c + 0x4c);
  *(int *)(param_1 + 0x50) = DAT_02022c80 + -0x3000;
  sub_08038B00(param_1,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  sub_08038A5C(param_1,0xc);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08001EAC(0xcf);
  sub_08001EAC(0x43);
  sub_080369F0(param_1);
  *(undefined *)(param_1 + 0x12) = 0xc;
  sub_08037EE8(param_1);
  return in_lr;
}

