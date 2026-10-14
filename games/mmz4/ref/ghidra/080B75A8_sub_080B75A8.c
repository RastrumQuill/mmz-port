// sub_080B75A8 at 0x080B75A8 (thumb)

undefined4 sub_080B75A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    DAT_08860ab4 = 0xffffec00;
    DAT_08860ab0 = iVar1;
    iVar1 = sub_0802AD94(0,param_1);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_08860a74);
      sub_0801CF00(param_1,0xd200);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return in_lr;
}

