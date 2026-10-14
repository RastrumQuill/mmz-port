// sub_080E0174 at 0x080E0174 (thumb)

undefined4 sub_080E0174(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    sub_080032EC(0xfc);
    *(undefined4 *)(param_2 + 0x5d4) = 0xf000;
    *(undefined4 *)(param_2 + 0x5d8) = 0x2000;
    DAT_02000fa0._0_2_ = -(short)((uint)*(undefined4 *)(param_2 + 0x5d4) >> 8);
    DAT_02000fa0._2_2_ = 0xffe0;
    *(undefined2 *)(param_2 + 0x5c0) = 0;
    *(undefined2 *)(param_2 + 0x5c2) = 0x2800;
    *(undefined2 *)(param_2 + 0x5c4) = 0;
    *(undefined4 *)(param_2 + 0x5c8) = 0x100;
    *(undefined4 *)(param_2 + 0x5cc) = 0;
    *(undefined4 *)(param_2 + 0x5d0) = 0x40;
    *(undefined *)(param_2 + 0x5e0) = 0;
    *(undefined *)(param_2 + 0x5e1) = 0;
    *(undefined4 *)(param_2 + 0x5dc) = 0x10;
    *(undefined *)(param_2 + 0x5e2) = 0xdc;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    return in_lr;
  }
  sub_080DFFB4(param_2);
  cVar1 = *(char *)(param_2 + 0x5e2) + -1;
  *(char *)(param_2 + 0x5e2) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
  }
  *(char *)(param_2 + 0x5e0) = *(char *)(param_2 + 0x5e0) + -2;
  *(char *)(param_2 + 0x5e1) = *(char *)(param_2 + 0x5e1) + -2;
  sub_080E00C4(param_2);
  return in_lr;
}

