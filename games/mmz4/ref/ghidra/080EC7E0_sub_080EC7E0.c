// sub_080EC7E0 at 0x080EC7E0 (thumb)

undefined4 sub_080EC7E0(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088663a8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (0x60 < DAT_0202dadc._3_1_) {
      sub_08005784(param_1 + 0x74,&DAT_08866378);
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080EC90C(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080EC968(param_1);
  }
  return in_lr;
}

