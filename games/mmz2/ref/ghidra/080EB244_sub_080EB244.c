// sub_080EB244 at 0x080EB244 (thumb)

undefined4 sub_080EB244(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02000d14 & 8) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e8f4 + (uint)*(byte *)(param_1 + 2) * 4));
    if (*(byte *)(param_1 + 1) < 2) {
      sub_080EB960(param_1);
      sub_08002EA0(0x90);
      sub_080D5CCC(*(undefined4 *)(param_1 + 0x75b8),*(undefined *)(param_1 + 0xdd9),
                   *(undefined4 *)(param_1 + 0xdd4));
      sub_08002824(param_1 + 0xee0,(DAT_02000f96 & 0x1f00) << 3,0x1000);
      return in_lr;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  sub_080EB838(param_1);
  return in_lr;
}

