// sub_08056A20 at 0x08056A20 (thumb)

undefined4 sub_08056A20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb30d);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0x1d;
    sub_080A8324(param_1,4,0);
    sub_080A8324(param_1,4,1);
    sub_080A8324(param_1,4,2);
    sub_080A8324(param_1,4,3);
    sub_080A8324(param_1,4,4);
    sub_080A8324(param_1,4,5);
    sub_080A8324(param_1,4,6);
    sub_080A8324(param_1,4,7);
    *(undefined *)(param_1 + 0xc6) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_0800471C(0x46);
  }
  return in_lr;
}

