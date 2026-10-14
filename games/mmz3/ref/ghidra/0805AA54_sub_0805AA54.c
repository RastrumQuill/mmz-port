// sub_0805AA54 at 0x0805AA54 (thumb)

undefined4 sub_0805AA54(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb405);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6405;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x12) == '\f') {
    if (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58) + -0x4000) {
      sub_080AA228(param_1,1,4);
      sub_080AA228(param_1,1,5);
      sub_080AA228(param_1,1,6);
      sub_080AA228(param_1,1,7);
    }
    else {
      sub_080AA228(param_1,1,0);
      sub_080AA228(param_1,1,1);
      sub_080AA228(param_1,1,2);
      sub_080AA228(param_1,1,3);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

