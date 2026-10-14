// sub_08034558 at 0x08034558 (thumb)

undefined4 sub_08034558(int param_1,short param_2)

{
  undefined4 in_lr;
  
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) &&
     (*(short *)(param_1 + 0x13e) == param_2)) {
    sub_080177CC(param_1,*(short *)(param_1 + 0x13e),*(undefined *)(param_1 + 0x140),
                 *(undefined *)(param_1 + 0x141));
  }
  return in_lr;
}

