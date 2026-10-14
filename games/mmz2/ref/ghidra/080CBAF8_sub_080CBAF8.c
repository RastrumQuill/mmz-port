// sub_080CBAF8 at 0x080CBAF8 (thumb)

undefined4 sub_080CBAF8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_080128D4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    uVar2 = 0x38;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_080127E4(param_1,0x6702);
    sub_080032EC(0x9c);
    *(int *)(param_1 + 0xbc) = *(int *)(*(int *)(param_1 + 0xb4) + 0x54) + -0x3800;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x58);
    uVar2 = 0x40;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      DAT_0202ec44 = DAT_0202ec44 & 0xfffe;
      DAT_0202ed60 = *(int *)(param_1 + 0xb4) + 0x54;
      sub_08022F08();
      sub_080032EC(0x9c);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080128D4(param_1);
    *(int *)(*(int *)(param_1 + 0xb4) + 0x54) = *(int *)(*(int *)(param_1 + 0xb4) + 0x54) + -0x100;
    if (*(char *)(param_1 + 0x12) == '\x1c') {
      DAT_0202ed60 = param_1 + 0xbc;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_083491ac;
    *(undefined2 *)(param_1 + 0x26) = 1;
    sub_080032EC(0x9d);
    sub_080127E4(param_1,0x6703);
    uVar2 = 0x20;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

