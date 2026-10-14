// sub_0802937C at 0x0802937C (thumb)

undefined4 sub_0802937C(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0xd) != '\0') || ('\x02' < *(char *)(param_1 + 0x71))) &&
      ((*(ushort *)(param_2 + 0x1a) & 4) != 0)) && ((*(ushort *)(param_1 + 0x90) & 4) != 0)) {
    sub_08018B40(param_1);
  }
  return in_lr;
}

