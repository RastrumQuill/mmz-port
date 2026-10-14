// sub_08070CB8 at 0x08070CB8 (thumb)

undefined8 sub_08070CB8(int param_1,short param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x05') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbc) = 1;
  }
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  if (param_2 == 0) {
    cVar1 = sub_080708D0(param_1,param_3,*(int *)(param_1 + 0x58) + 0x800);
    if (cVar1 != '\0') {
      uVar2 = sub_0807092C(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      cVar1 = '\a';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbc) = 0;
  }
  else {
    cVar1 = sub_080708D0(param_1,param_3,*(int *)(param_1 + 0x58) + 1);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_08070d36;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbc) = 0;
  }
  uVar2 = 0;
LAB_08070d36:
  return CONCAT44(in_lr,uVar2);
}

