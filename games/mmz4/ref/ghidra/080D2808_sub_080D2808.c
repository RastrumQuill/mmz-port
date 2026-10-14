// sub_080D2808 at 0x080D2808 (thumb)

undefined4 sub_080D2808(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,1);
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)
                      );
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D263C(param_1);
  return in_lr;
}

