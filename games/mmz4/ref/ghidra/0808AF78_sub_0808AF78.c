// sub_0808AF78 at 0x0808AF78 (thumb)

undefined8 sub_0808AF78(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  local_20[1] = 0xfffff600;
  local_20[2] = 0;
  local_20[3] = 0x1400;
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_0802AD94(0,param_1,local_20 + (uint)*(byte *)(param_1 + 0xc0) * 2);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        uVar1 = 0xc;
      }
      else {
        uVar1 = 0xd;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}

