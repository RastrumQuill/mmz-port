// sub_08096058 at 0x08096058 (thumb)

undefined4 sub_08096058(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080960a6;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar2 = 0xdb00;
    }
    else {
      uVar2 = 0xdb02;
    }
LAB_0809608c:
    sub_08017700(param_1,uVar2);
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar2 = 0xdb0f;
      goto LAB_0809608c;
    }
    sub_08017700(param_1,0xdb05);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080960a6:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_08095910(param_1);
  cVar1 = sub_080958B0(param_1);
  if (cVar1 != '\0') {
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x06';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

