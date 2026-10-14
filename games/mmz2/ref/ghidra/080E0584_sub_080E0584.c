// sub_080E0584 at 0x080E0584 (thumb)

undefined4 sub_080E0584(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined *)(param_1 + 7) = 1;
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    return in_lr;
  }
  sub_08002EA0(0x52);
  sub_080E03D4(param_2);
  if ((DAT_02000d14 & 8) != 0) {
    sub_080DE274();
    sub_080032EC(2);
    DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x1300;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

