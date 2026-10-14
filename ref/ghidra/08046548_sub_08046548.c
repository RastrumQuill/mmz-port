// sub_08046548 at 0x08046548 (thumb)

undefined4 sub_08046548(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  sub_080297C0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0xc0) + 0xd) < 6) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = 0x28;
    }
    else {
      uVar2 = 0x30;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    *(undefined *)(iVar3 + 0xd) = 3;
    *(undefined *)(iVar3 + 0xe) = 0;
    sub_08086074(param_1,1,0);
    sub_08001EAC(0xa3);
  }
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0xd) == '\x03') &&
     (*(char *)(*(int *)(param_1 + 0xc4) + 0xd) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

