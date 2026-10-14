// sub_080C7690 at 0x080C7690 (thumb)

undefined4 sub_080C7690(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,1);
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)
                      );
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C74C4(param_1);
  return in_lr;
}

