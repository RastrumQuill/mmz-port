// sub_08092C04 at 0x08092C04 (thumb)

undefined4 sub_08092C04(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 9) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar1 + 0xd) == '\x02') {
      *(undefined *)(iVar1 + 0x12) = 0x40;
    }
    else {
      *(undefined *)(iVar1 + 0xd) = 2;
      *(undefined *)(iVar1 + 0xe) = 0;
    }
  }
  return in_lr;
}

