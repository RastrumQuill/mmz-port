// sub_08062B7C at 0x08062B7C (thumb)

undefined4 sub_08062B7C(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x1200;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x103);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = (&DAT_08362100)[uVar2 * 2 >> 0x11 & 0xf];
    *(undefined *)(param_1 + 0x13) = 0xff;
    *(undefined4 *)(param_1 + 100) = 0;
    sub_08017700(param_1,0xd603);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08007390(param_1 + 0x74,&DAT_08362024);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 0xc;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

