// sub_0804CD08 at 0x0804CD08 (thumb)

undefined8 sub_0804CD08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + 0xc0);
  if ((*piVar2 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0x11,param_1,&DAT_0835f9d0);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      *piVar2 = 0;
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        sub_0800471C(0x8a);
      }
      else {
        *piVar2 = 0;
      }
    }
  }
  return CONCAT44(in_lr,1);
}

