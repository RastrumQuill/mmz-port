// sub_0802BC9C at 0x0802BC9C (thumb)

undefined4 sub_0802BC9C(int param_1)

{
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x703) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0x704);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
  *(undefined *)(param_1 + 0xf) = 2;
  return in_lr;
}

