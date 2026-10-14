// sub_080CA14C at 0x080CA14C (thumb)

undefined4 sub_080CA14C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  sub_0800471C(0x3f);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + 0x1000;
  sub_080B7C6C(param_1,&local_10,&DAT_0836c52a,4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

