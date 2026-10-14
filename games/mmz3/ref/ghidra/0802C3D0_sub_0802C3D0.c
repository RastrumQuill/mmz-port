// sub_0802C3D0 at 0x0802C3D0 (thumb)

undefined4 sub_0802C3D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    sub_08017700(param_1,0x200);
  }
  else {
    sub_080177CC(param_1,0x404,2,1);
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  *(undefined *)(param_1 + 0x12d) = 0xff;
  *(undefined *)(param_1 + 0x126) = 0xff;
  *(undefined *)(param_1 + 0x12e) = 0xff;
  *(undefined *)(param_1 + 0x127) = 0xff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802C45C(param_1);
  return in_lr;
}

