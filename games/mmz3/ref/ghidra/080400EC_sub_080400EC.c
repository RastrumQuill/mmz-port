// sub_080400EC at 0x080400EC (thumb)

undefined8 sub_080400EC(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + 0xc0);
  if ((*piVar2 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(9,param_1,&DAT_0835e598);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x10) {
        *(undefined *)(param_1 + 0xd) = 10;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *piVar2 = 0;
      }
    }
  }
  return CONCAT44(in_lr,1);
}

