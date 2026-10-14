// sub_08037480 at 0x08037480 (thumb)

undefined4 sub_08037480(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038C2C();
  if (0 < cVar1) {
    *(undefined2 *)(param_1 + 0xe) = 3;
    *(char *)(param_1 + 0xbb) = cVar1;
    sub_08038CD0(param_1,(cVar1 + 0x12) * 0x1000000 >> 0x18);
    sub_080374B4(param_1);
  }
  return in_lr;
}

