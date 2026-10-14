// sub_0803A3FC at 0x0803A3FC (thumb)

undefined4 sub_0803A3FC(int param_1,short param_2)

{
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) {
    sub_0801CFC8(param_1,param_2,*(undefined *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  return in_lr;
}

