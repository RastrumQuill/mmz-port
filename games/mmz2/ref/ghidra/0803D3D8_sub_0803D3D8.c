// sub_0803D3D8 at 0x0803D3D8 (thumb)

undefined4 sub_0803D3D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x179) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803D608(param_1,1,0,0);
  }
  return in_lr;
}

