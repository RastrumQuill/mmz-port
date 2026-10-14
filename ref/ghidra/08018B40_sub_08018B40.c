// sub_08018B40 at 0x08018B40 (thumb)

undefined4 sub_08018B40(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ad4 & 1) == 0) {
    sub_08018B78(*(undefined4 *)(param_1 + 0x20),param_1);
    if (DAT_02022b42 != -1) {
      DAT_02022b42 = DAT_02022b42 + 1;
    }
  }
  return in_lr;
}

