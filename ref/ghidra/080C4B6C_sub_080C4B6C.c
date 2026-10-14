// sub_080C4B6C at 0x080C4B6C (thumb)

undefined8 sub_080C4B6C(int param_1,char param_2)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 2;
  sub_080C4990(param_1,(int)param_2);
  if (*(char *)(param_1 + 2) != '\x02') {
    *(undefined *)(param_1 + 1) = 1;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return CONCAT44(in_lr,1);
}

