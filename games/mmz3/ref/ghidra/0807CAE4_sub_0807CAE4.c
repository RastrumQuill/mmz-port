// sub_0807CAE4 at 0x0807CAE4 (thumb)

undefined4 sub_0807CAE4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 2) && (*(char *)(param_1 + 0xd) == '\x02')) {
    if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
      iVar1 = sub_080253D8(0,param_1,&DAT_083643fc);
      *(int *)(param_1 + 0xb4) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

