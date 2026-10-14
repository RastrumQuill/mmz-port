// sub_08037CF4 at 0x08037CF4 (thumb)

undefined4 sub_08037CF4(int param_1)

{
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffa40;
  sub_08038B64(param_1);
  *(undefined4 *)(param_1 + 200) = 2;
  sub_08037D2C(param_1);
  return in_lr;
}

