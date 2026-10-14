// sub_080952D4 at 0x080952D4 (thumb)

undefined4 sub_080952D4(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x109);
    sub_08007390(param_1 + 0x74,&DAT_083667e4);
    *(undefined4 *)(param_1 + 100) = 0x10;
    uVar1 = sub_080FE124(0x500);
    *(undefined *)(param_1 + 0x12) = uVar1;
    iVar3 = *(int *)(param_1 + 100) * (uint)*(byte *)(param_1 + 0x12);
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = -iVar3;
    }
    else {
      *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
    }
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0xd404);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (((((*(uint *)(DAT_0202f5c0 + 0x8c) & 1) != 0) && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) &&
      (0x10 < *(byte *)(param_1 + 0x12))) && (*(char *)(param_1 + 0x13) == '\0')) {
    sub_0800471C(0x52);
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(DAT_0202f5c0 + 0x122) = 1;
    *(undefined *)(DAT_0202f5c0 + 0xd) = 4;
    *(undefined *)(DAT_0202f5c0 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (((*(byte *)(param_1 + 0x12) & 3) == 0) && (8 < *(byte *)(param_1 + 0x12))) {
    sub_080B2484(3,param_1 + 0x54);
  }
  cVar2 = sub_08094AA8(param_1,*(undefined4 *)(param_1 + 0x5c));
  if (((cVar2 == '\0') || (*(char *)(param_1 + 0x12) == '\0')) ||
     (cVar2 = sub_08094B14(param_1,*(undefined4 *)(param_1 + 0x5c)), cVar2 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  cVar2 = sub_08094AE0(param_1,1);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08094AE0(param_1,1);
  return in_lr;
}

