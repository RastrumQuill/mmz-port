// sub_0801D5F0 at 0x0801D5F0 (thumb)

undefined4 sub_0801D5F0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 9;
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 3;
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_08018BE8(param_1,*(undefined *)(param_1 + 0x116));
  sub_08028F3C(param_1);
  return in_lr;
}

