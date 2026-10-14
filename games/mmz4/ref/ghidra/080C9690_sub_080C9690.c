// sub_080C9690 at 0x080C9690 (thumb)

undefined4 sub_080C9690(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0xb4) + 0x40) * 0x1000000 >> 0x17)
                      ) / 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb4)] / 2;
  *(undefined *)(param_1 + 0x12) = 0x18;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08862ccc,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C9744(param_1);
  return in_lr;
}

