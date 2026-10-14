// sub_080414BC at 0x080414BC (thumb)

undefined4 sub_080414BC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_08041586;
  sub_08029778(param_1,0x17);
  *(undefined *)(param_1 + 0xe) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar4 = 0x200;
  }
  else {
    uVar4 = 0xfffffe00;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
  if (*(char *)(param_1 + 0xca) != '\0') {
    sub_080833BC(param_1,3,0);
    *(char *)(param_1 + 0xca) = '\0';
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xcb) = 0;
    sub_08001EAC(0xa1);
    goto LAB_08041586;
  }
  bVar1 = *(byte *)(param_1 + 0xc9);
  if (bVar1 == 1) {
    sub_08083968(param_1,1,6);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xcb) = 6;
    goto LAB_08041586;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08041586;
    sub_080833BC(param_1,2,0);
LAB_08041576:
    uVar4 = 0xa1;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_08041586;
      sub_08084260(param_1,4,0);
      goto LAB_08041576;
    }
    sub_08084260(param_1,1,0);
    uVar4 = 0x85;
  }
  sub_08001EAC(uVar4);
  *(undefined *)(param_1 + 0x12) = 6;
  *(undefined *)(param_1 + 0xcb) = 0;
LAB_08041586:
  sub_080297C0(param_1);
  cVar2 = *(char *)(param_1 + 0xcb);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
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
    *(char *)(param_1 + 0xcb) = cVar2 + -1;
  }
  return in_lr;
}

