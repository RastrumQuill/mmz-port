// sub_0805F05C at 0x0805F05C (thumb)

undefined4 sub_0805F05C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa18);
    sub_08006E08(param_1 + 0x74,&DAT_0833cedc);
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    sub_08003338((int)*(short *)(param_1 + 0xe0));
    *(short *)(param_1 + 0xe0) = -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

