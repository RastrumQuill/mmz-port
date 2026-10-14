// sub_0809E564 at 0x0809E564 (thumb)

undefined4 sub_0809E564(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0xd);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0xc9) = 0;
  }
  sub_0809C980(param_1);
  return in_lr;
}

