// sub_0803BA84 at 0x0803BA84 (thumb)

undefined4 sub_0803BA84(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0x179);
  if (cVar1 == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803BCD8(param_1,2);
  }
  else if (cVar1 == '\x04') {
    *(undefined *)(param_1 + 0xd) = 2;
    sub_0803BCD8(param_1,1);
  }
  else if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_080032EC(0x14);
  }
  return in_lr;
}

