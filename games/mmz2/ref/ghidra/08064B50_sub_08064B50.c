// sub_08064B50 at 0x08064B50 (thumb)

undefined4 sub_08064B50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad09);
    sub_08006E08(param_1 + 0x74,&DAT_0833d7a8);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x400) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  local_10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_10;
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    local_10 = local_10 + *(int *)(param_1 + 100) * -0xc;
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(3,&local_10);
    sub_080032EC(0xd5);
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    if (*(int *)(param_1 + 0xc4) <= *(int *)(param_1 + 0x54)) goto LAB_08064c14;
  }
  else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 200)) goto LAB_08064c14;
  *(undefined *)(param_1 + 0x12) = 0;
LAB_08064c14:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

