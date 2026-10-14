// sub_08014DE8 at 0x08014DE8 (thumb)

undefined8 sub_08014DE8(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*param_1 != 0) {
    if ((iVar2 != 0) &&
       (((*(uint *)(iVar2 + 0x8c) & 0x200) != 0 || (*(short *)(iVar2 + 0xa4) == 0)))) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x10;
    }
    if (((DAT_0202ec38 & 1) == 0) && ((DAT_0202ec38 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      if ((*(undefined **)(param_1 + 0xc) != &DAT_08326438) &&
         (*(undefined **)(param_1 + 0xc) != &DAT_083264b0)) {
        if (DAT_0202ed84 == 0) {
          sub_0801B454(&DAT_0202ec40,&DAT_08326438);
        }
        else {
          sub_0801B454(&DAT_0202ec40);
        }
      }
      uVar1 = 1;
      goto LAB_08014e8c;
    }
  }
  uVar1 = 0;
LAB_08014e8c:
  return CONCAT44(in_lr,uVar1);
}

