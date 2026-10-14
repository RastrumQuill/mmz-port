// sub_0802C45C at 0x0802C45C (thumb)

undefined4 sub_0802C45C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x200) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

