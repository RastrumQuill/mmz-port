// sub_080649E0 at 0x080649E0 (thumb)

undefined4 sub_080649E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b08a8,param_1 + 0x4c,0xff);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar1 = DAT_0202286c;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(DAT_0202286c + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return in_lr;
}

