// sub_080C64E4 at 0x080C64E4 (thumb)

undefined4 sub_080C64E4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x9d8) = 0x7800;
  *(undefined4 *)(param_1 + 0x9dc) = 0x5000;
  sub_08001F20(param_1 + 0x9cc,(undefined4 *)(param_1 + 0x9d8),0,0);
  sub_08003358(param_1 + 0x9b4);
  sub_08003370(param_1 + 0x9b4,param_1 + 0x9cc);
  sub_080B8A5C(param_1 + 0x974,&DAT_0202cca0,0x40);
  return in_lr;
}

