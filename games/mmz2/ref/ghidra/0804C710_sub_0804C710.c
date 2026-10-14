// sub_0804C710 at 0x0804C710 (thumb)

undefined4 sub_0804C710(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa119);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 1;
    if (uVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 0x23;
    }
    else if (uVar2 == 1) {
      *(undefined *)(param_1 + 0xd) = 0x25;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xf) = 6;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

