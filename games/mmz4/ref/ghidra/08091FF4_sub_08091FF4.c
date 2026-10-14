// sub_08091FF4 at 0x08091FF4 (thumb)

undefined4 sub_08091FF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885cf64);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

