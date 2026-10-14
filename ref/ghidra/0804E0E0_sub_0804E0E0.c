// sub_0804E0E0 at 0x0804E0E0 (thumb)

undefined4 sub_0804E0E0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  local_10 = *(int *)(param_1 + 0x50) + -0x800;
  sub_0808827C(1,&local_14);
  sub_08001EAC(2);
  sub_08015698(0,param_1 + 0x4c);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

