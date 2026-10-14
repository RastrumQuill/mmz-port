// sub_0807E288 at 0x0807E288 (thumb)

undefined4 sub_0807E288(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

