// sub_0803C6AC at 0x0803C6AC (thumb)

undefined4 sub_0803C6AC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0x179);
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803C9A8(param_1,1,0,0);
  }
  else if (cVar1 == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    sub_0803C9A8(param_1,2,0,0);
  }
  return in_lr;
}

