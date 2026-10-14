// sub_0808D8A8 at 0x0808D8A8 (thumb)

undefined8 sub_0808D8A8(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0xffffe700;
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_0802AD94(0,param_1,&local_18);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      sub_0808D90C(param_1);
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        uVar1 = 6;
      }
      else {
        uVar1 = 7;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}

