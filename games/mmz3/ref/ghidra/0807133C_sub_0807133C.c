// sub_0807133C at 0x0807133C (thumb)

undefined8 sub_0807133C(int param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x8c) & 0x200) != 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
    sub_08071460(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

