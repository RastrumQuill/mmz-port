// sub_08036968 at 0x08036968 (thumb)

undefined4 sub_08036968(int param_1)

{
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x2201);
  sub_0803A3FC(param_1,0x2201);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

