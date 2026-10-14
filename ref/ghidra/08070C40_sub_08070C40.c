// sub_08070C40 at 0x08070C40 (thumb)

undefined4 sub_08070C40(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08070640();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

