// sub_080567D0 at 0x080567D0 (thumb)

undefined4 sub_080567D0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_0805689e;
  sub_08017700(param_1,0xb317);
  *(undefined *)(param_1 + 0xe) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar4 = 0x200;
  }
  else {
    uVar4 = 0xfffffe00;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  if (*(char *)(param_1 + 0xc6) != '\0') {
    sub_080A7E64(param_1,3,0);
    *(char *)(param_1 + 0xc6) = '\0';
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 199) = 0;
    sub_0800471C(0x46);
    goto LAB_0805689e;
  }
  bVar1 = *(byte *)(param_1 + 0xc5);
  if (bVar1 == 1) {
    sub_080A8324(param_1,1,6);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 199) = 6;
    goto LAB_0805689e;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_0805689e;
    sub_080A7E64(param_1,2,0);
LAB_0805688e:
    uVar4 = 0x46;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_0805689e;
      sub_080A8AC8(param_1,4,0);
      goto LAB_0805688e;
    }
    sub_080A8AC8(param_1,1,0);
    uVar4 = 0x49;
  }
  sub_0800471C(uVar4);
  *(undefined *)(param_1 + 0x12) = 6;
  *(undefined *)(param_1 + 199) = 0;
LAB_0805689e:
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 199);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      cVar2 = *(char *)(param_1 + 0x13);
      *(char *)(param_1 + 0x13) = cVar2 + -1;
      if (cVar2 == '\x01') {
        uVar3 = 0x19;
      }
      else {
        uVar3 = 0x17;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(char *)(param_1 + 199) = cVar2 + -1;
  }
  return in_lr;
}

