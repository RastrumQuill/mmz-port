// sub_080CD1B0 at 0x080CD1B0 (thumb)

undefined4 sub_080CD1B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_c = *(int *)(param_1 + 0x54);
  uStack_4 = in_lr;
  if (*(int *)(param_1 + 0xb4) != local_c) {
    if (*(int *)(param_1 + 0xb4) < local_c) {
      iVar1 = -0x1400;
    }
    else {
      iVar1 = 0x1400;
    }
    local_c = local_c + iVar1;
    local_8 = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(3,&local_c);
  }
  return uStack_4;
}

