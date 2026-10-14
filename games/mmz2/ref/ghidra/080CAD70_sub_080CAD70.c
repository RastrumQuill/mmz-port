// sub_080CAD70 at 0x080CAD70 (thumb)

undefined4 sub_080CAD70(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080CADEC(param_1);
  }
  else {
    sub_080CAEEC(param_1);
  }
  return in_lr;
}

