// sub_08038794 at 0x08038794 (thumb)

undefined8 sub_08038794(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08038820(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0xd) == '\x04')) {
    *(undefined *)(param_1 + 0x174) = 4;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
  }
  return CONCAT44(in_lr,iVar1);
}

