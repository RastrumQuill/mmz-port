// sub_080EAFAC at 0x080EAFAC (thumb)

undefined8 sub_080EAFAC(int param_1,char param_2)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 2;
  sub_080EADE8(param_1,(int)param_2);
  if (*(char *)(param_1 + 2) != '\x02') {
    *(undefined *)(param_1 + 1) = 1;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return CONCAT44(in_lr,1);
}

