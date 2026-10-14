// sub_0807767C at 0x0807767C (thumb)

undefined4 sub_0807767C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080032EC(0x2a);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (bVar1 == 1) {
    sub_08077E58(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08077D74(param_1);
      }
      goto LAB_080776c6;
    }
    if (bVar1 != 0) goto LAB_080776c6;
    sub_08077D74(param_1);
  }
  sub_0801DD2C(3,param_1 + 0x54);
LAB_080776c6:
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

