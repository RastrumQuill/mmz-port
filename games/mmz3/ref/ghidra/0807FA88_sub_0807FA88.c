// sub_0807FA88 at 0x0807FA88 (thumb)

undefined8 sub_0807FA88(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    sub_0807FC04(param_1);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

