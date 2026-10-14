// sub_080404B8 at 0x080404B8 (thumb)

void sub_080404B8(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  iVar1 = 0x54;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = 0xac;
  }
  local_18 = (int)(short)(&DAT_080fe64c)[iVar1];
  local_14 = -(int)*(short *)((int)&DAT_080fe64c + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x17));
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + -0x800;
  sub_0809E0A0(param_1,&local_10,&local_18);
  return;
}

