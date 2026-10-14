// sub_080288CC at 0x080288CC (thumb)

undefined4 sub_080288CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0xc0);
  if (cVar1 == '\x02') {
    sub_08029178(param_1,1);
  }
  else if (cVar1 == '\x03') {
    sub_08029178(param_1,2);
  }
  return in_lr;
}

