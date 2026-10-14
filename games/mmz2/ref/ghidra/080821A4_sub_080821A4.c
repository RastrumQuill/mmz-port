// sub_080821A4 at 0x080821A4 (thumb)

undefined4 sub_080821A4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x800;
  sub_080AC60C(1,&local_10);
  if (DAT_0202d004 < *(int *)(param_1 + 0x58)) {
    sub_080032EC(0x31);
  }
  else {
    sub_080032EC(0x2a);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

