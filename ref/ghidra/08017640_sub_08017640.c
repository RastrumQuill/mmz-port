// sub_08017640 at 0x08017640 (thumb)

ulonglong sub_08017640(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) == '\x01') {
    uVar1 = sub_08017660();
  }
  else {
    uVar1 = sub_0801781C();
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

