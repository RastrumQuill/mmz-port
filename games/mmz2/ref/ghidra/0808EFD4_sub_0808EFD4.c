// sub_0808EFD4 at 0x0808EFD4 (thumb)

undefined4 sub_0808EFD4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x800;
  sub_080AC60C(1,&local_14);
  sub_080032EC(0x2a);
  sub_0801DD2C(0,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

