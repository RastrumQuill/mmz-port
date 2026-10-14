// sub_080A788C at 0x080A788C (thumb)

undefined4 sub_080A788C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || ((*(uint *)(DAT_0202f5c0 + 0x8c) & 1) != 0)) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B7AC8(param_1,&local_14,&DAT_0836868e,4);
    sub_0800471C(0x3f);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

