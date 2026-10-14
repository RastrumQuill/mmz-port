// sub_080D8CEC at 0x080D8CEC (thumb)

undefined4 sub_080D8CEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080D5594(param_1,(undefined4 *)(param_1 + 0xb4),param_1 + 0x5c,param_1 + 0xc4,2,0,
                       0xfffff400);
  if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
  }
  else if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080D8C5C(param_1);
  }
  return in_lr;
}

