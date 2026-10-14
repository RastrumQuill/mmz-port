// sub_0805FCC4 at 0x0805FCC4 (thumb)

undefined4 sub_0805FCC4(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa500);
    sub_08005784(param_1 + 0x74,&DAT_08857518);
    if (*(short *)(param_1 + 0xa4) < 0x11) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0x18;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

