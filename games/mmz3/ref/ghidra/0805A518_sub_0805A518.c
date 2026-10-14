// sub_0805A518 at 0x0805A518 (thumb)

undefined4 sub_0805A518(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    sub_080AA6A8(param_1);
    sub_08084A8C(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar2 = sub_0800471C(0x44);
    *(undefined2 *)(param_1 + 200) = uVar2;
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

