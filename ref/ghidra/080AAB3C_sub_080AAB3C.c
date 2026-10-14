// sub_080AAB3C at 0x080AAB3C (thumb)

undefined4 sub_080AAB3C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_0202164c;
  *(undefined4 *)(param_1 + 0x50) = DAT_0202164c;
  piVar2 = (int *)(param_1 + 0xbc);
  *piVar2 = *(int *)(param_1 + 0x4c) + -0x7800;
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  piVar3 = (int *)(param_1 + 0xc4);
  *piVar3 = *(int *)(param_1 + 0x4c) + 0x7800;
  *(undefined4 *)(param_1 + 200) = uVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08008FD0(1,piVar2,&DAT_082b6530,0);
    sub_08008FD0(0x41,piVar2,&DAT_082b6538,0);
    sub_08008FD0(0x41,piVar2,&DAT_082b6540,0);
    sub_08008FD0(0x41,piVar2,&DAT_082b6548,0);
    sub_08008FD0(0x41,piVar3,&DAT_082b6550,0);
  }
  else {
    sub_08008FD0(0x41,piVar2,&DAT_082b6558,0);
    sub_08008FD0(0x41,piVar2,&DAT_082b6560,0);
    sub_08008FD0(1,piVar3,&DAT_082b6568,0);
  }
  return in_lr;
}

